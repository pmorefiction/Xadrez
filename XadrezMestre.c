#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverBispoLoops(int movimentos) {
    printf("\nMovimento do Bispo (Recursividade + Loops Aninhados):\n");
    for (int vertical = 1; vertical <= movimentos; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }
}

void moverCavalo() {
    printf("\nMovimento do Cavalo (2 casas Cima + 1 Direita em L):\n");

    int casasVerticais = 2;
    int casasHorizontais = 1;
    int movimentos = 0;

    for (int i = 1; i <= casasVerticais + casasHorizontais; i++) {
        if (i <= casasVerticais) {
            printf("Cima\n");
            continue;
        }

        for (int j = 0; j < casasHorizontais; j++) {
            printf("Direita\n");
            break;
        }
    }
}

int main() {
    printf("Movimento da Torre (5 casas para Direita):\n");
    moverTorre(5);

    printf("\nMovimento do Bispo (5 casas na Diagonal - Recursivo):\n");
    moverBispoRecursivo(5);

    moverBispoLoops(5);

    printf("\nMovimento da Rainha (8 casas para Esquerda):\n");
    moverRainha(8);

    moverCavalo();

    printf("\nFim da simulacao.\n");
    system("pause");
    return 0;
}