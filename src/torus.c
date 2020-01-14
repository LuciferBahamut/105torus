/*
** EPITECH PROJECT, 2020
** torus
** File description:
** 105
*/

#include "my.h"

void check_opt(coef_t *coef)
{
    switch(coef->opt) {
    case 1 : bisection_m(coef);
        break;
    case 2 : newton_m(coef);
        break;
    case 3 : secant_m(coef);
        break;
    }
}

coef_t *fill_struct(coef_t *coef, float *cf, char **av)
{
    int temp = atoi(av[7]);

    coef->opt = atoi(av[1]);
    coef->a0 = cf[0];
    coef->a1 = cf[1];
    coef->a2 = cf[2];
    coef->a3 = cf[3];
    coef->a4 = cf[4];
    coef->prec = pow(10, -temp);
    free(cf);
    return (coef);
}

int torus(int ac, char **av)
{
    float *cf = malloc(5 * sizeof(float));
    coef_t *coef = malloc(7 * sizeof(float));

    if (error_handling(ac, av) == 1) {
        free(cf);
        return (ERROR);
    }
    if (av[1][0] == '-' && av[1][1] == 'h') {
        display_help();
        return (SUCCES);
    }
    for (int i = 0, j = 2; j != ac - 1; i++, j++)
        cf[i] = atof(av[j]);
    coef = fill_struct(coef, cf, av);
    check_opt(coef);
    free(coef);
    return (SUCCES);
}
