#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, medgeo, medhar, medpon; 
    printf ("Digite a primeira media:");
    scanf("%f",&a);
    printf ("Digite a segunda media:");
    scanf("%f",&b);
    printf ("Digite a terceira media:");
    scanf("%f",&c);
    medgeo = cbrt(a*b*c);
    medhar = 3 / (1/a + 1/b + 1/c);
    medpon = (1*a + 2*b + 3*c)/1+2+3;
    printf("A media geometrica eh:%.1f\n",medgeo);
    printf("A media harmonica eh:%.1f\n",medhar);
    printf("A media ponderada eh:%.1f",medpon);
    return 0;
}