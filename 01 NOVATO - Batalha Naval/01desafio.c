#include <stdio.h>

// Função para imprimir o Tabuleiro
void imprimirTabuleiro(int tabuleiro[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {

    printf("TABULEIRO BATALHA NAVAL - NOVATO! \n");


    return 0;
}