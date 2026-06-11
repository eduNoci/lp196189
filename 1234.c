/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome: Eduardo Noci Deri
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 10/05/2026
Objetivo    : Sentença Dançante
Aprendizado : Como manipular caracteresw utilizando a tabela ascii
-------------------------------------------------------------------------- */
#include <stdio.h>

int main(){
    int ndecasos= 0;

    while(ndecasos < 4){
        char entrada[50];
        char ultimaLetra = 0; // guarda se o ultimo valor foi transformado em maiúsculo ou minúsculo (M=maiusculo, m= minusculo)

        fgets(entrada, 50, stdin);

        for(int i = 0; i < 50; i++){ 
            if (entrada[i] == ' ') {
            continue;}
            if(entrada[i] >= 'a' && entrada[i] <= 'z' && ultimaLetra == 'm'){
                entrada[i] = entrada[i] - 32;
                ultimaLetra = 'M';
                continue;
            }
            if(entrada[i] >= 'a' && entrada[i] <= 'z' && ultimaLetra == 'M'){
                ultimaLetra = 'm';
                continue;
            }
            if(entrada[i] >= 'A' && entrada[i] <= 'Z' && ultimaLetra == 'M'){
                entrada[i] = entrada[i] + 32;
                ultimaLetra = 'm';
                continue;
            }
            if(entrada[i] >= 'a' && entrada[i] <= 'z' && ultimaLetra == 'm'){
                ultimaLetra = 'M';
                continue;
            }
            if(entrada[i] >= 'A' && entrada[i] <= 'Z' && ultimaLetra == 0){ //indica que a primeira letra já é maiúscula
                ultimaLetra = 'm';
                continue;
            }
            if(entrada[i] >= 'a' && entrada[i] <= 'z' && ultimaLetra == 0){ //transforma a primeira letra em maiuscula caso ela seja minuscula 
                entrada[i] = entrada[i] - 32;
                ultimaLetra = 'M';
                continue;
            }
        }
        ndecasos++;
    
        printf("%s", entrada);
    }
    return 0;
}