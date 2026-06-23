/*--------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Noci Deri
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 18/06/2026
Objetivo    : Matriz Quadrada I
Aprendizado : Entrada/Saída em C++
-------------------------------------------------------------------------- */

#include <iostream>
#include <iomanip>

using namespace std;

int minimo(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int n;

    while (cin >> n && n != 0) {
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                
                int dist_esquerda = i;
                int dist_cima = j;
                int dist_direita = (n - 1) - i;
                int dist_baixo = (n - 1) - j;
                
                int camada = minimo(minimo(dist_esquerda, dist_cima), 
                                    minimo(dist_direita, dist_baixo)) + 1;
                
                if (j == 0) {
                    cout << setw(3) << camada;
                } else {
                    cout << " " << setw(3) << camada;
                }
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}