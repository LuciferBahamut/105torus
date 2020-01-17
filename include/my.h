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
    double a0;
    double a1;
    double a2;
    double a3;
    double a4;
    int prec;
    double x;
    double a;
    double b;
} coef_t;

typedef struct bisection
{
    double rslt_x;
    double rslt_a;
    double temp;
    double n;
} bisec_t;

typedef struct secant
{
    double x0;
    double x1;
    double x2;
    double num;
    double denum;
    double n;
} sec_t;

int torus(int ac, char **av);
void display_help(void);
int error_handling(int ac, char **av);
int bisection_m(coef_t *coef, bisec_t *bis, int i, int j);
int newton_m(coef_t *coef, double x, int j);
int secant_m(coef_t *coef, sec_t *sec, int i);
double equa(coef_t *arg, double x);
double dev_equa(coef_t *arg, double x);

#endif
