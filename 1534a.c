/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 10/05/2026
Objetivo    : Matriz 123
Aprendizado : Alocação dinâmica/estática de matrizes bidimensionais e indexação com []
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) != -1) {
        int matriz[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                
                if (i + j == n - 1) {
                    matriz[i][j] = 2;
                }
                else if (i == j) {
                    matriz[i][j] = 1;
                }
                else {
                    matriz[i][j] = 3;
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}