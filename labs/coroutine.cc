#include "labs/coroutine.h"
#include "util/math.h"
using namespace math;
void shell_step_coroutine(shellstate_t& shellstate, coroutine_t& f_coro, f_t& f_locals){

    //insert your code here
    if(shellstate.selected_menu_item==4)
    {
        if(shellstate.coroutine_state==1)
        {
            coroutine_reset(f_coro);

            int size = shellstate.max_width_of_menu_items;

            f_locals.iter[0] = '1';
            for(int i=1; i<size/2; i++)
                f_locals.iter[i] = 0;

            for(int i=0; i<size/2; i++)
                f_locals.ret[i] = shellstate.outputs[shellstate.selected_menu_item-1][shellstate.outputNumbers[shellstate.selected_menu_item-1]-1][i];


            for(int i=0; i<size/2; i++)
                f_locals.temp[i]=shellstate.outputs[shellstate.selected_menu_item-1][shellstate.outputNumbers[shellstate.selected_menu_item-1]-1][i];

            for(int i=0; i<size/2; i++)
                f_locals.mul_temp[i]=f_locals.ret[i];

            f_locals.mul_iter[0]='1';
            for(int i=1;i<size/2;i++)
                f_locals.mul_iter[i]=0;
                
            factorial_Coroutine(
                                &f_coro, 
                                &f_locals, 
                                shellstate.max_width_of_menu_items, 
                                &shellstate.coroutine_state
                            );
        }
        else if(shellstate.coroutine_state==2)
        {
            factorial_Coroutine(
                                &f_coro, 
                                &f_locals,
                                shellstate.max_width_of_menu_items, 
                                &shellstate.coroutine_state
                            );
                            
        }
        if(shellstate.coroutine_state==3)
        {
            shellstate.coroutine_state=0;
        }
        int size = shellstate.max_width_of_menu_items;
        for(int i=size/2; i<size; i++)
        {
            shellstate.outputs[shellstate.selected_menu_item-1][shellstate.outputNumbers[shellstate.selected_menu_item-1]-1][i] = f_locals.ret[i-size/2];
        }
    }



}


