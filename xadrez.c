#include <stdio.h>


int main() {    
        int i;
      // Mover a torre 5 casas para a direita
      for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprimir a direção do movimento
      }
    
      // Mover a torre 5 casas para a diagonal("cima,direita")
        i = 0;
      while (i < 5) {
        printf("Cima,Direita\n"); // Imprimir a direção do movimento
        i++;
      }
    
      // Mover a torre 8 casas para a esquerda
      i = 0;
      do {
        printf("Esquerda\n");
        i++; }
       while (i < 8); // Imprimir a direção do movimento
    
    return 0;
}
