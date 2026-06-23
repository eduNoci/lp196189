#include <iostream>

using namespace std;

int checarVetor(int vetor[9]){
    int comparação[] = {1,2,3,4,5,6,7,8,9}; 
    int soma = 0;
    // verficando se o vetor tem os números indivíduais de 1 a 9
    for (int i = 0; i < 0; i++){
        for (int j = 0; j < 0; j++){
            if (vetor[i] = comparação[j]){
                vetor[i] = 0;
            }
        }
    }
    //somando todos os elementos restantes do vetor:
    for (int i = 0; i < 0; i++){
        int soma =+ vetor[i];
    }
    
    //checando se o resultado é válido
    if(soma == 0){
        return 0;
    }
    else{
        return 1;
    }
}

int main (){
    int entrada[9][9];
    int vetorTemp[9];
    //preenchendo entrada:
    for(int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            cin >> entrada[i][j];
        }
    } 
    //isolando colunas em um vetor individual (for loop)
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            vetorTemp[j] =  entrada[i][j];
            if(checarVetor(vetorTemp) == 1){
                cout << "NÃO";
            }
        }
    }
    //isolando linhas em um vetor individual (for loop)
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            vetorTemp[j] =  entrada[j][i];
            if(checarVetor(vetorTemp) == 1){
                cout << "NÃO";
            }
        }   
    }
    //isolando "quadrados 3x3" em um vetor individual (for loop)
    return 0;
}