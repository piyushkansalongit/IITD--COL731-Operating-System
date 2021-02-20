#pragma once

#include "labs/shell.h"
#include "util/coroutine.h"

// state for your coroutine implementation:
struct f_t{

    //insert your code here
    char iter[25];
    char ret[25];
    char temp[25];
    char mul_temp[25];
    char mul_iter[25];
    char add_iter[25];
};


void shell_step_coroutine(shellstate_t& shellstate, coroutine_t& f_coro, f_t& f_locals);


