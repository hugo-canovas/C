#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    char sign;

    printf("Veuillez rentrer le signe de l'opération que vous souhaitez faire (/, *, +, -, %%) : ");
    scanf("%s", &sign);

    if(strcmp(&sign, "/") == 0)
    {
        printf("Division : %.2f", my_div(a, b));
    }
    else if(strcmp(&sign, "*") == 0)
    {
        printf("Multiplication : %.2f", my_mul(a, b));
    }
    else if(strcmp(&sign, "+") == 0)
    {
        printf("Addition : %.2f", my_add(a, b));
    }
    else if(strcmp(&sign, "-") == 0)
    {
        printf("Soustraction : %.2f", my_subb(a, b));
    }
    else if(strcmp(&sign, "%") == 0)
    {
        printf("Modulo : %d", my_mod(a, b));
    }

}