#include <stdio.h>
#include <conio.h>


void transferencia(int *a ,int *b){
	int aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
	
}



void main(){
	int a, b;
	
	printf("Insira o valor de A: ");
	scanf("%d", &a);
	printf("Insira o valor de B: ");
	scanf("%d", &b);
	transferencia(&a, &b);
	
	
	printf("Valor de A : %d", a);
	printf("\nValor de B : %d", b);	
}
