#pragma once
#include "util/config.h"
#include "labs/coroutine.h"
#include "util/coroutine.h"
#include "util/debug.h"
#include "util/fiber.h"
#include "labs/preempt.h"
namespace math
{
static int max(int a, int b)
{
    return a > b ? a : b;
}

static int min(int a, int b)
{
    return a < b ? a : b;
}

static bool equal(char a[], char b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == 0 && b[i] == 0)
            break;
        if (a[i] != b[i])
            return false;
    }
    return true;
}

static bool less_than(char a[], char b[], int size)
{
    bool flaf = false;

    int n_digit_a = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == 0)
            break;
        n_digit_a += 1;
    }

    int n_digit_b = 0;
    for (int i = 0; i < size; i++)
    {
        if (b[i] == 0)
            break;
        n_digit_b += 1;
    }

    if (n_digit_a < n_digit_b)
        return true;
    else if (n_digit_a > n_digit_b)
        return false;
    else
    {

        for (int i = 0; i < n_digit_b; i++)
        {
            if (a[i] < b[i])
                return true;
            else if (a[i] > b[i])
                return false;
        }
        return false;
    }
}
static void increment(char a[], int size)
{
    int carry = 1;
    for (int i = size - 1; i >= 0; i--)
    {
        if (a[i] == 0)
            continue;
        if (a[i] + carry <= 57)
        {
            a[i] = a[i] + carry;
            carry = 0;
            break;
        }
        else
        {
            a[i] = 48;
        }
    }
    if (carry == 1)
    {
        char temp = a[0];
        for (int i = 1; i < size; i++)
        {
            char temp2 = a[i];
            a[i] = temp;
            temp = temp2;
        }
        a[0] = '1';
    }
}

static void add(char a[], char b[], int size)
{
    char iter[size];
    iter[0] = '0';
    for (int i = 1; i < size; i++)
        iter[i] = 0;

    while (!equal(iter, b, size))
    {
        increment(iter, size);
        increment(a, size);
    }
}

static void multiply(char a[], char b[], int size)
{
    char temp[size];
    for (int i = 0; i < size; i++)
        temp[i] = a[i];

    char iter[size];
    iter[0] = '1';
    for (int i = 1; i < size; i++)
        iter[i] = 0;

    while (!equal(iter, b, size))
    {
        add(a, temp, size);
        increment(iter, size);
    }
}

