#include <stdio.h>

int main (){
    float raio, pi = 3.14, area, perimetro;
    printf("Digite o valor do raio:");
    scanf("%f",&raio);
    perimetro = 2 * pi * raio;
    area = pi * pow(raio,2);
    printf("A area e o perimetro sao respectivamente:%.1f,%.1f",area,perimetro);
    return 0;
}