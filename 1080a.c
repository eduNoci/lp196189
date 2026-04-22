/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome: Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 20/04/2026
Objetivo    : Leia 100 valores inteiros. Apresente então o maior valor lido e a posicao dentre os 100 valores lidos.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int input1;
    int maior = 0;
    int posicao;
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &input1); 
        if (input1 > maior)
            {
                maior = input1;
                posicao = i +1; //adicionando 1 porque o valor de i ainda não foi atualizado
            }
    }
    printf("%d\n%d\n", maior, posicao);
    return 0;
}