#include <stdio.h>

int main (){
    float km, litro, consumo;
    printf("Digite a quilometragem:");
    scanf ("%f",&km);
    printf("Digite o valor gasto em litros:");
    scanf("%f",&litro);
    consumo = litro/km;
    printf("O consumo medio eh de:%.2f",consumo);
     return 0;
}