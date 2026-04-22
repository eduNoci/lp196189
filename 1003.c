 /* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1003
Data        : 08/04/2026
Objetivo    : Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre elas e atribua à variável SOMA. A seguir escrever o valor desta variável.
Aprendizado : Como importar bibliotecas e declarar funções em c
-------------------------------------------------------------------------- */
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