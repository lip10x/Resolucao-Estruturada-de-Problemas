#include <stdio.h>
#include <conio.h>

#define TF 30


void main(){
	int vetor[TF], i;
	
	printf("Insira 30 valores: ");
	for(i=0;i<TF;i++){
		scanf("%d", &vetor[i]);
	}
	
	printf("Valores positivos: ");
	
	for(i=0;i<TF;i++){
		if(vetor[i]>0){
			printf("\n%d", vetor[i]);
		}
	}
}
