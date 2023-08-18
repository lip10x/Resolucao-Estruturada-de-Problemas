#include <stdio.h>
#include <conio.h>



int soma_valor(int a, int b){
	int soma;
	soma = a + b;
	return soma;
}

void main(){
	int soma, a, b;
	printf("<<SOMA DE DOIS NUMEROS>>");
	printf("\nInforme a: ");
	scanf("%d", &a);
	printf("Informe b: ");
	scanf("%d", &b);
	soma = soma_valor(a,b);
	printf("Soma: %d", soma);	
}
