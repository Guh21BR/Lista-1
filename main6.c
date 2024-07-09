#include <stdio.h>
#include <math.h>

int main(){
    int x1,x2,y1,y2;
    float d;
    printf("Digite os valores de x1:");
    scanf ("%d",&x1);
    printf("Digite os valores de x2:");
    scanf ("%d",&x2);
    printf("Digite os valores de y1:");
    scanf ("%d",&y1);
    printf("Digite os valores de y2:");
    scanf("%d",&y2);
    d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("O valor da distância é:%.1f",d);
    return 0;
}