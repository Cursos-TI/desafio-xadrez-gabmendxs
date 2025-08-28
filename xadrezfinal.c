#include <stdio.h>


void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return; 
    printf("Direita\n");
    moverTorre(casasRestantes - 1); 
}


void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes == 0) return; 
    printf("Cima, Direita\n");
    moverBispoRecursivo(casasRestantes - 1); 
}


void moverBispoComLoops(int casasVerticais, int casasHorizontais) {
    for (int i = 1; i <= casasVerticais; i++) { 
        for (int j = 1; j <= casasHorizontais; j++) { 
            printf("Cima, Direita\n");
            break; 
        }
    }
}


void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return; 
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1); 
}


void moverCavalo(int casasCima, int casasDireita) {
    int i, j;

    printf("Movimento do Cavalo:\n");

    
    for (i = 1; i <= casasCima; i++) {
        if (i > casasCima) break; 
        printf("Cima\n");


        j = 1;
        while (j <= casasDireita) {
            if (i < casasCima) {
               
                j++;
                continue;
            }
            printf("Direita\n");
            break; 
        }
    }
}


// Programa Principal

int main() {
    
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\n");

    
    int casasBispo = 5;
    printf("Movimento do Bispo (recursivo):\n");
    moverBispoRecursivo(casasBispo);

    printf("\n");
    printf("Movimento do Bispo (loops aninhados):\n");
    moverBispoComLoops(casasBispo, casasBispo);

    printf("\n");

    
    int casasRainha = 8;
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n");

    
    int casasCima = 2;
    int casasDireita = 1;
    moverCavalo(casasCima, casasDireita);

    return 0;
}