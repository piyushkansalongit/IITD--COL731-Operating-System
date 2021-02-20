#include "labs/shell.h"
#include "util/cursor.h"
#include "util/math.h"
#include "labs/coroutine.h"
#include "util/coroutine.h"
#include "labs/helper.h"

using namespace math;
using namespace helper;
using namespace cursor;
#define NUMBER_MENU_ITEMS 8
#define MAX_NUMBER_MENU_ITEMS 10
#define MAX_WIDTH_OF_MENU_ITEMS 50
#define TASKS_UNDER_SCHEDULING 3
#define MAX_TASK_INSTANCES 3
#define MAX_FIBERS_RUNNING 9
//
// initialize shellstate
//
void shell_init(shellstate_t &state)
{
  state.num_of_keys_pressed = 0;
  state.num_of_menu_items = NUMBER_MENU_ITEMS;
  state.max_num_of_menu_items = MAX_NUMBER_MENU_ITEMS;
  state.max_width_of_menu_items = MAX_WIDTH_OF_MENU_ITEMS;
  const char *menuItems[state.num_of_menu_items] = {
      "Keys:",
      "Echo",
      "Factorial Calculator",
      "Nth-Fibonacci Number",
      "Factorial Calculator (Coroutine)",
      "Factorial Calculation (Fiber)",
      "Nth-Fibonacci Number (Fiber)",
      "Divisor Sum (Fiber)"};
  for (int i = 0; i < state.num_of_menu_items; i++)
  {
    for (int j = 0; j < state.max_width_of_menu_items; j++)
    {
      state.menu_items[i][j] = menuItems[i][j];
      if (menuItems[i][j] == 0)
        break;
    }
  }
  state.display_key_item = true;
  state.selected_menu_item = 1;
  state.on_home_page = true;
  for (int i = 0; i < state.max_width_of_menu_items; i++)
  {
    state.command[i] = 0;
  }
  state.present_command_size = 0;
  for (int i = 0; i < state.num_of_menu_items - 1; i++)
  {
    state.outputNumbers[i] = 0;
  }
  state.clear_screen = false;
  state.showOutputs = false;
  state.clear_input_row = false;
  state.coroutine_state = 0; //Dead state
  state.fiber_state = 0;     //Dead state
  state.inTransition = false;
  state.inTransition2 = false;
  state.calculateOutput = false;
  state.allow_scheduling = true;
  state.number_of_tasks_under_scheduling = TASKS_UNDER_SCHEDULING;
  state.max_instances_under_scheduling = MAX_TASK_INSTANCES;
  state.number_of_fibers_running = 0;
  state.max_num_fibers = MAX_FIBERS_RUNNING;
  state.present_running_row = 0;
  state.present_running_column = 0;
  for (int i = 0; i < state.number_of_tasks_under_scheduling; i++)
  {
    for (int j = 0; j < state.max_instances_under_scheduling; j++)
    {
      state.fiber_states[i][j] = 0;
    }
  }
  for (int i = 0; i < MAX_FIBERS_RUNNING; i++)
  {
    state.fiber_stack_availability[i] = true;
  }
  disable_cursor();
}

//
//      +----------+-----+----+----+----+----+----+----+----+----+----+----+----+----+----+
//      | keys     | esc |  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  - |  = |back|
//      +----------+-----+----+----+----+----+----+----+----+----+----+----+----+----+----+
//      | scancode | 01  | 02 | 03 | 04 | 05 | 06 | 07 | 08 | 09 | 0a | 0b | 0c | 0d | 0e |
//      +----------+-----+----+----+----+----+----+----+----+----+----+----+----+----+----+
//
//      +----------+-----+----+----+----+----+----+----+----+----+----+----+----+----+----+
//      | keys     | tab |  q |  w |  e |  r |  t |  y |  u |  i |  o |  p |  [ |  ] |entr|
//      +----------+-----+----+----+----+----+----+----+----+----+----+----+----+----+----+
//      | scancode | 0f  | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 1a | 1b | 1c |
//      +----------+-----+----+----+----+----+----+----+----+----+----+----+----+----+----+
//
//      +----------+-----+----+----+----+----+----+----+----+----+----+----+----+----+----+
//      | keys     |ctrl |  a |  s |  d |  f |  g |  h |  j |  k |  l |  ; |  ' |    |shft|
//      +----------+-----+----+----+----+----+----+----+----+----+----+----+----+----+----+
//      | scancode | 1d  | 1e | 1f | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | 28 | 29 | 2a |
//      +----------+-----+----+----+----+----+----+----+----+----+----+----+----+----+----+

