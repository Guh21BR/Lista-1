#include <stdio.h>

int main()
{
    int inteiro, antecessor, sucessor;
    printf ("Digite um numero inteiro:");
    scanf("%d",&inteiro);
    sucessor = inteiro + 1;
    antecessor = inteiro - 1;
    printf("Sucessor:%d \n",sucessor);
    printf("Antecessor:%d",antecessor);
     return 0;
}