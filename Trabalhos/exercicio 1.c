#include <stdio.h>
#include <conio.h>


void funcao(int a,int b){
	int soma=0;
	if(a%2==0 && b%2==0){
		soma = a+b;
	printf("%d", soma);
	}
int sub(){
	int subtra=0;
	if(a%2!=0 && b%2!=0){
		subtra = a-b;
		return subtra;	
	}
}
void media(float a, float b){
	float media=0;
	if(a%2==0 && b%2!=0){
		media = (a+b)/2;
	printf("valor retornado: %f", media);
	}
}
int maior_numero(){
	if(a%2!=0 && b%2==0){
		
	}
}
}

void main(){
	
	float a, b, valor;
	printf("Insira o valor de A: ");
	scanf("%f", &a);
	printf("Insira o valor de B: ");
	scanf("%f", &b);
	
	valor = funcao(a,b);
	
	printf("Valor retornado: %f", valor);
}
