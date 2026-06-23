/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1179
Data        : 22/05/2026
Objetivo    : Preenchimento de Vetor IV
Aprendizado : Gerenciamento de múltiplos vetores, buffers e controle de índices
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int par[5], impar[5];
    int qtd_par = 0, qtd_impar = 0;
    int numero;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            par[qtd_par] = numero;
            qtd_par++;

            if (qtd_par == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                qtd_par = 0; 
            }
        } 
        else {
            impar[qtd_impar] = numero;
            qtd_impar++;

            if (qtd_impar == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                qtd_impar = 0; 
            }
        }
    }
    for (int j = 0; j < qtd_impar; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }
    for (int j = 0; j < qtd_par; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}