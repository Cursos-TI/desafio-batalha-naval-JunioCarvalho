#include <stdio.h>
#include <ctype.h>

#define TAM 10

void iniciar_tabuleiro(char tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = '0'; // casa vazia
        }
    }
}

void exibir_tabuleiro(char tabuleiro[TAM][TAM]) {
    printf("    ");
    for (char c = 'A'; c < 'A' + TAM; c++) {
        printf(" %c", c); // Cabeçalho das colunas (A-J)
    }
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%3d ", i + 1); // Número da linha (1-10)
        for (int j = 0; j < TAM; j++) {
            printf(" %c", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void colocar_peca(char tabuleiro[TAM][TAM], char coluna_letra, int linha_num, char peca) {
    int coluna = toupper(coluna_letra) - 'A'; // transforma 'A'-'J' em 0-9
    int linha = linha_num - 1;                // transforma 1-10 em 0-9

    if (coluna >= 0 && coluna < TAM && linha >= 0 && linha < TAM) {
        tabuleiro[linha][coluna] = peca;
    }
}

int main() {
    char tabuleiro[TAM][TAM];

    iniciar_tabuleiro(tabuleiro);
    // Movimentando barcos em coordenadas (sem entrada do usuário)
    colocar_peca(tabuleiro, 'E', 6, '3'); // Coluna E linha 6
    colocar_peca(tabuleiro, 'F', 4, '3'); // Coluna F linha 4
    colocar_peca(tabuleiro, 'F', 5, '3'); // Coluna F linha 5
    colocar_peca(tabuleiro, 'F', 6, '3'); // Coluna F linha 6
    colocar_peca(tabuleiro, 'D', 6, '3'); // Coluna D linha 6
    colocar_peca(tabuleiro, 'C', 6, '3'); // Coluna C linha 6


    exibir_tabuleiro(tabuleiro);



    return 0;

}