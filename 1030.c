/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 17/06/2026
Objetivo    : A Lenda de Flavious Josephus
Aprendizado : Resolução do Problema de Josephus usando otimização matemática iterativa
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int nCasos;
    int caso = 0;

    if (scanf("%d", &nCasos) != 1) return 0;

    while (nCasos > 0) {
        int nPessoas, tamPulo;
        scanf("%d %d", &nPessoas, &tamPulo);
        caso++;

        int sobrevivente = 0;

        for (int i = 2; i <= nPessoas; i++) {
            sobrevivente = (sobrevivente + tamPulo) % i;
        }

        printf("Case %d: %d\n", caso, sobrevivente + 1);

        nCasos--;
    }

    return 0;
}