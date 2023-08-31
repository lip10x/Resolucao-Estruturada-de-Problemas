#include <stdio.h>
#include <conio.h>


void funcao(int a, int b){
	
	int soma=0, media=0, subtra=0, maior_numero;
	
	if(a%2==0 && b%2==0){
		soma = a+b;
		printf("Resultado da soma: %d", soma);
		}

	else
		if(a%2!=0 && b%2!=0){
		subtra = a-b;
		printf("Resultado da subtracao %d", subtra);
		}
	
	else
		if(a%2==0 && b%2!=0){
		media = (a+b)/2;
		printf("Resultado da media: %d", media);
		}

		else
			if(a%2!=0 && b%2==0){
				if(a>b){
					printf("Maior numero: %d", a);
				}
				else printf("Maior numero: %d", b);
			}

	}



void main(){
	
	int a, b;
	printf("Insira o valor de A: ");
	scanf("%d", &a);
	printf("Insira o valor de B: ");
	scanf("%d", &b);
	
	funcao(a, b);
	
}
