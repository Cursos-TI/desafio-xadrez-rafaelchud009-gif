 //Desenvolvido e Testado por Ronald Rafael 10/10/2025 //
// adicionado a peça cavalo

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x1, y1, x2, y2, opcao;
    int movimentoCompleto = 1;

    // DO WHILE: garante escolha válida de peça
    do {
        printf("Escolha a peça:\n 1 - Rainha\n 2 - Bispo\n 3 - Torre\n 4 - Cavalo\n");
        scanf("%d", &opcao);
    } while (opcao < 1 || opcao > 4);

    // WHILE: executa o movimento da peça
    while (movimentoCompleto--) {
        if (opcao == 1) { // Rainha: 8 casas para a esquerda
            for (int i = 0; i < 8; i++) {
                printf("Esquerda\n");
            }
        } else if (opcao == 2) { // Bispo: 5 casas na diagonal superior direita
            for (int i = 0; i < 5; i++) {
                printf("Diagonal superior direita\n");
            }
        } else if (opcao == 3) { // Torre: 6 casas para baixo
            for (int i = 0; i < 6; i++) {
                printf("Baixo\n");
            }
        } else if (opcao == 4) { // Cavalo: movimento em L (2 cima, 1 direita)
            for (int i = 0; i < 2; i++) {
                printf("Cima\n");
            }
            printf("Direita\n");
        }
    }

    return 0;
}