void shell_update(uint8_t scankey, shellstate_t &stateinout)
{
  hoh_debug("Got: " << unsigned(scankey));

  //  increment the the total number of keys pressed so far.
  stateinout.num_of_keys_pressed += 1;

  if (scankey == 0x4d || scankey == 0x4b || scankey == 0x3a || scankey == 0x2a)
    return;

  if (stateinout.on_home_page)
  {
    // down key
    if (scankey == 0x50)
    {
      stateinout.selected_menu_item = min(stateinout.num_of_menu_items - 1, stateinout.selected_menu_item + 1);
    }

    // up key
    if (scankey == 0x48)
    {
      stateinout.selected_menu_item = max(stateinout.selected_menu_item - 1, 1);
    }

    // enter key
    if (scankey == 0x1c)
    {
      stateinout.on_home_page = false;
      stateinout.inTransition = true;
      enable_cursor((uint8_t)0, (uint8_t)25);
      update_cursor(1, 23, 80);
    }
  }

  else
  {
    if (scankey == 0x50 || scankey == 0x48)
      return;

    // back space key
    if (stateinout.previous_key != 0x1d && scankey == 0x0e)
    {
      if (stateinout.present_command_size != 0)
      {
        stateinout.command[stateinout.present_command_size - 1] = 0;
        stateinout.previous_command_size = stateinout.present_command_size;
        stateinout.present_command_size = max(stateinout.present_command_size - 1, 0);
      }
    }

    // ctrl+back space key
    else if (stateinout.previous_key == 0x1d && scankey == 0x0e)
    {
      stateinout.on_home_page = true;
      stateinout.inTransition = true;
      disable_cursor();
      stateinout.present_command_size = 0;
      stateinout.previous_command_size = 0;
      for (int i = 0; i < stateinout.max_width_of_menu_items; i++)
        stateinout.command[i] = 0;
      stateinout.calculateOutput = false;
      return;
    }

    // ctrl+Tab key
    else if (stateinout.previous_key == 0x1d && scankey == 0xf)
    {
      // clear the history
      for (int i = 0; i < stateinout.max_num_of_menu_items; i++)
      {
        for (int j = 0; j < stateinout.max_width_of_menu_items; j++)
        {
          stateinout.outputs[stateinout.selected_menu_item - 1][i][j] = 0;
        }
      }
      stateinout.outputNumbers[stateinout.selected_menu_item - 1] = 0;
      stateinout.inTransition = true;
      int number_of_instances = 0;
      for (int i = 0; i < stateinout.max_instances_under_scheduling; i++)
      {
        if (stateinout.fiber_states[stateinout.selected_menu_item - 5][i] != 0)
          number_of_instances += 1;
      }
      stateinout.number_of_fibers_running -= number_of_instances;
      for (int i = 0; i < stateinout.max_instances_under_scheduling; i++)
      {
        if (stateinout.fiber_states[stateinout.selected_menu_item - 5][i] != 0)
        {
          int stack_index = stateinout.fiber_stackptr[stateinout.selected_menu_item - 5][i];
          stateinout.fiber_stack_availability[stack_index] = true;
          stateinout.fiber_states[stateinout.selected_menu_item - 5][i] = 0;
        }
      }
    }

    else
    {
      if (stateinout.outputNumbers[stateinout.selected_menu_item - 1] < stateinout.max_num_of_menu_items)
      {
        if (scankey == 0x1c) // enter
        {
          if (stateinout.command[0] == 0)
            return;

          if (!stateinout.allow_scheduling || stateinout.selected_menu_item <= 4)
          {
            for (int i = 0; i < stateinout.max_width_of_menu_items / 2; i++)
            {
              if (stateinout.command[i] == 0)
                break;
              stateinout.outputs[stateinout.selected_menu_item - 1][stateinout.outputNumbers[stateinout.selected_menu_item - 1]][i] = stateinout.command[i];
            }
            stateinout.outputNumbers[stateinout.selected_menu_item - 1] += 1;

            for (int i = 0; i < stateinout.present_command_size; i++)
              stateinout.command[i] = 0;

            update_cursor(1, 23, 80);
            stateinout.present_command_size = 0;
            stateinout.previous_command_size = 0;
            stateinout.inTransition2 = true;
            stateinout.calculateOutput = true;
            if (stateinout.selected_menu_item == 4)
            {
              stateinout.coroutine_state = 1; //Born state
            }
            else if (stateinout.selected_menu_item >= 5)
            {
              stateinout.fiber_state = 1; //Born state
            }
          }

          else
          {
            if (stateinout.number_of_fibers_running < stateinout.max_num_fibers)
            {
              int ind = 0;
              for (int i = 0; i < stateinout.max_instances_under_scheduling; i++)
              {
                if (stateinout.fiber_states[stateinout.selected_menu_item - 5][i] == 0)
                {
                  ind = i;
                  break;
                }
                else
                {
                  ind++;
                }
              }
              if (ind == 3)
                return;

              for (int i = 0; i < stateinout.max_width_of_menu_items / 2; i++)
              {
                if (stateinout.command[i] == 0)
                  break;
                stateinout.outputs[stateinout.selected_menu_item - 1][stateinout.outputNumbers[stateinout.selected_menu_item - 1]][i] = stateinout.command[i];
              }
              stateinout.outputNumbers[stateinout.selected_menu_item - 1] += 1;

              for (int i = 0; i < stateinout.present_command_size; i++)
                stateinout.command[i] = 0;

              update_cursor(1, 23, 80);
              stateinout.present_command_size = 0;
              stateinout.previous_command_size = 0;
              stateinout.inTransition2 = true;
              stateinout.calculateOutput = true;

              int stack_index = 0;
              for (int i = 0; i < stateinout.max_num_fibers; i++)
              {
                if (stateinout.fiber_stack_availability[i] == true)
                {
                  stack_index = i;
                  stateinout.fiber_stack_availability[i] = false;
                  break;
                }
              }
              stateinout.number_of_fibers_running += 1;
              stateinout.fiber_states[stateinout.selected_menu_item - 5][ind] = 1;
              stateinout.fiber_stackptr[stateinout.selected_menu_item - 5][ind] = stack_index;
              stateinout.fiber_output_index[stateinout.selected_menu_item - 5][ind] = stateinout.outputNumbers[stateinout.selected_menu_item - 1] - 1;
            }
          }
        }
      }

      if (stateinout.selected_menu_item == 1) // Echo command
      {
        if (scankey != 0x1c)
        {
          if (scankey != 0x1d)
          { // except the ctrl key
            stateinout.command[stateinout.present_command_size] = scankey_to_char(scankey);
            stateinout.previous_command_size = stateinout.present_command_size;
            stateinout.present_command_size += 1;
          }
        }
      }

      else // Factorial Calculator
      {
        if (scankey <= 0x0b && scankey >= 0x02) // numerical digit
        {
          if (stateinout.present_command_size < stateinout.max_width_of_menu_items)
          {
            stateinout.command[stateinout.present_command_size] = 48 + (scankey - 1) % 10;
            stateinout.previous_command_size = stateinout.present_command_size;
            stateinout.present_command_size += 1;
          }
        }
      }
    }
  }
  stateinout.previous_key = scankey;
}

