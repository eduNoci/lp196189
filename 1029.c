/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 17/06/2026
Objetivo    : Fibonacci, Quantas Chamadas?
Aprendizado : Recursão pura e rastreamento de empilhamento de funções com variáveis globais
-------------------------------------------------------------------------- */
#include <stdio.h>

int chamadas;

int fib(int n) {
    chamadas++;

    if (n == 0) return 0;
    if (n == 1) return 1;

    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n, x;

    if (scanf("%d", &n) != 1) return 0;

    while (n--) {
        scanf("%d", &x);

        chamadas = 0;

        int resultado = fib(x);
        
        printf("fib(%d) = %d calls = %d\n", x, chamadas - 1, resultado);
    }

    return 0;
}