#include <stdio.h>
#include <conio.h>

#define TF 5

void carregar_vetor(int vetor[TF]){
	int i = 0;
	printf("\n\n<<<Carregar Vetores>>>\n\n");
	system("pause");
	for(i=0 ; i<TF ; i++){
		vetor[i] = i *10 + 10;
	}
}

void exibir_vetor(int vetor[TF]){
	int i;
	printf("\n\n<<<Exibir Vetor>>>\n\n");
	system("pause");
	for(i=0 ; i<TF ; i++){
		printf("\nVetor[%d] = %d", i, vetor[i]);
	}
}

void main(){
	int vetor[TF];
	carregar_vetor(vetor);
	exibir_vetor(vetor);
}
