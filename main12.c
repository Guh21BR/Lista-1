#include <stdio.h>
#include <math.h>

int main(){
    float produto, valor, desconto, produtofinal;
    printf("Digite o valor do produto:");
    scanf("%f",&produto);
    printf("Digite o valor do desconto:");
    scanf("%f",&desconto);
    valor = produto * (desconto/100);
    produtofinal = produto - valor;
    printf ("O novo valor eh:%.2f",produtofinal);
    return 0;

}