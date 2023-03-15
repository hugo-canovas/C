#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;

    printf("Veuillez rentrer votre premier nombre : ");
    scanf("%f", &a);
    printf("Veuillez rentrer votre deuxième nombre :");
    scanf("%f", &b);

    printf("Division : %.1f\n", a/b);
    printf("Addition : %.1f\n", a + b);
    printf("Soustraction : %.1f\n", a - b);
    printf("Multiplication : %.1f\n", a * b);
    
}
