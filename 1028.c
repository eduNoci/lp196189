/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome: Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 26/05/2026
Objetivo    : Figurinhas
Aprendizado : Como resolver problemas a partir de recursividade
-------------------------------------------------------------------------- */

#include <stdio.h>

int mdc(int a, int b);

int main()
{
    int ndecasos;
    scanf("%d"), &ndecasos;
    for(int i = 0; i < ndecasos; i++)
    {
        int a, b;
        scanf("%d %d", a, b);
        printf("%d", mdc(a, b));
    }
    return 0;
}

int mdc(int a, int b)
{
    
    return;
}