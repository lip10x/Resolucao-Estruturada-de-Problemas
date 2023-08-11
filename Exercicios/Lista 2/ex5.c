#include <stdio.h>
#include <conio.h>

//Escreva um procedimento que leia 4 números, após a leitura multiplique todos e exibir o resultado. Este procedimento deverá ser chamado através do programa principal.


void mult_(){
	float n1=0, n2=0, n3=0, n4=0, mult=0;
	
	printf("insira um numero: ");
	scanf("%f", &n1);
	
	printf("insira outro numero: ");
	scanf("%f", &n2);
	
	printf("insira um numero: ");
	scanf("%f", &n3);
	
	printf("insira outro numero: ");
	scanf("%f", &n4);
	
	mult = n1*n2*n3*n4;
	
	printf("multiplicacao dos numeros: %0.1f", mult);
}


void main(){
	mult_();
}


