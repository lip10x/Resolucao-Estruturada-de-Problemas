#include <stdio.h>
#include <conio.h>


//Escreva uma função que leia 4 números, após a leitura multiplique todos e retorne o resultado. 
//Está função deverá ser chamada através do programa principal. Exibir conteúdo retornado.

int mult(){
	
	float n1, n2, n3, n4, multi;
	
	printf("Informe um numero: ");
	scanf("%f", &n1);
	
	printf("Informe um numero: ");
	scanf("%f", &n2);
	
	printf("Informe um numero: ");
	scanf("%f", &n3);
	
	printf("Informe um numero: ");
	scanf("%f", &n4);
	
	multi = n1 * n2 * n3 * n4;
	
	return multi;
}

void main(){
	float resultado;
	resultado = mult();
	printf("Resultando: %0.1f", resultado);
}







