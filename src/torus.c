/*
** EPITECH PROJECT, 2020
** torus
** File description:
** 105
*/

#include "my.h"

int torus(int ac, char **av)
{
    float cf[5];
    coef_t coef;
    
    if (error_handling(ac, av) == 1)
        return (84);
    if (av[1][0] == '-' && av[1][1] == 'h') {
        display_help();
        return (0);
    }
    for (int i = 2, j = 0; i != ac - 1; i++, j++)
        cf[j] = atof(av[i]);
    coef.a0 = cf[0];
    coef.a1 = cf[1];
    coef.a2 = cf[2];
    coef.a3 = cf[3];
    coef.a4 = cf[4];
    printf("a0 = %f\n", coef.a0);
    printf("a1 = %f\n", coef.a1);
    printf("a2 = %f\n", coef.a2);
    printf("a3 = %f\n", coef.a3);
    printf("a4 = %f\n", coef.a4);
    return (0);
}
