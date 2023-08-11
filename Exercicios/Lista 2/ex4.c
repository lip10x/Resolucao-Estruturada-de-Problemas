#include <stdio.h>
#include <conio.h>

//Escreva um procedimento que leia 2 números, após a leitura somar e exibir o resultado. Este procedimento deverá ser chamado através do programa principal.


void soma(){
	float n1=0, n2=0, soma=0;
	
	printf("insira um numero: ");
	scanf("%f", &n1);
	
	printf("insira outro numero: ");
	scanf("%f", &n2);
	
	soma = n1+n2;
	
	printf("soma dos dois numeros: %0.1f", soma);
}

void main(){
	soma();
}
