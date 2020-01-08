/*
** EPITECH PROJECT, 2020
** torus
** File description:
** 105
*/

#include "my.h"

int torus(int ac, char **av)
{
    printf("n");
    float *cf = malloc(5 * sizeof(float));
    coef_t coef;

    if (error_handling(ac, av) == 84) {
        free(cf);
        return (84);
    }
    if (av[1][0] == '-' && av[1][1] == 'h') {
        display_help();
        return (0);
    }
    for (int i = 0; i != ac - 1; i++)
        cf[i] = atof(av[i + 2]);
    coef_t.a0 = cf[0];
    coef_t.a1 = cf[1];
    coef_t.a2 = cf[2];
    coef_t.a3 = cf[3];
    coef_t.a4 = cf[4];
    printf("a0 = %f\n", coef.a0);
    printf("a1 = %f\n", coef.a1);
    printf("a2 = %f\n", coef.a2);
    printf("a3 = %f\n", coef.a3);
    printf("a4 = %f\n", coef.a4);
    return (0);
}
