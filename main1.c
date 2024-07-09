#include <stdio.h>

int main()
    {
        float num1,num2,num3,resultado;
        printf("Coloque o primeiro valor:");
        scanf ("%f",&num1);
        printf("Coloque o segundo valor:");
        scanf ("%f",&num2);
        printf("Coloque o terceiro valor:");
        scanf ("%f",&num3);
        resultado = (num1*num2)/num3;
        printf("O resultado é:%.1f",resultado);
        return 0;
    }
