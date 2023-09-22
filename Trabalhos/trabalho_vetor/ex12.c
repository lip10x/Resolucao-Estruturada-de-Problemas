#include <stdio.h>
#include <conio.h>

#define TF 10

void main() {
    int vetorA[TF];
    int temp, i;

    printf("Digite 10 valores inteiros para o vetor A:\n");
    
    for (i = 0; i < TF; i++){
        scanf("%d", &vetorA[i]);
    }

    for (i = 0; i < 5; i++){
        
        temp = vetorA[i];
        vetorA[i] = vetorA[9 - i];
        vetorA[9 - i] = temp;
    }

    printf("Vetor A após a inversão:\n");
    
    for (i = 0; i < TF; i++){
        printf("%d ", vetorA[i]);
    }
    printf("\n");
}

