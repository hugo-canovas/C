#include <stdio.h>
#include <stdlib.h>

float my_mul(float a, float b)
{
    return a * b;
}

float my_add(float a, float b)
{
    return a + b;
} 

float my_subb(float a, float b)
{
    return a - b;
}

float my_div(float a, float b)
{
    return a / b;
}

int my_mod(int a, int b)
{
    return a % b;
}

int main()
{
    float a = 10, b = 2;

    printf("Multiplication : %.2f\n", my_mul(a,b));
    printf("Addition : %.2f\n", my_add(a,b));
    printf("Soustraction : %.2f\n", my_subb(a,b));
    printf("Division : %.2f\n", my_div(a,b));
    printf("Modulo : %d\n", my_mod(a,b));
     
}