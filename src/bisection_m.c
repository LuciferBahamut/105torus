/*
** EPITECH PROJECT, 2020
** bisection
** File description:
** 105
*/

#include "my.h"

static int exit_f(coef_t *coef, bisec_t *bis)
{
    if (equa(coef, coef->a) == 0)
        printf("x = %.*f\n", coef->prec, coef->a);
    else if (equa(coef, coef->b) == 0)
        printf("x = %.*f\n", coef->prec, coef->b);
    else if (bis->rslt_x <= bis->n && bis->rslt_x > 0)
        printf("x = %.*f\n", coef->prec, coef->x);
    else
        return (CONTINUE);
    return (SUCCESS);
}

int bisection_m(coef_t *coef, bisec_t *bis, int i)
{
    bis->n = coef->prec * - 1;
    bis->n = pow(10, bis->n);
    coef->x = (coef->a + coef->b) / 2;
    bis->rslt_x = equa(coef, coef->x);
    if (exit_f(coef, bis) == SUCCESS)
        return (SUCCESS);
    bis->rslt_a = equa(coef, coef->a);
    bis->temp = bis->rslt_x * bis->rslt_a;
    if (bis->temp > 0)
        coef->a = coef->x;
    if (bis->temp < 0)
        coef->b = coef->x;
    if (i == coef->prec + 1)
        i--;
    printf("x = %.*f\n", i, coef->x);
    i++;
    bisection_m(coef, bis, i);
    return (SUCCESS);
}
