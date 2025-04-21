#include <stdio.h>

// Definição do tamanho do tabuleiro (10x10)

#define TAMANHO_TABULEIRO 10

// Função para imprimir o tabuleiro

void imprimirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {

    // Impressão da linha de cabeçalho com letras de A a J

    printf(" A B C D E F G H I J\n");

    // Loop para imprimir cada linha do tabuleiro

    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {

        // Impressão do número da linha

        printf("%d ", i + 1);

        // Loop para imprimir cada elemento da linha

        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {

            // Impressão do elemento do tabuleiro

            printf("%d ", tabuleiro[i][j]);
        }

        // Quebra de linha após imprimir cada linha

        printf("\n");
    }
}

// Função para criar a habilidade de cone no tabuleiro

void criarHabilidadeCone(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y) {

    // Loop para criar a forma de cone

    for (int i = 0; i < 3; i++) {

        // Loop para criar a base do cone

        for (int j = -i; j <= i; j++) {

            // Verificação se a posição está dentro do tabuleiro e não é um navio

            if (x + i >= 0 && x + i < TAMANHO_TABULEIRO && y + j >= 0 && y + j < TAMANHO_TABULEIRO && tabuleiro[x + i][y + j] != 3) {
                
                // Marcação da posição como afetada pela habilidade
                
                tabuleiro[x + i][y + j] = 5;
            }
        }
    }
}

int main() {

    printf("TABULEIRO BATALHA NAVAL - MESTRE! \n");
    printf(" \n");

return 0;

}