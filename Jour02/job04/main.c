#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float puissance(float a, float b)
{
    return pow(a, b);
}

int main()
{
    float a, b;

    printf("Veuillez choisir un premier nombre : ");
    scanf("%f", &a);
    printf("Veuillez choisir la puissance à calculer : ");
    scanf("%f", &b);

    printf("%.f", puissance(a, b));
}