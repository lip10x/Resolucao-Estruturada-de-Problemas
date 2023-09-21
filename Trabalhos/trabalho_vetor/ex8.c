#include <stdio.h>
#include <conio.h>
#include <conio.h>

#define TF 30

void lerVet(int vetor[], int size);
void trocarElem(int vetor[], int size);
void mostrarVet(int vetor[], int size);

int main() {
    int K[TF];

    printf("Digite os valores do vetor K[%d]:\n", TF);
    lerVet(K, TF);

    trocarElem(K, TF);

    printf("Vetor após a troca de elementos:\n");
    mostrarVet(K, TF);

}

void lerVet(int vetor[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("K[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
}

void trocarElem(int vetor[], int size) {
    int i, temp;
    
    for (i = 0; i < size - 1; i += 2) {
        temp = vetor[i];
        vetor[i] = vetor[i + 1];
        vetor[i + 1] = temp;
    }
}

void mostrarVet(int vetor[], int size) {
    int i;
    
    for (i = 0; i < size; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
