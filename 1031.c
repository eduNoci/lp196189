/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 22/06/2026
Objetivo    : Crise de Energia
Aprendizado : Identificação do problema de Josephus
-------------------------------------------------------------------------- */

#include <stdio.h>

int RegiaoSobrevivente(int n, int m) {
    int sobrevivente = 0;
    
    for (int i = 2; i < n; i++) {
        sobrevivente = (sobrevivente + m) % i;
    }
    
    return sobrevivente + 2;
}

int main() {
    int n;

    while (scanf("%d", &n) && n != 0) {
        int m = 1;
        while (RegiaoSobrevivente(n, m) != 13) {
            m++;
        }
        printf("%d\n", m);
    }

    return 0;
}