#include <stdio.h>
#include <conio.h>

#define TF 500

void main() {
    int vetor[TF], i;
    int maior = 0;

    printf("Digite 500 valores inteiros:\n");
    for (i = 0; i < TF; i++){
        scanf("%d", &vetor[i]);

        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }

    for (i = 0; i < TF; i++){
        vetor[i] = vetor[i] / maior;
    }

    printf("Vetor apos a divisao por %d:\n", maior);
    for (i = 0; i < TF; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

