#include <stdio.h>

// Função para imprimir o Tabuleiro

void imprimirTabuleiro(int tabuleiro[10][10]) {
    printf("  A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {

    printf("TABULEIRO BATALHA NAVAL - MESTRE! \n");
    printf(" \n");

     // Inicializar o Tabuleiro com ZEROS (água)

     int tabuleiro[10][10] = {0};

     // Posicionar Navios Horizontais e Verticais

    tabuleiro[2][5] = 3;
    tabuleiro[2][6] = 3;
    tabuleiro[2][7] = 3;

    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;
    tabuleiro[8][7] = 3;

return 0;

}