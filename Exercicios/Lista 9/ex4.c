#include <stdio.h>
#include <conio.h>

#define TF 10

void carregar_vetor(int vetor[TF]){
	
	int i = 0;
	
	printf("\n\n<<<Carregar Vetores>>>\n\n");
	system("pause");
	
	for(i=0 ; i<TF ; i++){
		printf("\nInsira um numero para o vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
		
	if(vetor[i]<0){
		vetor[i] = 0;
	}
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
