/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 10/05/2026
Objetivo    : Distância Entre Dois Pontos
Aprendizado : Uso da biblioteca math.h (funções sqrt e pow) e leitura de floats
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1;
    float x2, y2;
    float distancia;

    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.4f\n", distancia);

    return 0;
}