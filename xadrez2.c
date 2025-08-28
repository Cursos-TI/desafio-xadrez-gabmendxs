#include <stdio.h>

int main() {
    
    //Simulação do movimento da Torre (usando FOR)
    
    int casasTorre = 5; // Número de casas que a Torre vai andar
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n"); // Torre andando 1 casa para a direita
    }

    printf("\n"); // Linha em branco para separar as saídas

  
    //Simulação do movimento do Bispo (usando WHILE)
 
    int casasBispo = 5; // Número de casas que o Bispo vai andar
    int contadorBispo = 1;
    printf("Movimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n"); // Bispo anda na diagonal
        contadorBispo++;
    }

    printf("\n");

    
    //Simulação do movimento da Rainha (usando DO-WHILE)
    
    int casasRainha = 8; // Número de casas que a Rainha vai andar
    int contadorRainha = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n"); // Rainha andando para a esquerda
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\n");

   
    //Simulação do movimento do Cavalo (usando LOOPS ANINHADOS)
    
    int casasBaixo = 2;    // Duas casas para baixo
    int casasEsquerda = 1; // Uma casa para a esquerda

    printf("Movimento do Cavalo:\n");

    //Loop externo (for) controla o movimento para baixo
    for (int i = 1; i <= casasBaixo; i++) {
        printf("Baixo\n"); // Cada passo para baixo
    }

    //Loop interno (while) controla o movimento para a esquerda
    int j = 1;
    while (j <= casasEsquerda) {
        printf("Esquerda\n"); // Movimento para a esquerda
        j++;
    }

    return 0;
}