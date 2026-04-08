#include <stdio.h>
#include <stdlib.h>
int a = 0;
int b = 0;
int c = 0;
int maior = 0;

int cmaior(int n1, int n2, int maior);

int main()
{
    scanf("%d %d %d", &a , &b , &c);
    maior = cmaior(a, b, maior); //obtendo o maior entre a e b
    maior = cmaior(maior, c, maior); //obtendo o maior entre a, b e c
    
    printf("%d eh o maior\n", maior);
    return 0;
}

int cmaior(int n1, int n2, int maior) // função que calcula o maior entere dois números
{
    maior = ((n1+n2)+abs(n1-n2))/2; // obtendo o maior entre n1 e n2
    return maior; 
}