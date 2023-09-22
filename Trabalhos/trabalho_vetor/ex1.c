#include <stdio.h>
#include <conio.h>

#define TF 10

void main(){
	int vetor[TF], i, maior_n, menor_n = 10;
	
	printf("\n<<<Maior e menor numero usando vetor>>\n");
	
	for(i=0;i<=TF;i++){
		printf("\nInsira um numero: ");
		scanf("%d", &vetor[i]);
		
		if(vetor[i] > maior_n){
			maior_n = vetor[i];
		}
		
		else if(vetor[i] < menor_n){
			menor_n = vetor[i];
		}
	}
	
	printf("\nMaior numero entre os 10: %d\n", maior_n);
	
	printf("\nMenor numero entre os 10: %d", menor_n);
}
