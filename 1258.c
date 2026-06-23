/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1258
Data        : 21/05/2026
Objetivo    : Camisetas
Aprendizado : Ordenação de diversos elementos em um struct (Bubble Sort)
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

typedef struct camiseta
{
    char nome[50];
    char cor[9];
    char tamanho;
} camiseta;

void sort(int ndeEntradas, camiseta A[])
{
    camiseta temp;
    for (int i = 0; i < ndeEntradas - 1; i++) {
        for (int j = 0; j < ndeEntradas - i - 1; j++) {
            
            //ordenando por cor
            int compCor = strcmp(A[j].cor, A[j + 1].cor);
            
            if (compCor > 0) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            } 
            else if (compCor == 0) {
                
                // ordenando por tamanho
                if (A[j].tamanho < A[j + 1].tamanho) {
                    temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;
                } 
                else if (A[j].tamanho == A[j + 1].tamanho) {
                    
                    //ordenando por nome
                    if (strcmp(A[j].nome, A[j + 1].nome) > 0) {
                        temp = A[j];
                        A[j] = A[j + 1];
                        A[j + 1] = temp;
                    }
                }
            }
        }
    }
}

int main()
{
    int ndeEntradas;
    int primeiro_caso = 1;

    while (scanf("%d", &ndeEntradas) && ndeEntradas != 0) {
        
        if (!primeiro_caso) {
            printf("\n");
        }
        primeiro_caso = 0;

        camiseta A[ndeEntradas];

        for (int i = 0; i < ndeEntradas; i++) {
            getchar(); 
            scanf("%[^\n]", A[i].nome);
            scanf("%s %c", A[i].cor, &A[i].tamanho);
        }
        
        sort(ndeEntradas, A);
        
        for (int i = 0; i < ndeEntradas; i++) {
            printf("%s %c %s\n", A[i].cor, A[i].tamanho, A[i].nome);
        }
    }

    return 0;
}