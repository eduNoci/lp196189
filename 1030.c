#include <stdio.h>

int main(){
    int nCasos;
    int caso = 0;
    scanf("%d", &nCasos);
    while(nCasos > 0){
        int nPessoas, tamPulo;
        
        scanf("%d %d", &nPessoas, &tamPulo);
        
        int pessoas[nPessoas];
        int nVivos = nPessoas;

        caso++;
        for(int i = 0; i < nPessoas; i++){ //preenchendo o array 
            pessoas[i] = i;
        }

        for(int i = 0;nVivos > 1; i = i + tamPulo){
            if (i > nPessoas){ // fazendo a "volta"
                i = i - nPessoas;
            }
            if(pessoas[i] != 0){ //0 = pessoa morta
                pessoas[i] = 0;
                nVivos--;
            } 
        }
        for(int i = 0; i < nPessoas; i++){
            if(pessoas[i] != 0){
                printf("Case %d: %d\n", caso, pessoas[i]);
                break;
            }
        }
    nCasos--;
    }
    return 0;
}