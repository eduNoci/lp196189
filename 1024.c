/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome: Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 07/05/2026
Objetivo    : Criptografia
Aprendizado : Manipulação de elementos da tabela ascii em strings
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
    {
        int NdeLinhas;
        char a[10000];
        char FinalA[10000];
        int Ndecaracteres;
        scanf("%d", &NdeLinhas);
        for(int i = 0; i < NdeLinhas; i++)
        {
            Ndecaracteres = 0;
            scanf(" %9999[^\n]", &a);
            
            //obtendo o tamanho do input:
            while(a[Ndecaracteres] != '\0')
            {
                Ndecaracteres++;
            }
            //deslocando todos os caracteres 3 unidades para a direita:
            for(int j = 0; a[j] != '\0'; j++)
            {
                if((a[j] >= 'A' && a[j] <= 'Z') || (a[j] >= 'a' && a[j] <= 'z')) 
                {
                    a[j] = a[j] + 3;
                }
            }

            //criando string invertida:
            for (int j = 0; a[j] != '\0'; j++)
            {
                FinalA[(Ndecaracteres - 1) - j] = a[j];
            }
            FinalA[Ndecaracteres] = '\0';

            //Deslocando caracteres após a metade uma unidade para a esquerda:
            for(int j = (Ndecaracteres / 2); j < Ndecaracteres; j++)
            {
                    FinalA[j] = FinalA[j] -1;
            }
            printf("%s\n", FinalA);
        }
        return 0;
    }