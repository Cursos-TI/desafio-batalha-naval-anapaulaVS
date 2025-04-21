#include <stdio.h>

// Definição do tamanho do Tabuleiro (10x10)

#define TAMANHO_TABULEIRO 10

// Função para imprimir o Tabuleiro

void imprimirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {

    // Impressão da linha de cabeçalho com Letras de A a J

    printf(" A B C D E F G H I J\n");

    // Loop para imprimir cada linha do Tabuleiro

    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {

        // Impressão do Número da linha

        printf("%d ", i + 1);

        // Loop para imprimir cada Elemento da linha

        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {

            // Impressão do Elemento do Tabuleiro

            printf("%d ", tabuleiro[i][j]);
        }

        // Quebra de linha após imprimir cada Linha

        printf("\n");
    }
}

// Função para criar a habilidade de Cone no Tabuleiro

void criarHabilidadeCone(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y) {

    // Loop para criar a forma de Cone

    for (int i = 0; i < 3; i++) {

        // Loop para criar a base do Cone

        for (int j = -i; j <= i; j++) {

            // Verificação da Posição 

            if (x + i >= 0 && x + i < TAMANHO_TABULEIRO && y + j >= 0 && y + j < TAMANHO_TABULEIRO && tabuleiro[x + i][y + j] != 3) {
                
                // Marcação da Posição 
                
                tabuleiro[x + i][y + j] = 5;
            }
        }
    }
}

// Função para criar a habilidade de Cruz no Tabuleiro

void criarHabilidadeCruz(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y) {

    // Loop para criar a forma de Cruz

    for (int i = -2; i <= 2; i++) {

        // Verificação da Posição

        if (x >= 0 && x < TAMANHO_TABULEIRO && y + i >= 0 && y + i < TAMANHO_TABULEIRO && tabuleiro[x][y + i] != 3) {

            // Marcação da Posição

            tabuleiro[x][y + i] = 5;
        }

        // Verificação da Posição 

        if (x + i >= 0 && x + i < TAMANHO_TABULEIRO && y >= 0 && y < TAMANHO_TABULEIRO && tabuleiro[x + i][y] != 3) {

            // Marcação da Posição 

            tabuleiro[x + i][y] = 5;
        }
    }
}

// Função para criar a habilidade de Octaedro no Tabuleiro

void criarHabilidadeOctaedro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y) {

    // Marcação da posição Central afetada pela Habilidade

    if (x >= 0 && x < TAMANHO_TABULEIRO && y >= 0 && y < TAMANHO_TABULEIRO && tabuleiro[x][y] != 3) {
        tabuleiro[x][y] = 5;
    }

    // Marcação das posições Adjacentes afetadas pela Habilidade

    if (x - 1 >= 0 && x - 1 < TAMANHO_TABULEIRO && y >= 0 && y < TAMANHO_TABULEIRO && tabuleiro[x - 1][y] != 3) {
        tabuleiro[x - 1][y] = 5;
    }
    if (x + 1 >= 0 && x + 1 < TAMANHO_TABULEIRO && y >= 0 && y < TAMANHO_TABULEIRO && tabuleiro[x + 1][y] != 3) {
        tabuleiro[x + 1][y] = 5;
    }
    if (x >= 0 && x < TAMANHO_TABULEIRO && y - 1 >= 0 && y - 1 < TAMANHO_TABULEIRO && tabuleiro[x][y - 1] != 3) {
        tabuleiro[x][y - 1] = 5;
    }
    if (x >= 0 && x < TAMANHO_TABULEIRO && y + 1 >= 0 && y + 1 < TAMANHO_TABULEIRO && tabuleiro[x][y + 1] != 3) {
        tabuleiro[x][y + 1] = 5;
    }
}

int main() {

    // Impressão do Título do Jogo

    printf("TABULEIRO BATALHA NAVAL - MESTRE! \n");
    printf(" \n");

    // Inicialização do Tabuleiro com Zeros

    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Posicionamento dos Navios no Tabuleiro

    tabuleiro[2][5] = 3;
    tabuleiro[2][6] = 3;
    tabuleiro[2][7] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;
    tabuleiro[8][7] = 3;

    tabuleiro[3][3] = 3;
    tabuleiro[4][4] = 3;
    tabuleiro[5][5] = 3;
    tabuleiro[7][2] = 3;
    tabuleiro[8][1] = 3;
    tabuleiro[9][0] = 3;

    // Criação das Habilidades no Tabuleiro

    criarHabilidadeCone(tabuleiro, 0, 4);
    criarHabilidadeCruz(tabuleiro, 5, 5);
    criarHabilidadeOctaedro(tabuleiro, 8, 3);

    // Impressão do Tabuleiro com as Habilidades

    imprimirTabuleiro(tabuleiro);

    return 0;

}