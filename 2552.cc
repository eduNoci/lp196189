/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Noci Deri
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 19/06/2026
Objetivo    : Pãezinhos de Queijo
Aprendizado : reforço de matriz
-------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        int tabuleiro[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> tabuleiro[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                
                if (tabuleiro[i][j] == 1) {
                    cout << 9;
                } 
                else {
                    int paes_vizinhos = 0;

                    if (i > 0 && tabuleiro[i - 1][j] == 1) paes_vizinhos++;
                    if (i < n - 1 && tabuleiro[i + 1][j] == 1) paes_vizinhos++;
                    if (j > 0 && tabuleiro[i][j - 1] == 1) paes_vizinhos++;
                    if (j < m - 1 && tabuleiro[i][j + 1] == 1) paes_vizinhos++;

                    cout << paes_vizinhos;
                }
            }
            cout << "\n";
        }
    }

    return 0;
}