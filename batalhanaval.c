#include <stdio.h>

int main() {
    // Trabalho de Batalha Naval - Parte 1
    // Criando um tabuleiro 5x5 com dois navios:
    // - Um navio na vertical
    // - Um navio na horizontal

    int tabuleiro[5][5]; // Matriz do tabuleiro 5x5

    // Preencher o tabuleiro com 0 (nenhum navio)
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Colocar um navio na vertical (na coluna 1, nas linhas 0, 1, 2)
    tabuleiro[0][1] = 1;
    tabuleiro[1][1] = 1;
    tabuleiro[2][1] = 1;

    // Colocar um navio na horizontal (na linha 4, nas colunas 2, 3, 4)
    tabuleiro[4][2] = 1;
    tabuleiro[4][3] = 1;
    tabuleiro[4][4] = 1;

    // Mostrar as posições dos navios no console
    printf("Coordenadas dos navios no tabuleiro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("Navio em: Linha %d, Coluna %d\n", i, j);
            }
        }
    }

    // Mostrar o tabuleiro completo
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Pular linha ao final de cada linha do tabuleiro
    }

    return 0;
}
