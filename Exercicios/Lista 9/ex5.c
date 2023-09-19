#include <stdio.h>
#include <conio.h>

#define TF 5



void inverter_vetor(int vetd[TF], int vete[TF]){
	int i,j;
	printf("<<<Inverter Vetor>>>\n\n");
	for(i=0,j=TF-1;i<TF;i++,j--){
		vete[i] = vetd[j];
	}
}

void carregar_vetor(int vetd[TF]){
	
	int i = 0;
	
	printf("\n\n<<<Carregar Vetores>>>\n\n");
	system("pause");
	
	for(i=0 ; i<TF ; i++){
		printf("\nInsira um numero para o vetor[%d]: ", i);
		scanf("%d", &vetd[i]);
	}
}

void exibir_vetor(int vetd[TF], int vete[TF]){
	int i;
	
	printf("\n\n<<<Exibir Vetor D>>>\n\n");
	system("\npause");
	
	for(i=0 ; i<TF ; i++){
		printf("\nVetor D[%d] = %d\n", i, vetd[i]);
	}
	printf("\n<<<Exibir Vetor E>>>\n");
	system("pause");
	for(i=0 ; i<TF ; i++){
		printf("\n\nVetor E[%d] = %d", i, vete[i]);
	}
}

void main(){
	int vetd[TF], vete[TF];
	carregar_vetor(vetd);
	inverter_vetor(vetd,vete);
	exibir_vetor(vetd,vete);
}
