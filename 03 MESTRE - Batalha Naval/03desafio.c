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

// Função para criar a habilidade de cruz no tabuleiro

void criarHabilidadeCruz(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y) {

    // Loop para criar a forma de cruz

    for (int i = -2; i <= 2; i++) {

        // Verificação se a posição está dentro do tabuleiro e não é um navio

        if (x >= 0 && x < TAMANHO_TABULEIRO && y + i >= 0 && y + i < TAMANHO_TABULEIRO && tabuleiro[x][y + i] != 3) {

            // Marcação da posição como afetada pela habilidade

            tabuleiro[x][y + i] = 5;
        }

        // Verificação se a posição está dentro do tabuleiro e não é um navio

        if (x + i >= 0 && x + i < TAMANHO_TABULEIRO && y >= 0 && y < TAMANHO_TABULEIRO && tabuleiro[x + i][y] != 3) {

            // Marcação da posição como afetada pela habilidade

            tabuleiro[x + i][y] = 5;
        }
    }
}

// Função para criar a habilidade de octaedro no tabuleiro

void criarHabilidadeOctaedro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y) {

    // Marcação da posição central como afetada pela habilidade

    if (x >= 0 && x < TAMANHO_TABULEIRO && y >= 0 && y < TAMANHO_TABULEIRO && tabuleiro[x][y] != 3) {
        tabuleiro[x][y] = 5;
    }

    // Marcação das posições adjacentes como afetadas pela habilidade

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

   // Impressão do título do jogo

   printf("TABULEIRO BATALHA NAVAL - MESTRE! \n");
   printf(" \n");

   // Inicialização do tabuleiro com zeros

   int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

   // Posicionamento dos navios no tabuleiro

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

   // Criação das habilidades no tabuleiro

   criarHabilidadeCone(tabuleiro, 0, 4);
   criarHabilidadeCruz(tabuleiro, 5, 5);
   criarHabilidadeOctaedro(tabuleiro, 8, 3);

return 0;

}