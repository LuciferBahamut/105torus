/*
** EPITECH PROJECT, 2020
** exercise n
** File description:
** It's a Boots Trap
*/

/*
f(x) = 4ax³ + 3bx² + 2cx + d;
f'(x)= 12ax² + 6bx + 2c;
*/

float FResult(float *F, float x)
{
    float A = 4 * F[0] * pow(x, 3);
    float B = 3 * F[1] * pow(x, 2);
    float C = 2 * F[2] * x;
    float D = F[3];
    float out = A + B + C + D;
    return(out);
}

float FPrime(float *F, float x)
{
    float A = 12 * F[0] * pow(x, 2);
    float B = 6 * F[1] * x;
    float C = 2 * F[2];
    float out = A + B + C;
    return(out);
}
