/*
** EPITECH PROJECT, 2019
** error_handling
** File description:
** 105
*/

#include "my.h"

void error(char *str)
{
    for (int n; str[n] != '\0'; n++)
        write(2, &str[n], 1);
}

int verify_nbr(int ac, char **av)
{
    int isfloat;
    for (int n1 = 1; n1 != ac; n1++) {
        isfloat = 0;
        for (int n2 = 0; av[n1][n2] != '\0'; n2++) {
            if ((av[n1][n2] < '0' || av[n1][n2] > '9') && av[n1][n2] != '-' &&
                av[n1][n2] != ',')
                return (84);
            if (av[n1][n2] == '-' && (av[n1][n2 + 1] == '\0' || n2 != 0))
                return (84);
            if (av[n1][n2] == ',' && (av[n1][n2 + 1] == '\0' || n2 == 0)) {
                if (isfloat == 1)
                    return(84);
                isfloat = 1;
            }
        }
    }
    return(0);
}

int error_handling(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        return (0);
    if (ac != 8) {
        error(ARGNBR);
        return (84);
    }
    if (verify_nbr(ac, av) == 84) {
        error(BADARG);
        return(84);
    }
    if ((av[1][0] != '1' && av[1][0] != '2' && av[1][0] != '3') ||
        av[1][1] != '\0') {
        error(BADOPT);
        return (84);
    }
    if (av[7][0] == '-') {
        error(BADN);
        return (84);
    }
    return(0);
}
