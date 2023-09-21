#include <stdio.h>
#include <conio.h>

#define TF 20

void main(){
	
	int N[TF], menor, posicao, i;
	
	printf("Insira 20 numeros:\n");
	system("pause");
	for(i=0;i<TF;i++){
		scanf("%d", &N[i]);
	}
	
	menor = N[0];
	posicao = 0;
	
	for(i=0;i<TF;i++){
		if(N[i]<menor){
			menor = N[i];
			posicao = i;
		}
	}
	
	printf("Menor numero inserido: %d\n", menor);
	printf("Sua posicao: %d", posicao);
}
