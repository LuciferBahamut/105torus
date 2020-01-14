/*
** EPITECH PROJECT, 2020
** function
** File description:
** that allow me to use additionnal functions without using libs
*/

#include "my.h"

float Fvalue(coef_t *arg, float x)
{
    float value = 0;

    value += (pow(x, 4) * arg->a4);
    value += (pow(x, 3) * arg->a3);
    value += (pow(x, 2) * arg->a2);
    value += (x * arg->a1);
    value += arg->a0;
    return(value);
}

float FPrimevalue(coef_t *arg, float x)
{
    float value = 0;

    value += (pow(x, 3) * 4 * arg->a4);
    value += (pow(x, 2) * 3 * arg->a3);
    value += (x * 2 * arg->a2);
    value += arg->a1;
    return(value);
}
