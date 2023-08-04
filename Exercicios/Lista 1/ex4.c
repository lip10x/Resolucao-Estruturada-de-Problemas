#include <stdio.h>
#include <conio.h>

/*Escreva um algoritmo em que leia 20 números e imprima a soma dos positivos e o total de números negativos. */

	void main(){
		
		int i, contNeg=0;
		float num, somaP=0;
		
		for(i=0;i<20;i++){
			printf("Informe num: ");
			scanf("%f", &num);
			
			if(num > 0){
				somaP+=num;
			}
			else{
				contNeg++;
			} 
		}
		printf("Quantidade de negativos: %d", contNeg);
		printf("\nSoma de positivos %0.2f", somaP);
		
	}
