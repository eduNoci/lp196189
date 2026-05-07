/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome: Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2758
Data        : 17/04/2026
Objetivo    : Entrada e Saída de Números Reais
Aprendizado : Como contar o numero de caracteres de um numero
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    float a, b;
    double c,d;
    scanf("%f %f", &a, &b);
    scanf("%lf %lf", &c, &d);
    printf("A = %f, B = %f\n", a, b);
    printf("C = %lf, D = %lf\n", c, d);
    printf("A = %.1f, B = %.1f\n", a, b);
    printf("C = %.1lf, D = %.1lf\n", c, d);
    printf("A = %.2f, B = %.2f\n", a, b);
    printf("C = %.2lf, D = %.2lf\n", c, d);
}