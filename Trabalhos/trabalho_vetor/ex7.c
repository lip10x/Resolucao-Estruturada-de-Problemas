#include <stdio.h>
#include <conio.h>



void main() {
    int vetorA[10], vetorB[10], result[10], i;

    printf("Digite 10 valores inteiros para o primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetorA[i]);
    }

    printf("Digite 10 valores inteiros para o segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetorB[i]);
    }

    for (i = 0; i < 10; i++) {
        result[i] = vetorA[i] * vetorB[i];
    }

    printf("Vetor Resultante:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

}