//
// do computation
//
void shell_step(shellstate_t &stateinout)
{

  stateinout.display_key_item = false;

  if (stateinout.selected_menu_item <= 3)
  {
    bool flag = true;
    if (stateinout.inTransition)
    {
      flag = false;
      stateinout.clear_screen = true;
      stateinout.showOutputs = true;
    }
    else
    {
      stateinout.clear_screen = false;
      stateinout.showOutputs = false;
    }

    stateinout.inTransition = false;

    if (flag == true)
    {
      if (stateinout.inTransition2)
      {
        stateinout.clear_input_row = true;
        stateinout.showOutputs = true;
      }
      else
      {
        stateinout.clear_input_row = false;
        stateinout.showOutputs = false;
      }
      stateinout.inTransition2 = false;
    }

    // Both of the transitions above can't be executed simulataneously

    if (stateinout.calculateOutput)
    {
      switch (stateinout.selected_menu_item)
      {
      case 2:
      {
        factorial(stateinout.outputs[stateinout.selected_menu_item - 1][stateinout.outputNumbers[stateinout.selected_menu_item - 1] - 1], stateinout.max_width_of_menu_items);
        stateinout.calculateOutput = false;
        break;
      }
      case 3:
      {
        fibonacci(stateinout.outputs[stateinout.selected_menu_item - 1][stateinout.outputNumbers[stateinout.selected_menu_item - 1] - 1], stateinout.max_width_of_menu_items);
        stateinout.calculateOutput = false;
        break;
      }
      default:
      {
      }
      }
    }
  }
  else
  {
    bool flag = true;
    if (stateinout.inTransition)
    {
      flag = false;
      stateinout.clear_screen = true;
      stateinout.showOutputs = true;
    }
    else
    {
      stateinout.clear_screen = false;
    }
    stateinout.inTransition = false;

    if (flag == true)
    {
      if (stateinout.inTransition2)
      {
        stateinout.clear_input_row = true;
        stateinout.showOutputs = true;
      }
      else
      {
        stateinout.clear_input_row = false;
      }
      stateinout.inTransition2 = false;
    }
  }
}