static void fibonacci(char a[], int size)
{
    char num1[size / 2];
    num1[0] = '0';
    for (int i = 1; i < size / 2; i++)
        num1[i] = 0;

    char num2[size / 2];
    num2[0] = '1';
    for (int i = 1; i < size / 2; i++)
        num2[i] = 0;

    char iterator[size / 2];
    iterator[0] = '0';
    for (int i = 1; i < size / 2; i++)
        iterator[i] = 0;

    if (equal(a, iterator, size / 2))
    {
        for (int i = 0; i < size / 2; i++)
        {
            a[size / 2 + i] = num1[i];
        }
        return;
    }

    increment(iterator, size / 2);
    if (equal(a, iterator, size / 2))
    {
        for (int i = 0; i < size / 2; i++)
        {
            a[i + size / 2] = num2[i];
        }
        return;
    }

    do
    {
        char temp[size / 2];
        for (int i = 0; i < size / 2; i++)
            temp[i] = num2[i];

        add(num2, num1, size / 2);
        for (int i = 0; i < size / 2; i++)
            num1[i] = temp[i];

        increment(iterator, size / 2);

    } while (!equal(a, iterator, size / 2));

    for (int i = 0; i < size / 2; i++)
        a[i + size / 2] = num2[i];

    return;
}
static void factorial(char a[], int size)
{
    char iter[size / 2];
    iter[0] = '1';
    for (int i = 1; i < size / 2; i++)
        iter[i] = 0;

    char ret[size / 2];
    for (int i = 0; i < size / 2; i++)
        ret[i] = a[i];

    char temp[size / 2];
    for (int i = 0; i < size / 2; i++)
        temp[i] = a[i];
    while (!equal(iter, temp, size / 2))
    {
        multiply(ret, iter, size / 2);
        increment(iter, size / 2);
    }

    for (int i = 0; i < size / 2; i++)
    {
        a[size / 2 + i] = ret[i];
    }
    return;
}
static void factorial_Coroutine(coroutine_t *pf_coro, f_t *pf_locals, int size, int *pdone)
{
    coroutine_t &f_coro = *pf_coro;
    int &done = *pdone;
    h_begin(f_coro);
    while (!equal(pf_locals->iter, pf_locals->temp, size / 2))
    {
        for (int i = 0; i < size / 2; i++)
            pf_locals->mul_temp[i] = pf_locals->ret[i];

        pf_locals->mul_iter[0] = '1';
        for (int i = 1; i < size / 2; i++)
            pf_locals->mul_iter[i] = 0;

        while (!equal(pf_locals->mul_iter, pf_locals->iter, size / 2))
        {
            pf_locals->add_iter[0] = '0';
            for (int i = 1; i < size / 2; i++)
                pf_locals->add_iter[i] = 0;
            while (!equal(pf_locals->add_iter, pf_locals->mul_temp, size / 2))
            {
                increment(pf_locals->add_iter, size / 2);
                increment(pf_locals->ret, size / 2);
                done = 2;
                h_yield(f_coro);
            }
            increment(pf_locals->mul_iter, size / 2);
        }

        increment(pf_locals->iter, size / 2);
    }
    done = 3;
    h_end(f_coro);
}

static void switch_back(char *out, char ret[], addr_t &f_stack, addr_t &main_stack, int size, preempt_t *preempt)
{
    preempt->preempted = 0;
    for (int i = 0; i < size / 2; i++)
    {
        *(out + size / 2 + i) = ret[i];
    }
    stack_saverestore(f_stack, main_stack);
}

