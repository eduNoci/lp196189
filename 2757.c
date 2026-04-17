#include <stdio.h>

int checarentrada(int n1, int low, int up);
int ndeCaracteres(int in);

int main()
{
    int A;
    int B;
    int C;
    ndeCaracteres(90);
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
    for(int i=1000000000;i >= 10; i /= 10)
    {
        // implementar lógica de calcular n de caracter para in
        printf("%d\n", i);
    }
    return 0;
}