//
// shellstate --> renderstate
//
void shell_render(const shellstate_t &shell, renderstate_t &render)
{
  render.num_of_keys_pressed = shell.num_of_keys_pressed;

  render.num_of_menu_items = shell.num_of_menu_items;
  render.max_num_of_menu_items = shell.max_num_of_menu_items;
  render.max_width_of_menu_items = shell.max_width_of_menu_items;
  for (int i = 0; i < shell.num_of_menu_items; i++)
  {
    int j = 0;
    for (; j < shell.max_width_of_menu_items; j++)
    {
      render.menu_items[i][j] = shell.menu_items[i][j];
      if (shell.menu_items[i][j] == 0)
        break;
    }
    if (j == 0)
      break;
  }

  render.display_key_item = shell.display_key_item;

  render.selected_menu_item = shell.selected_menu_item;

  render.on_home_page = shell.on_home_page;

  for (int i = 0; i < shell.max_width_of_menu_items; i++)
  {
    render.command[i] = shell.command[i];
  }
  render.present_command_size = shell.present_command_size;
  render.previous_command_size = shell.previous_command_size;

  for (int i = 0; i < shell.num_of_menu_items - 1; i++)
  {
    for (int j = 0; j < shell.max_num_of_menu_items; j++)
    {
      int k = 0;
      for (; k < shell.max_width_of_menu_items; k++)
      {
        render.outputs[i][j][k] = shell.outputs[i][j][k];
      }
      if (k == 0)
        break;
    }
  }
  for (int i = 0; i < shell.num_of_menu_items - 1; i++)
  {
    render.outputNumbers[i] = shell.outputNumbers[i];
  }
  render.clear_screen = shell.clear_screen;
  render.showOutputs = shell.showOutputs;
  render.clear_input_row = shell.clear_input_row;
}

//
// compare a and b
//
bool render_eq(const renderstate_t &a, const renderstate_t &b)
{
  bool command = true;
  for (int i = 0; i < a.max_width_of_menu_items; i++)
  {
    if (a.command[i] == 0 && b.command[i] == 0)
      break;
    if (a.command[i] != b.command[i])
    {
      command = false;
      break;
    }
  }

  bool output = true;
  for (int i = 0; i < a.num_of_menu_items - 1; i++)
  {
    for (int j = 0; j < a.max_num_of_menu_items; j++)
    {
      for (int k = 0; k < a.max_width_of_menu_items; k++)
      {
        if (a.outputs[i][j][k] != b.outputs[i][j][k])
        {
          output = false;
          break;
        }
      }
      if (!output)
        break;
    }
    if (!output)
      break;
  }
  bool ret = {
      a.num_of_keys_pressed == b.num_of_keys_pressed &&
      a.display_key_item == b.display_key_item &&
      a.selected_menu_item == b.selected_menu_item &&
      a.on_home_page == b.on_home_page &&
      command &&
      a.present_command_size == b.present_command_size &&
      output &&
      a.clear_screen == b.clear_screen &&
      a.showOutputs == b.showOutputs &&
      a.clear_input_row == b.clear_input_row};
  return ret;

  return false;
}

