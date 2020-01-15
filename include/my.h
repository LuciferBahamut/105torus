/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** 103architect
*/

#ifndef MY_H_
#define MY_H_

#define SUCCESS 0
#define ERROR 84
#define CONTINUE 1

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct coef
{
    int opt;
    float a0;
    float a1;
    float a2;
    float a3;
    float a4;
    int prec;
    float x;
    float a;
    float b;
} coef_t;

typedef struct bisection
{
    float rslt_x;
    float rslt_a;
    float temp;
    float n;
} bisec_t;

int torus(int ac, char **av);
void display_help(void);
int error_handling(int ac, char **av);
int bisection_m(coef_t *coef, bisec_t *bis, int i);
int newton_m(coef_t *coef);
int secant_m(coef_t *coef);
float equa(coef_t *arg, float x);
float dev_equa(coef_t *arg, float x);

#endif
