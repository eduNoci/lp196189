/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 22/05/2026
Objetivo    : LED
Aprendizado : Uso da estrutura condicional switch com caracteres e strings longas
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char num[101]; 

    scanf("%d", &n);
    while (n--) {
        scanf("%s", num);

        long long total_leds = 0; 
        int tam = strlen(num);

        for (int i = 0; i < tam; i++) {
            switch (num[i]) {
                case '1':
                    total_leds += 2;
                    break;
                case '7':
                    total_leds += 3;
                    break;
                case '4':
                    total_leds += 4;
                    break;
                
                //5 LEDs:
                case '2':
                case '3':
                case '5':
                    total_leds += 5;
                    break;
                
                //6 LEDs:
                case '0':
                case '6':
                case '9':
                    total_leds += 6;
                    break;
                
                case '8':
                    total_leds += 7;
                    break;
            }
        }

        printf("%lld leds\n", total_leds);
    }

    return 0;
}