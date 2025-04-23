#include <stdio.h>

// Move torre 5 casas a direita
void moverTorreDireita(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorreDireita(casas - 1);
    }
}

// Mover torre 5 casas a diagonal
void moverDiagonalDireita(int casas) {
    if (casas > 0) {
        printf("Cima,Direita\n");
        moverDiagonalDireita(casas - 1);
    }
}

// Mover torre 8 casas a esquerda
void moverEsquerda(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverEsquerda(casas - 1);
    }
}

// Mover torre 3 casas 2x "Cima" + 1x "Direita"
void moverEscada(int movimentoCompleto) {
    while (movimentoCompleto--) {
        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}

int main() {
    printf("Movendo torre 5 casas a Direita\n");
    moverTorreDireita(5);

    printf("\nMovendo torre 5 casas a Diagonal Direita\n");
    moverDiagonalDireita(5);

    printf("\nMovendo 8 casas a Esquerda\n");
    moverEsquerda(8);

    printf("\nMovimento tipo 'Escada' (2x para Cima + 1x para a Direita), 1 vez\n");
    moverEscada(1); 

    return 0;
}