/*
** EPITECH PROJECT, 2020
** torus
** File description:
** 105
*/

#include "my.h"

int torus(int ac, char **av)
{
    if (error_handling(ac, av) == 1)
        return (84);
    if (av[1][0] == '-' && av[1][1] == 'h') {
        display_help();
        return (0);
    }
    return (0);
}
