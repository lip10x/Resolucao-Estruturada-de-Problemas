#include <stdio.h>
#include <conio.h>

#define TF 5


void main(){
	
	int i = 0;
	float cal_nota = 0, vetor[TF], media = 0;
	
	printf("<<<Calculo de media do aluno>>>\n\n");
	
	for(i=0;i<TF;i++){
		printf("Insira a nota: ");
		scanf("%f", &vetor[i]);
		
		cal_nota += vetor[i];
		
	}
	
	media = cal_nota / TF;
	
	printf("\nMedia do aluno: %f", media);
}
