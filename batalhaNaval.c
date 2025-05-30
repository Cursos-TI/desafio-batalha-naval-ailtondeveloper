#include <stdio.h>

#define TAM 10
#define TAM_HAB 5
#define NAVIO 3
#define AGUA 0
#define HABILIDADE 5

// Função para inicializar o tabuleiro com água
void inicializar_tabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }
}

// Função para posicionar navios
void posicionar_navio(int tabuleiro[TAM][TAM], int linha[], int coluna[]) {
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha[i]][coluna[i]] = NAVIO;
    }
}

// Função para sobrepor matriz de habilidade ao tabuleiro
void aplicar_habilidade(int tabuleiro[TAM][TAM], int habilidade[TAM_HAB][TAM_HAB], int origem_linha, int origem_coluna) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (habilidade[i][j] == 1) {
                int linha = origem_linha + i - TAM_HAB / 2;
                int coluna = origem_coluna + j - TAM_HAB / 2;
                if (linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM) {
                    if (tabuleiro[linha][coluna] == AGUA) {
                        tabuleiro[linha][coluna] = HABILIDADE;
                    }
                }
            }
        }
    }
}

// Função para imprimir o tabuleiro
void imprimir_tabuleiro(int tabuleiro[TAM][TAM]) {
    printf("   ");
    for (char c = 'A'; c < 'A' + TAM; c++) {
        printf(" %c", c);
    }
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < TAM; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAM][TAM];
    inicializar_tabuleiro(tabuleiro);

    // Posicionamento dos navios
    int linha_h1[3] = {1, 1, 1};
    int coluna_h1[3] = {2, 3, 4};

    int linha_v1[3] = {5, 6, 7};
    int coluna_v1[3] = {8, 8, 8};

    int linha_d1[3] = {0, 1, 2};
    int coluna_d1[3] = {0, 1, 2};

    int linha_d2[3] = {0, 1, 2};
    int coluna_d2[3] = {9, 8, 7};

    posicionar_navio(tabuleiro, linha_h1, coluna_h1);
    posicionar_navio(tabuleiro, linha_v1, coluna_v1);
    posicionar_navio(tabuleiro, linha_d1, coluna_d1);
    posicionar_navio(tabuleiro, linha_d2, coluna_d2);

    // Matrizes de habilidades
    int cone[TAM_HAB][TAM_HAB] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int cruz[TAM_HAB][TAM_HAB] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };

    int octaedro[TAM_HAB][TAM_HAB] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // Aplicação das habilidades
    aplicar_habilidade(tabuleiro, cone, 4, 4);
    aplicar_habilidade(tabuleiro, cruz, 6, 6);
    aplicar_habilidade(tabuleiro, octaedro, 8, 8);

    // Impressão do tabuleiro final
    imprimir_tabuleiro(tabuleiro);

    return 0;
}
