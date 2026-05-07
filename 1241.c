/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome: Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 05/05/2026
Objetivo    : Encaixa ou Não II
Aprendizado : Como comparar strings
-------------------------------------------------------------------------- */


#include <stdio.h>
#include <string.h>

int main() {
    char a[1001]; // 1000 dígitos + '\0'
    char b[1001];
    int casos;

    if (scanf("%d", &casos) != 1) return 0;

    while (casos > 0) {
        scanf("%s %s", a, b);

        int tamA = strlen(a);
        int tamB = strlen(b);
        int fit = 1;

        // Se B é maior que A, não tem como encaixar no final
        if (tamB > tamA) {
            fit = 0;
        } else {
            int dif = tamA - tamB;
            // Comparamos a partir do ponto onde B começaria em A
            for (int i = 0; i < tamB; i++) {
                if (a[dif + i] != b[i]) {
                    fit = 0;
                    break;
                }
            }
        }

        if (fit) {
            printf("encaixa\n");
        } else {
            printf("nao encaixa\n");
        }

        casos--;
    }

    return 0;
}