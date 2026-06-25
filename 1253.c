/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 20/04/2026
Objetivo    : Cifra de César
Aprendizado : Como manipular strings em c
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
    int n, casas;
    char s[51]; 

    scanf("%d", &n); 

    while (n--) {
        scanf("%s", s);
        scanf("%d", &casas);

        int tam = strlen(s);
        for (int i = 0; i < tam; i++) {
            char nova_letra = s[i] - casas;
            if (nova_letra < 'A') {
                nova_letra = nova_letra + 26;
            }
            s[i] = nova_letra;
        }
        printf("%s\n", s);
    }

    return 0;
}