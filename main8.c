#include <stdio.h>

int main(){
    int valor, troco;
    printf ("Digite o valor(apenas multiplo de cinco):");
    scanf("%d",&valor);
    troco = valor - 7;
    printf ("O troco perdido eh de R$%d",troco);
    return 0;
}