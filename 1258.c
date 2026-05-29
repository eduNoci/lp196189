/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome: Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1058
Data        : 21/05/2026
Objetivo    : Camisetas
Aprendizado : ordenação de diversos elementos em um strucy
-------------------------------------------------------------------------- */

#include <stdio.h>

typedef struct camiseta
{
    char nome[50];
    char cor[9];
    char tamanho;
    int prioridadeNome;
    int prioridadeCor;
    int prioridadeTamanho;
} camiseta;

void sort(int ndeEntradas, camiseta A[])
{
    int ordem[ndeEntradas];
    

}
int main()
{
    int ndeEntradas;
    scanf("%d", &ndeEntradas);
    camiseta A[ndeEntradas];
    scanf("%[^\n]%*c", &A.nome);
    scanf("%s %c",&A.cor, &A.tamanho);
    sort(ndeEntradas, A[]);
    return 0;
}
