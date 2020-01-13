/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** 103architect
*/

#ifndef MY_H_
#define MY_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct coef
{
    int opt;
    float a1;
    float a2;
    float a3;
    float a4;
    float a5;
    int prec;
} coef_t;

int torus(int ac, char **av);
void display_help(void);
int error_handling(int ac, char **av);
int bisection_m(coef_t *coef);
int newton_m(coef_t *coef);
int secant_m(coef_t *coef);

#endif
