#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int quantidade;

    printf("Quantidade de elementos: ");
    scanf(" %i", &quantidade);

    vetor = malloc(quantidade * sizeof(int));

    //Escrevendo no vetor
    for (int i = 0; i < quantidade; ++i) {
        printf("Valor [%i de %i]: ", (i + 1), quantidade);
        scanf(" %i", &vetor[i]);
    }

    //Imprimindo elementos do vetor
    printf("--------------------------------------------- \n");
    printf("Saída: \n");
    for (int i = 0; i < quantidade; i++) {
        printf("%i \t", vetor[i]);
    }
    printf("\n--------------------------------------------- \n");

    free(vetor);
} 