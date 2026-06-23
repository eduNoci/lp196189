/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 22/05/2026
Objetivo    : Gasto de Combustível
Aprendizado : Criação e chamada de funções com retorno float e passagem de parâmetros
-------------------------------------------------------------------------- */
#include <stdio.h>

float calcularLitros(int tempo, int velocidade) {
    int distancia = tempo * velocidade;    
    return distancia / 12.0;
}

int main() {
    int tempo, velocidade;

    scanf("%d", &tempo);
    scanf("%d", &velocidade);

    float litrosNecessarios = calcularLitros(tempo, velocidade);
    printf("%.3f\n", litrosNecessarios);
    
    return 0;
}