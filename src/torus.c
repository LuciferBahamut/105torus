/*
** EPITECH PROJECT, 2020
** torus
** File description:
** 105
*/

#include "my.h"

int torus(int ac, char **av)
{
    int *coef[5];
    struct coef_t;
    
    if (error_handling(ac, av) == 1)
        return (84);
    if (av[1][0] == '-' && av[1][1] == 'h') {
        display_help();
        return (0);
    }
    for (int i = 3, j = 0; i != ac -1; i++, j++)
        coef[j] = atof(av[i]);
    coef_t.a0 = coef[0];
    coef_t.a1 = coef[1];
    coef_t.a2 = coef[2];
    coef_t.a3 = coef[3];
    coef_t.a4 = coef[4];
    return (0);
}
