/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Noci Deri
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 19/06/2026
Objetivo    : Troca em Vetor I
Aprendizado : Reforço em vetor
-------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int main() {
    int N[20];
    for (int i = 0; i < 20; i++) {
        cin >> N[i];
    }

    for (int i = 0; i < 10; i++) {
        int temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }

    for (int i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << N[i] << "\n";
    }

    return 0;
}