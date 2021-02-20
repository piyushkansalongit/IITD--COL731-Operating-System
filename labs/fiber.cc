#include "labs/fiber.h"
#include "util/math.h"
#include "labs/preempt.h"
using namespace math;
void shell_step_fiber(shellstate_t &shellstate, addr_t &main_stack, preempt_t &preempt, addr_t &f_stack, addr_t f_array, uint32_t f_arraysize, dev_lapic_t &lapic)
{

  //insert your code here
  if (shellstate.selected_menu_item >= 5 && !shellstate.allow_scheduling)
  {
    if (shellstate.fiber_state == 1)
    {
      if (shellstate.selected_menu_item == 5)
      {
        stack_init6(
            f_stack,
            &f_array,
            f_arraysize,
            &factorial_fiber,
            &main_stack,
            &f_stack,
            shellstate.max_width_of_menu_items,
            &shellstate.fiber_state,
            &shellstate.outputs[shellstate.selected_menu_item - 1][shellstate.outputNumbers[shellstate.selected_menu_item - 1] - 1][0],
            &preempt);
      }
      else if (shellstate.selected_menu_item == 6)
      {
        stack_init6(
            f_stack,
            &f_array,
            f_arraysize,
            &fibonacci_fiber,
            &main_stack,
            &f_stack,
            shellstate.max_width_of_menu_items,
            &shellstate.fiber_state,
            &shellstate.outputs[shellstate.selected_menu_item - 1][shellstate.outputNumbers[shellstate.selected_menu_item - 1] - 1][0],
            
            &preempt);
      }
      else
      {
        stack_init6(
            f_stack,
            &f_array,
            f_arraysize,
            &divisor_sum_fiber,
            &main_stack,
            &f_stack,
            shellstate.max_width_of_menu_items,
            &shellstate.fiber_state, 
            &shellstate.outputs[shellstate.selected_menu_item - 1][shellstate.outputNumbers[shellstate.selected_menu_item - 1] - 1][0],
            &preempt);
      }
      preempt.preempted = 1;
      lapic.reset_timer_count(10000000);
      stack_saverestore(main_stack, f_stack);
      lapic.reset_timer_count(0);
      if (preempt.preempted==1) // check if the fiber was preempted or returned using yield
      {
        if(shellstate.fiber_state==1)
          shellstate.fiber_state = 2;
        f_stack = preempt.saved_stack;
      }

    }
    else if (shellstate.fiber_state == 2)
    {
      preempt.preempted = 1;
      lapic.reset_timer_count(10000000);
      stack_saverestore(main_stack, f_stack);
      lapic.reset_timer_count(0);
      if (preempt.preempted==1)        // check if the fiber was preempted or returned using yield
      {    
        f_stack = preempt.saved_stack;
      }

    }
    if (shellstate.fiber_state == 3)
    {
      shellstate.fiber_state = 0;
    }
  }
}
