/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome: Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : Tabuada
Aprendizado : Como contar o numero de caracteres de um numero
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    
    //checando a entrada:
    if(input < 2 || input > 1000 )
    {
        return 0;
    }

    //imprimindo a tabuada:
    for(int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, input, i * input );
    }


    return 0;
}