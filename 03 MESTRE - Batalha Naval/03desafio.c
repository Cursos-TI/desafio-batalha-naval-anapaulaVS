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

int main() {

    printf("TABULEIRO BATALHA NAVAL - MESTRE! \n");
    printf(" \n");

return 0;

}