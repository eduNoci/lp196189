/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1013
Data        : 08/04/2026
Objetivo    : Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”.
Aprendizado : Como importar bibliotecas e declarar funções em c
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    int temp, maior;

    scanf("%d %d %d", &a, &b, &c);
    temp = (a + b + abs(a - b)) / 2;
    maior = (temp + c + abs(temp - c)) / 2;
    printf("%d eh o maior\n", maior);

    return 0;
}