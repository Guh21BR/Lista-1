#include <stdio.h>
#include <math.h>

int main(){
    float peso, altura, imc;
    printf("Digite o seu peso:");
    scanf("%f",&peso);
    printf("Digite a sua altura:");
    scanf("%f",&altura);
    imc = peso/(pow(altura,2));
    printf("O seu IMC eh:%.1f",imc);
    return 0;
}