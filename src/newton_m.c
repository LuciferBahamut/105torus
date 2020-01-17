/*
** EPITECH PROJECT, 2020
** newton
** File description:
** 105
*/

#include "my.h"

int newton_m(coef_t *coef, double x, int j)
{
    double xplus1;
    double fxplus1;

    if (dev_equa(coef, x) == 0)
        return (ERROR);
    xplus1 = x - (equa(coef, x) / dev_equa(coef, x));
    if (x != 0.5)
        printf("x = %.*f\n", coef->prec, x);
    else
        printf("x = %.1f\n", coef->prec, x);
    fxplus1 = equa(coef, xplus1);
    if (fxplus1 < 0)
        fxplus1 *= -1;
    if (fxplus1 <= pow(10, (coef->prec) * -1)) {
        printf("x = %.*f\n", coef->prec, xplus1);
        return (SUCCESS);
    }
    else {
        j++;
        if (j == 10000)
            return (SUCCESS);
        newton_m(coef, xplus1, j);
    }
    return (SUCCESS);
}