static void factorial_fiber(addr_t *pmain_stack, addr_t *pf_stack, int size, int *pdone, char *out, preempt_t *preempt)
{
    addr_t &main_stack = *pmain_stack;
    addr_t &f_stack = *pf_stack;

    int &done = *pdone;

    char ret[size / 2];
    for (int i = 0; i < size / 2; i++)
    {
        ret[i] = *(out + i);
    }
    char temp[size / 2];
    for (int i = 0; i < size / 2; i++)
    {
        temp[i] = *(out + i);
    }
    char iter[size / 2];
    iter[0] = '1';
    for (int i = 1; i < size / 2; i++)
        iter[i] = 0;
    while (!equal(iter, temp, size / 2))
    {
        char mul_temp[size / 2];
        for (int i = 0; i < size / 2; i++)
            mul_temp[i] = ret[i];

        char mul_iter[size / 2];
        mul_iter[0] = '1';
        for (int i = 1; i < size / 2; i++)
            mul_iter[i] = 0;

        while (!equal(mul_iter, iter, size / 2))
        {
            char add_iter[size / 2];
            add_iter[0] = '0';
            for (int i = 1; i < size / 2; i++)
                add_iter[i] = 0;
            while (!equal(add_iter, mul_temp, size / 2))
            {
                increment(add_iter, size / 2);
                increment(ret, size / 2);
                done = 2;
                for (int i = 0; i < size / 2; i++)
                {
                    *(out + size / 2 + i) = ret[i];
                }
                // switch_back(out, ret, f_stack, main_stack, size, preempt);
            }
            increment(mul_iter, size / 2);
        }
        increment(iter, size / 2);
    }
    done = 3;
    switch_back(out, ret, f_stack, main_stack, size, preempt);
}
static void fibonacci_fiber(addr_t *pmain_stack, addr_t *pf_stack, int size, int *pdone, char *out, preempt_t *preempt)
{
    addr_t &main_stack = *pmain_stack;
    addr_t &f_stack = *pf_stack;

    int &done = *pdone;

    char a[size / 2];
    for (int i = 0; i < size / 2; i++)
    {
        a[i] = *(out + i);
    }

    char num1[size / 2];
    num1[0] = '0';
    for (int i = 1; i < size / 2; i++)
        num1[i] = 0;

    char num2[size / 2];
    num2[0] = '1';
    for (int i = 1; i < size / 2; i++)
        num2[i] = 0;

    char iterator[size / 2];
    iterator[0] = '0';
    for (int i = 1; i < size / 2; i++)
        iterator[i] = 0;

    if (equal(a, iterator, size / 2))
    {
        for (int i = 0; i < size / 2; i++)
        {
            a[i] = num1[i];
        }
        done = 3;
        switch_back(out, num1, f_stack, main_stack, size, preempt);
    }

    increment(iterator, size / 2);
    if (equal(a, iterator, size / 2))
    {
        for (int i = 0; i < size / 2; i++)
        {
            a[i] = num2[i];
        }
        done = 3;
        switch_back(out, num2, f_stack, main_stack, size, preempt);
    }

    do
    {
        char temp[size / 2];
        for (int i = 0; i < size / 2; i++)
            temp[i] = num2[i];

        char add_iter[size / 2];
        add_iter[0] = '0';
        for (int i = 1; i < size / 2; i++)
            add_iter[i] = 0;

        while (!equal(add_iter, num1, size / 2))
        {
            increment(add_iter, size / 2);
            increment(num2, size / 2);
            done = 2;
            switch_back(out, num2, f_stack, main_stack, size, preempt);
        }

        for (int i = 0; i < size / 2; i++)
            num1[i] = temp[i];
        increment(iterator, size / 2);

    } while (!equal(a, iterator, size / 2));

    done = 3;
    switch_back(out, num2, f_stack, main_stack, size, preempt);
}
static void divisor_sum_fiber(addr_t *pmain_stack, addr_t *pf_stack, int size, int *pdone, char *out, preempt_t *preempt)
{

    addr_t &main_stack = *pmain_stack;
    addr_t &f_stack = *pf_stack;
    int &done = *pdone;

    char number[size / 2];
    for (int i = 0; i < size / 2; i++)
        number[i] = *(out + i);

    if (number[0] == 48)
    {
        done = 3;
        switch_back(out, number, f_stack, main_stack, size, preempt);
    }

    char iter[size / 2];
    iter[0] = '1';
    for (int i = 1; i < size / 2; i++)
        iter[i] = 0;

    char ret[size / 2];
    ret[0] = '0';
    for (int i = 1; i < size / 2; i++)
        ret[i] = 0;
    while (!equal(iter, number, size / 2))
    {
        // check if the current iterator divides the number.
        bool divides;
        char running_sum[size / 2];
        for (int i = 0; i < size / 2; i++)
            running_sum[i] = iter[i];

        while (less_than(running_sum, number, size / 2))
        {
            add(running_sum, iter, size / 2);
        }
        if (equal(running_sum, number, size / 2))
        {
            divides = true;
        }
        else
            divides = false;

        if (divides)
        {
            // add the current iterator to ret;
            char add_iter[size / 2];
            add_iter[0] = '0';
            for (int i = 1; i < size / 2; i++)
                add_iter[i] = 0;

            while (!equal(add_iter, iter, size / 2))
            {
                increment(add_iter, size / 2);
                increment(ret, size / 2);
                done = 2;
                switch_back(out, ret, f_stack, main_stack, size, preempt);
            }
        }
        increment(iter, size / 2);
        done = 2;
        switch_back(out, ret, f_stack, main_stack, size, preempt);
    }
    add(ret, iter, size / 2);
    done = 3;
    switch_back(out, ret, f_stack, main_stack, size, preempt);
}

} // namespace math
