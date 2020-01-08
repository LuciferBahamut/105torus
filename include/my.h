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

#define ARGNBR "We need 7 parameters, try -h for help\n"
#define BADARG "All parameters must be numbers\n"
#define BADOPT "The opt parameter must be an integer beetween 1 and 3\n"
#define BADN   "The n parameter must be a positive int\n"

typedef struct coef
{
    float a0;
    float a1;
    float a2;
    float a3;
    float a4;
} coef_t;

int torus(int ac, char **av);
void display_help(void);
int error_handling(int ac, char **av);

#endif
