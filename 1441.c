/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 17/06/2026
Objetivo    : Sequências de Granizo
Aprendizado : Aplicação de recursão para encontrar valores máximos em sequências matemáticas
-------------------------------------------------------------------------- */

#include <stdio.h>

int maxGranizo(int h) {
    if (h == 1) {
        return 1;
    }

    int proximo;
    
    if (h % 2 == 0) {
        proximo = h / 2;
    } 
    else {
        proximo = 3 * h + 1;
    }

    int maiorDoResto = maxGranizo(proximo);

    if (h > maiorDoResto) {
        return h;
    } else {
        return maiorDoResto;
    }
}

int main() {
    int h;

    while (scanf("%d", &h) && h != 0) {
        printf("%d\n", maxGranizo(h));
    }

    return 0;
}