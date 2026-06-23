/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 17/05/2026
Objetivo    : Figurinhas
Aprendizado : Como resolver problemas a partir de recursividade (Algoritmo de Euclides)
-------------------------------------------------------------------------- */

#include <stdio.h>

int mdc(int a, int b);

int main()
{
    int ndecasos;

    if (scanf("%d", &ndecasos) != 1) return 0;
    
    for(int i = 0; i < ndecasos; i++)
    {
        int a, b;
        
        scanf("%d %d", &a, &b);
        printf("%d\n", mdc(a, b));
    }
    return 0;
}


int mdc(int a, int b)
{
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}