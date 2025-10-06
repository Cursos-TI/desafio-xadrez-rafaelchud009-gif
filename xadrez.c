 //Desenvolvido e Testado por Ronald Rafael//
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


 #include <stdio.h>
#include <stdlib.h>

int main () {
    int x1, y1, x2, y2, opcao, i;

    // DO WHILE: garante escolha válida de peça
    do {
        printf("Escolha a peça:\n1 - Rainha\n2 - Bispo\n3 - Torre\n");
        scanf("%d", &opcao);
    } while (opcao < 1 || opcao > 3);

    // FOR: calcula destino conforme peça escolhida
    for (i = 0; i < 1; i++) {
        if (opcao == 1) { // Rainha: 8 casas para a esquerda
            x1 = 4; y1 = 8;
            x2 = x1; y2 = y1 - 8;
            printf("Rainha: de (%d,%d) para (%d,%d) [8 casas para a esquerda]\n", x1, y1, x2, y2);
        } else if (opcao == 2) { // Bispo: 5 casas na diagonal superior direita
            x1 = 2; y1 = 2;
            x2 = x1 + 5; y2 = y1 + 5;
            printf("Bispo: de (%d,%d) para (%d,%d) [5 casas na diagonal superior direita]\n", x1, y1, x2, y2);
        } else if (opcao == 3) { // Torre: 5 casas para a direita
            x1 = 3; y1 = 3;
            x2 = x1; y2 = y1 + 5;
            printf("Torre: de (%d,%d) para (%d,%d) [5 casas para a direita]\n", x1, y1, x2, y2);
        }
    }

    // WHILE: mostra o caminho casa a casa
    printf("Caminho do movimento:\n");
    if (opcao == 1) { // Rainha
        while (y1 > y2) {
            y1--;
            printf("(%d,%d)\n", x1, y1);
        }
    } else if (opcao == 2) { // Bispo
        while (x1 < x2 && y1 < y2) {
            x1++;
            y1++;
            printf("(%d,%d)\n", x1, y1);
        }
    } else if (opcao == 3) { // Torre
        while (y1 < y2) {
            y1++;
            printf("(%d,%d)\n", x1, y1);
        }
    }

    return 0;
}