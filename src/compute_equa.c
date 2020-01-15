/*
** EPITECH PROJECT, 2020
** equa
** File description:
** 105
*/

#include "my.h"

float equa(coef_t *arg, float x)
{
    float value = 0;

    value += (pow(x, 4) * arg->a4);
    value += (pow(x, 3) * arg->a3);
    value += (pow(x, 2) * arg->a2);
    value += (x * arg->a1);
    value += arg->a0;
    return (value);
}

float dev_equa(coef_t *arg, float x)
{
    float value = 0;

    value += (pow(x, 3) * 4 * arg->a4);
    value += (pow(x, 2) * 3 * arg->a3);
    value += (x * 2 * arg->a2);
    value += arg->a1;
    return (value);
}
