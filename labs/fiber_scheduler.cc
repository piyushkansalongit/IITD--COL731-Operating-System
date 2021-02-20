#include "labs/fiber_scheduler.h"
#include "labs/fiber.h"
#include "util/math.h"
using namespace math;
//
// stackptrs:      Type: addr_t[stackptrs_size].  array of stack pointers (generalizing: main_stack and f_stack)
// stackptrs_size: number of elements in 'stacks'.
//
// arrays:      Type: uint8_t [arrays_size]. array of memory region for stacks (generalizing: f_array)
// arrays_size: size of 'arrays'. equal to stackptrs_size*STACK_SIZE.
//
// Tip: divide arrays into stackptrs_size parts.
// Tip: you may implement a circular buffer using arrays inside shellstate_t
//      if you choose linked lists, create linked linked using arrays in
//      shellstate_t. (use array indexes as next pointers)
// Note: malloc/new is not available at this point.
//

void shell_step_fiber_scheduler(shellstate_t &shellstate, addr_t &main_stack, preempt_t &preempt, addr_t stackptrs[], size_t stackptrs_size, addr_t arrays, size_t arrays_size, dev_lapic_t &lapic)
{

    //insert your code here
    if (shellstate.allow_scheduling && shellstate.number_of_fibers_running > 0)
    {
    beginning:
        int &fiber_state = shellstate.fiber_states[shellstate.present_running_row][shellstate.present_running_column];
        if (fiber_state == 0)
        {
            shellstate.present_running_row += 1;
            if (shellstate.present_running_row == shellstate.number_of_tasks_under_scheduling)
            {
                shellstate.present_running_row = 0;
                shellstate.present_running_column += 1;
                if (shellstate.present_running_column == shellstate.max_instances_under_scheduling)
                {
                    shellstate.present_running_column = 0;
                }
            }
            goto beginning;
        }
        int selected_menu_item = 5 + shellstate.present_running_row;
        int stack_index = shellstate.fiber_stackptr[shellstate.present_running_row][shellstate.present_running_column];
        int output_index = shellstate.fiber_output_index[shellstate.present_running_row][shellstate.present_running_column];
        uint32_t f_arraysize = (stack_index + 1) * (arrays_size / stackptrs_size);
        if (fiber_state == 1)
        {
            if (shellstate.present_running_row == 0)
            {
                stack_init6(
                    stackptrs[stack_index + 1],
                    &arrays,
                    f_arraysize,
                    &factorial_fiber,
                    &main_stack,
                    &stackptrs[stack_index + 1],
                    shellstate.max_width_of_menu_items,
                    &shellstate.fiber_states[shellstate.present_running_row][shellstate.present_running_column],
                    &shellstate.outputs[4 + shellstate.present_running_row][output_index][0],
                    &preempt);
            }
            else if (shellstate.present_running_row == 1)
            {
                stack_init6(
                    stackptrs[stack_index + 1],
                    &arrays,
                    f_arraysize,
                    &fibonacci_fiber,
                    &main_stack,
                    &stackptrs[stack_index + 1],
                    shellstate.max_width_of_menu_items,
                    &shellstate.fiber_states[shellstate.present_running_row][shellstate.present_running_column],
                    &shellstate.outputs[4 + shellstate.present_running_row][output_index][0],
                    &preempt);
            }
            else if (shellstate.present_running_row == 2)
            {
                stack_init6(
                    stackptrs[stack_index + 1],
                    &arrays,
                    f_arraysize,
                    &divisor_sum_fiber,
                    &main_stack,
                    &stackptrs[stack_index + 1],
                    shellstate.max_width_of_menu_items,
                    &shellstate.fiber_states[shellstate.present_running_row][shellstate.present_running_column],
                    &shellstate.outputs[4 + shellstate.present_running_row][output_index][0],
                    &preempt);
            }
            preempt.preempted = 1;
            lapic.reset_timer_count(10000000);
            stack_saverestore(main_stack, stackptrs[stack_index + 1]);
            lapic.reset_timer_count(0);
            if (preempt.preempted == 1)
            {
                if (fiber_state == 1)
                    fiber_state = 2;
                stackptrs[stack_index + 1] = preempt.saved_stack;
            }
        }
        else if (fiber_state == 2)
        {
            preempt.preempted = 1;
            lapic.reset_timer_count(10000000);
            stack_saverestore(main_stack, stackptrs[stack_index + 1]);
            lapic.reset_timer_count(0);
            if (preempt.preempted == 1) // check if the fiber was preempted or returned using yield
            {
                stackptrs[stack_index+1] = preempt.saved_stack;
            }
        }
        if (fiber_state == 3)
        {
            shellstate.fiber_states[shellstate.present_running_row][shellstate.present_running_column] = 0;
            shellstate.number_of_fibers_running -= 1;
            shellstate.fiber_stack_availability[stack_index] = true;
        }
        shellstate.present_running_row += 1;
        if (shellstate.present_running_row == shellstate.number_of_tasks_under_scheduling)
        {
            shellstate.present_running_row = 0;
            shellstate.present_running_column += 1;
            if (shellstate.present_running_column == shellstate.max_instances_under_scheduling)
            {
                shellstate.present_running_column = 0;
            }
        }
    }
    else
    {
        shellstate.present_running_row = 0;
        shellstate.present_running_column = 0;
    }
}
