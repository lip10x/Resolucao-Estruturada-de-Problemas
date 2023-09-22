#include <stdio.h>
#include <conio.h>


void preencherArray(float *array, int size) {
	int i;
	
    for(i = 0; i < size; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &array[i]);
    }
}

void main() {
    int size, i;
    float meuArray[size];

    printf("Digite o tamanho do array: ");
    scanf("%d", &size);

    preencherArray(meuArray, size);

    printf("Valores digitados:\n");
    
    for(i = 0; i < size; i++) {
        printf("%.2f ", meuArray[i]);
    }
}
