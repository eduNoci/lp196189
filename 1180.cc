/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Noci Deri
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 19/06/2026
Objetivo    : Menor e Posição
Aprendizado :reforço sobre busca em vetores
-------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int main() {
    int n;

    if (cin >> n) {
        int X[n];

        for (int i = 0; i < n; i++) {
            cin >> X[i];
        }
        int menor = X[0];
        int posicao = 0;

        for (int i = 1; i < n; i++) {
            if (X[i] < menor) {
                menor = X[i];
                posicao = i;
            }
        }
        cout << "Menor valor: " << menor << "\n";
        cout << "Posicao: " << posicao << "\n";
    }

    return 0;
}