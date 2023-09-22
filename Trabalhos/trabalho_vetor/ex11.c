#include <stdio.h>
#include <conio.h>

#define TF 50

void main() {
    int vetorA[TF], vetorB[TF];
    int soma = 0, i, indiceB = 0;

    printf("Digite 50 valores inteiros para o vetor A:\n");
    for (i = 0; i < TF; i++) {
        scanf("%d", &vetorA[i]);
    }

    printf("Digite 50 valores inteiros para o vetor B:\n");
    for (i = 0; i < TF; i++) {
        scanf("%d", &vetorB[i]);
    }

    for (i = 0; i < TF; i++) {
        indiceB = 49 - i; 
        soma += (vetorA[i] - vetorB[indiceB]);
    }

    printf("Resultado da soma das subtracoes: %d\n", soma);
}

