/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome: Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 20/04/2026
Objetivo    : Entrada e Saída de Números Inteiros
Aprendizado : Como contar o numero de caracteres de um numero
-------------------------------------------------------------------------- */
//ainda não terminado -- presentation error
#include <stdio.h>
#include <math.h>

int checarentrada(int n1, int low, int up);
int ndeCaracteres(int in);
void numeroJustificadoL(int n, char tipo);
void numeroJustificadoR(int n, char tipo);

int main()
{
    int A;
    int B;
    int C;
    //Obtendo as entradas e checando se são válidas:
    scanf("%d", &A);
    if (checarentrada(A, -10000,10000) == 0)
        {
            return 0;
        }
    scanf("%d", &B);
    if (checarentrada(B, 0, 99) == 0)
        {
            return 0;
        }
    scanf("%d", &C);
    if (checarentrada(C, 0, 999) == 0)
        {
            return 0;
        }
    
    //Criando as saídas pedidas:
    printf("A = %d, B = %d, C = %d\n", A , B , C);
    
    printf("A = ");
    numeroJustificadoL(A, ' ');
    printf(", B = ");
    numeroJustificadoL(B, ' ');
    printf(", C = ");
    numeroJustificadoL(C, ' ');
    printf("\n");

    printf("A = ");
    numeroJustificadoL(A, '0');
    printf(", B = ");
    numeroJustificadoL(B, '0');
    printf(", C = ");
    numeroJustificadoL(C, '0');
    printf("\n");

    printf("A = ");
    numeroJustificadoR(A, ' ');
    printf(", B = ");
    numeroJustificadoR(B, ' ');
    printf(", C = ");
    numeroJustificadoR(C, ' ');
    printf("\n");
    return 0;
}

int checarentrada(int n1, int low, int up) //Checa se um número está dentro do limite
{
    if(n1 < low || n1 > up)
        {
           printf("Entrada Inválida!\n");
            return 0;
        }
    return 1;
}

int ndeCaracteres(int in)
{
   int caracteres = 0; 
   while(in > 0)
   {
    in /= 10;
    caracteres++;
   }
    return caracteres;
}
void numeroJustificadoL(int n, char tipo)
{
     if (n < 0)
    {
        n = -n;
        printf("-");
        int ndeespaco = 8 - ndeCaracteres(n); //arquivo de saída do beecrowd está errado
        while (ndeespaco >= 0)
        {
            printf("%c", tipo);
            ndeespaco--;
        }
        printf("%d", n);
    }
    else {
        int ndeespaco = 9 - ndeCaracteres(n);
        while (ndeespaco >= 0)
        {
            printf("%c", tipo);
            ndeespaco--;
        }
        printf("%d", n);
    } 
}

void numeroJustificadoR(int n, char tipo)
{
    if (n < 0)
    {
        n = -n;
        printf("-");
        printf("%d", n);
        int ndeespaco = 8 - ndeCaracteres(n);
        while (ndeespaco >= 0)
        {
            printf("%c", tipo);
            ndeespaco--;
        }
    }
    else {
        printf("%d", n);
        int ndeespaco = 9 - ndeCaracteres(n);
        while (ndeespaco >= 0)
        {
            printf("%c", tipo);
            ndeespaco--;
        }
    } 
}