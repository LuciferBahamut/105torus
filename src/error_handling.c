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

    for (int i = 1; i != ac; i++) {
        isfloat = 0;
        for (int j = 0; av[i][j] != '\0'; j++) {
            if ((av[i][j] < '0' || av[i][j] > '9') && av[i][j] != '-' &&
                av[i][j] != ',')
                return (1);
            if (av[i][j] == '-' && (av[i][j + 1] == '\0' || j != 0))
                return (1);
            if (av[i][j] == ',' && (av[i][j + 1] == '\0' || j == 0)) {
                if (isfloat == 1)
                    return(1);
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
        return (1);
    }
    if (verify_nbr(ac, av) == 84) {
        error(BADARG);
        return(1);
    }
    if ((av[1][0] != '1' && av[1][0] != '2' && av[1][0] != '3') ||
        av[1][1] != '\0') {
        error(BADOPT);
        return (1);
    }
    if (av[7][0] == '-') {
        error(BADN);
        return (1);
    }
    return(0);
}
