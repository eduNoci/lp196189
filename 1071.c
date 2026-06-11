/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome: Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 20/04/2026
Objetivo    : Soma de Impares Consecutivos I
Aprendizado : Como contar o numero de caracteres de um numero
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int x , y, aux;
    int soma = 0;
    scanf("%d %d", &x, &y);
    if(x > y) 
    {
        aux = x;
        x = y;
        y = aux;
    }

    x++; //aumentando x para obter os valores entre x e y

    while (x < y)
    {
        if (x % 2 != 0)
        {
            soma = soma + x;
        }
        x++;
    }
    printf("%d\n", soma);
    return 0;
}