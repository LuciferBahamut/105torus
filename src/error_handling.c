/*
** EPITECH PROJECT, 2019
** error_handling
** File description:
** 105
*/

#include "my.h"

int error_handling(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        return (0);
    if (ac != 8)
        return (1);
    for (int i = 1; i != ac; i++)
        for (int j = 0; av[i][j] != '\0'; j++) {
            if (av[i][j] == '-')
                j++;
            if (av[i][j] < '0' || av[i][j] > '9')
                return (1);
        }
    if (av[1][0] < '1' || av[1][0] > '3') 
        return (1);
    if (av[7][0] == '-')
        return (1);
    return(0);
}
