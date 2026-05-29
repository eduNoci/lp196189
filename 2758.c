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
    printf("A = %.3f, B = %.3f\n", a, b);
    printf("C = %.3lf, D = %.3lf\n", c, d);
    printf("A = %.3fE+00, B = %.3fE+00\n", a, b);
    printf("C = %.3lfE+00, D = %.3lfE+00\n", c, d);
    printf("A = %d, B = %d\n", (int)a, (int)b);
    printf("C = %d, D = %d\n", (int)c, (int)d);
}