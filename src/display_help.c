/*
** EPITECH PROJECT, 2019
** display_help
** File description:
** 104
*/

#include "my.h"

void display_help(void)
{
    printf("USAGE\n");
    printf("    ./105torus opt a0 a1 a2 a3 a4 n\n");
    printf("\nDESCRIPTION\n");
    printf("    opt\t\tmethod option:\n");
    printf("    \t\t    1 for the bisection method\n");
    printf("    \t\t    2 for Newton's method\n");
    printf("    \t\t    3 for secant equation\n");
    printf("    a[0-4]\tcoefficients of the equation\n");
    printf("    n\t\tprecision (the application of the polynomial) ");
    printf("to the solution should be smaller than 10^-n)\n");
}
