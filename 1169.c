/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome: Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 28/05/2026
Objetivo    : Trigo no Tabuleiro
Aprendizado : Uso de algoritmos recursivos
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    int nDeTestes;
    int nDeCasas;
    scanf("%d", &nDeTestes);
    while (nDeTestes > 0){
        unsigned long long graos = 1;
        unsigned long long total = 0;
        scanf("%d", &nDeCasas);
        for(int i = 0; i < nDeCasas; i++){
            total += graos;
            graos = graos * 2;
        }
        total = total / 12000;
        printf("%llu kg\n", total);
        nDeTestes--;
    }
    return 0;
}