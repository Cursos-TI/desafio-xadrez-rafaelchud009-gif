#include <stdio.h>

// Função recursiva para mover a Torre (vertical)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Baixo\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover a Rainha (horizontal)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para mover o Bispo (diagonal)
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Diagonal superior direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função com loops aninhados para o Bispo (vertical + horizontal)
void moverBispoComLoops(int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        printf("Cima\n");
        for (int j = 0; j < colunas; j++) {
            printf("Direita\n");
        }
    }
}

// Função com loops complexos para o Cavalo (movimento em L)
void moverCavalo() {
    int movimentos = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 2 && j == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                movimentos++;
                break;
            } else {
                continue;
            }
        }
        if (movimentos > 0) break;
    }
}

int main() {
    // Número de casas para cada peça
    int casasTorre = 6;
    int casasRainha = 8;
    int casasBispo = 5;
    int linhasBispo = 2;
    int colunasBispo = 3;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    printf("Movimento do Bispo (recursivo):\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    printf("Movimento do Bispo (loops aninhados):\n");
    moverBispoComLoops(linhasBispo, colunasBispo);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}