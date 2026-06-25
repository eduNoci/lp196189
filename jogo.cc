/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome: Eduardo Noci Deri
Linguagem   : C
Objetivo    : Jogo de Sudoku Interativo no Terminal
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>

// Função que valida a entrada 
int validarentrada(int matriz[9][9]) {

    //verificando Linhas e Colunas
    for (int i = 0; i < 9; i++) {
        int v_linha[10] = {0};
        int v_coluna[10] = {0};
        
        for (int j = 0; j < 9; j++) {
            int num_linha = matriz[i][j];
            int num_coluna = matriz[j][i];
            
            // retorna 0 se um elemento já existe na linha (evitando 0s)
            if (num_linha != 0) {
                if (v_linha[num_linha] == 1) return 0;
                v_linha[num_linha] = 1;
            }
            
            // retorna 0 se um elemento já existe na coluna (evitando 0s)
            if (num_coluna != 0) {
                if (v_coluna[num_coluna] == 1) return 0;
                v_coluna[num_coluna] = 1;
            }
        }
    }

    //verificando as 9 subgrades 3x3
    //mesma logica de cima so que para a subgrade
    for (int L = 0; L < 9; L += 3) {
        for (int C = 0; C < 9; C += 3) {
            int v_bloco[10] = {0};
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int num = matriz[L + i][C + j];
                    if (num != 0) {
                        if (v_bloco[num] == 1) return 0;
                        v_bloco[num] = 1;
                    }
                }
            }
        }
    }
    return 1;
}

int tabuleiroPreenchido(int matriz[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (matriz[i][j] == 0) {
                return 0; // Ainda tem espaço vazio, jogo continua
            }
        }
    }
    return 1; // Tabuleiro cheio
}

// Função que valida a jogada
int jogadaValida(int matriz[9][9], int linha, int coluna, int valor) {

    //verificando Linhas e Colunas
    for (int j = 0; j < 9; j++) {
        if (matriz[linha][j] == valor) return 0;
    }

    for (int i = 0; i < 9; i++) {
        if (matriz[i][coluna] == valor) return 0;
    }

    //verificando a subgrades 3x3
    //mesma logica de cima so que para a subgrade
    int inicioLinha = (linha / 3) * 3;
    int inicioColuna = (coluna / 3) * 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[inicioLinha + i][inicioColuna + j] == valor) return 0;
        }
    }

    return 1;
}

// Função que imprime a matriz
void imprimirTabuleiro(int matriz[9][9]) {
    printf("\n    0 1 2   3 4 5   6 7 8 (Colunas)\n");
    printf("  +-------+-------+-------+\n");
    for (int i = 0; i < 9; i++) {
        if (i > 0 && i % 3 == 0) {
            printf("  +-------+-------+-------+\n");
        }
        printf("%d | ", i); // n da linha
        for (int j = 0; j < 9; j++) {
            if (j > 0 && j % 3 == 0) {
                printf("| ");
            }
            if (matriz[i][j] == 0) {
                printf(". "); // Imprime ponto nos espaços vazios
            } else {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("|\n");
    }
    printf("  +-------+-------+-------+\n\n");
}

int main() {
    int sudoku[9][9];

    printf("Insira a matriz 9x9:\n");
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &sudoku[i][j]);
        }
    }

    // Validando entrada
    if (!validarentrada(sudoku)) {
        printf("\nO tabuleiro inserido é inválido (numeros repetidos)!\n");
        return 1;
    }

    // Loop principal do jogo
    while (1) {
        int lin, col, val;

        //verificando se o jogo está ganho
        if (tabuleiroPreenchido(sudoku)) {
            printf("=========================================\n");
            printf("  PARABENS! VOCE RESOLVEU O SUDOKU!\n");
            printf("=========================================\n");
            break; // Encerra o programa
        }
        
        imprimirTabuleiro(sudoku);

        printf("Escolha a linha (0-8) e coluna (0-8) separadas por espaco: ");
        scanf("%d %d", &lin, &col);


        // valida as coordenadas informadas
        if (lin < 0 || lin > 8 || col < 0 || col > 8) {
            printf("\nCoordenadas invalidas! Use numeros de 0 a 8.\n");
            continue;
        }

        // Verifica se o espaço está vago
        if (sudoku[lin][col] != 0) {
            printf("\nA posicao (%d, %d) ja esta preenchida!\n", lin, col);
            continue;
        }

        printf("Digite o valor para a posicao (%d, %d) [1-9]: ", lin, col);
        scanf("%d", &val);

        if (val < 1 || val > 9) {
            printf("\nValor invalido! Apenas numeros de 1 a 9.\n");
            continue;
        }

        // inserindo valor na matriz:
        if (jogadaValida(sudoku, lin, col, val)) {
            sudoku[lin][col] = val;
            printf("\nO numero %d foi inserido com sucesso.\n", val);
        } else {
            printf("\nO numero %d ja existe nessa linha, coluna ou sub-bloco!\n", val);
        }
    }

    return 0;
}