//
// Given a render state, we need to write it into vgatext buffer
//

void render(const renderstate_t &state, int w, int h, addr_t vgatext_base)
{
  // display the boundaries.
  if (state.display_key_item)
  {
    drawrect(0, 1, 80, 25, (uint8_t)0x0, (uint8_t)0x7, w, h, vgatext_base);
  }

  // display the "Keys" item which is known to be the first menu Item.
  if (state.display_key_item)
  {
    const char *str = state.menu_items[0];
    drawtext(66, 0, str, state.max_width_of_menu_items, (uint8_t)0x0, (uint8_t)0x7, w, h, vgatext_base);
  }

  // display the value of number of Keys pressed.
  for (int i = 0; i < state.max_width_of_menu_items; i++)
  {
    if (state.menu_items[0][i] == 0)
    {
      drawnumberinhex(67 + i, 0, state.num_of_keys_pressed, 10, (uint8_t)0x0, (uint8_t)0x7, w, h, vgatext_base);
      break;
    }
  }
  //see if the screen neeeds to be cleared
  if (state.clear_screen)
  {
    fillrect(1, 2, 79, 24, 0x0, 0x7, w, h, vgatext_base);
  }

  // display all the menu items only if you are on the home page.
  if (state.on_home_page)
  {
    for (int i = 1; i < state.num_of_menu_items; i++)
    {
      if (i == state.selected_menu_item)
      {
        display_menu_item(state, i, (uint8_t)0x5, w, h, vgatext_base);
      }
      else
      {
        display_menu_item(state, i, (uint8_t)0x8, w, h, vgatext_base);
      }
    }
  }
  else
  {
    int size = state.max_width_of_menu_items;

    // see if the command row needs to be cleared
    if (state.clear_input_row)
    {
      for (int i = 0; i < size; i++)
        writecharxy(1 + i, 23, state.command[i], 0x0, 0x7, w, h, vgatext_base);
    }
    // render below the command that has been typed yet
    if (state.present_command_size > state.previous_command_size)
    { // if something has been added to the command
      writecharxy(state.present_command_size, 23, state.command[state.present_command_size - 1], 0x0, 0x7, w, h, vgatext_base);
      update_cursor(state.present_command_size + 1, 23, w);
    }
    else if (state.previous_command_size > state.present_command_size)
    { // if something has been removed from the command
      writecharxy(state.previous_command_size, 23, 0, 0x0, 0x7, w, h, vgatext_base);
      update_cursor(state.previous_command_size, 23, w);
    }

    if (state.selected_menu_item == 1)
    {
      if (state.showOutputs)
      {
        const char *str = "Echo Commands";
        drawtext(33, 5, str, size, 0x0, 0x7, w, h, vgatext_base);

        for (int i = 0; i < state.max_num_of_menu_items; i++)
        {
          if (state.outputs[state.selected_menu_item - 1][i][0] == 0)
            break;
          const char *echo_command = state.outputs[state.selected_menu_item - 1][i];
          drawtext(25, 6 + i, echo_command, size, 0x0, 0x7, w, h, vgatext_base);
        }
      }
    }
    else
    {
      if (state.showOutputs)
      {
        drawtext(22, 5, state.menu_items[state.selected_menu_item], size, 0x0, 0x7, w, h, vgatext_base);
        const char *inp = "Input";
        const char *outp = "Output";
        drawtext(25, 6, inp, size / 2, 0x1, 0x7, w, h, vgatext_base);
        drawtext(45, 6, outp, size / 2, 0x1, 0x7, w, h, vgatext_base);
        for (int i = 0; i < 10; i++)
        {
          if (state.outputs[state.selected_menu_item - 1][i][0] == 0)
            break;

          char input_number[size / 2];
          for (int j = 0; j < size / 2; j++)
            input_number[j] = state.outputs[state.selected_menu_item - 1][i][j];

          char output_number[size / 2];
          for (int j = 0; j < size / 2; j++)
            output_number[j] = state.outputs[state.selected_menu_item - 1][i][size / 2 + j];

          drawtext(25, 7 + i, input_number, size / 2, 0x0, 0x7, w, h, vgatext_base);
          drawtext(45, 7 + i, output_number, size / 2, 0x0, 0x7, w, h, vgatext_base);
        }
      }
    }
  }
}
