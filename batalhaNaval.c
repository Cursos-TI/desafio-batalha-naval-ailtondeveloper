#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define VALOR_AGUA 0
#define VALOR_NAVIO 3

// Função para verificar se há sobreposição
int verifica_sobreposicao(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha[], int coluna[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (tabuleiro[linha[i]][coluna[i]] != VALOR_AGUA) {
            return 1; // Há sobreposição
        }
    }
    return 0; // Sem sobreposição
}

// Posicionando o navio
void posiciona_navio(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha[], int coluna[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[linha[i]][coluna[i]] = VALOR_NAVIO;
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Coordenadas dos 4 navios (linhas e colunas separadas)
    int linha_h1[] = {1, 1, 1}; // Horizontal
    int coluna_h1[] = {2, 3, 4};

    int linha_v1[] = {5, 6, 7}; // Vertical
    int coluna_v1[] = {8, 8, 8};

    int linha_d1[] = {0, 1, 2}; // Diagonal principal (↘)
    int coluna_d1[] = {0, 1, 2};

    int linha_d2[] = {0, 1, 2}; // Diagonal secundária (↙)
    int coluna_d2[] = {9, 8, 7};

    // Verificando e posicionamentos
    if (!verifica_sobreposicao(tabuleiro, linha_h1, coluna_h1, TAMANHO_NAVIO))
        posiciona_navio(tabuleiro, linha_h1, coluna_h1, TAMANHO_NAVIO);

    if (!verifica_sobreposicao(tabuleiro, linha_v1, coluna_v1, TAMANHO_NAVIO))
        posiciona_navio(tabuleiro, linha_v1, coluna_v1, TAMANHO_NAVIO);

    if (!verifica_sobreposicao(tabuleiro, linha_d1, coluna_d1, TAMANHO_NAVIO))
        posiciona_navio(tabuleiro, linha_d1, coluna_d1, TAMANHO_NAVIO);

    if (!verifica_sobreposicao(tabuleiro, linha_d2, coluna_d2, TAMANHO_NAVIO))
        posiciona_navio(tabuleiro, linha_d2, coluna_d2, TAMANHO_NAVIO);

    // Impremindo cabeçalho com letras
    printf("   ");
    for (char letra = 'A'; letra < 'A' + TAMANHO_TABULEIRO; letra++) {
        printf(" %c", letra);
    }
    printf("\n");

    // Impressão do tabuleiro com números nas linhas
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
