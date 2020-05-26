/*
** EPITECH PROJECT, 2020
** secant_m
** File description:
** 105
*/

#include "my.h"

int secant_m(coef_t *coef, sec_t *sec, int i)
{
    sec->num = equa(coef, sec->x1) * (sec->x1 - sec->x0);
    sec->denum = equa(coef, sec->x1) - equa(coef, sec->x0);
    if (sec->denum == 0)
        return (ERROR);
    sec->x2 = sec->x1 - (sec->num / sec->denum);
    sec->n = coef->prec * - 1;
    sec->n = pow(10, sec->n);
    if (i == 1)
        printf("x = %.*f\n", i, sec->x2);
    else
        printf("x = %.*f\n", coef->prec, sec->x2);
    if (i % 2 == 1)
        sec->x0 = sec->x2;
    if (i % 2 == 0)
        sec->x1 = sec->x2;
    i++;
    if (i == 10000)
        return (SUCCESS);
    if ((sec->x0 - sec->x1) <= sec->n && (sec->x0 - sec->x1) > 0)
        return(SUCCESS);
    else
        secant_m(coef, sec, i);
    return (SUCCESS);
}
