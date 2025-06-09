#include <stdio.h>

int main() {
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo (5 casas na Diagonal Cima + Direita):\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    printf("\nMovimento do Cavalo (2 casas para Baixo e 1 casa para Esquerda):\n");

    for (int linha = 1; linha <= 2; linha++) {
        printf("Baixo\n");

        if (linha == 2) {
            int coluna = 1;
            while (coluna <= 1) {
                printf("Esquerda\n");
                coluna++;
            }
        }
    }

    system("pause");
    return 0;
}
