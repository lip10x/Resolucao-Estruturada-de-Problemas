#include <stdio.h>
#include <conio.h>



int somar_dois_numeros(){
	float n1, n2, soma;
	
	printf("informe um numero: ");
	scanf("%f", &n1);
	
	printf("informe um numero: ");
	scanf("%f", &n2);
	
	soma = n1 + n2;
	
	
	
	return soma;
}


void main(){
	float soma;
	soma = somar_dois_numeros();
	printf("Soma: %f", soma);
}
