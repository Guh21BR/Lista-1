#include <stdio.h>
#include <math.h>

int main()
    {
        float num1,num2,num3,resultado,cubo;
        printf("Coloque o primeiro valor:");
        scanf ("%f",&num1);
        printf("Coloque o segundo valor:");
        scanf ("%f",&num2);
        printf("Coloque o terceiro valor:");
        scanf ("%f",&num3);
        cubo = (num1*num2*num3)*(num1*num2*num3)*(num1*num2*num3);
        resultado = cubo/2;
        printf("O resultado é:%.1f",resultado);
        return 0;
    }
