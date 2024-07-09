#include <stdio.h>

int main(){
    float x,y,permutacao;
    printf("Digite o valor de x:");
    scanf("%f",&x);
    printf ("Digite o valor de y:");
    scanf("%f",&y);
    permutacao = x;
    x = y;
    y = permutacao;
    printf ("O valor de x eh:%.1f",x);
    printf("O valor de y eh:%.1f,",y);
     return 0;
}