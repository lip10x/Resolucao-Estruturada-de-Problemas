#include <stdio.h>
#include <conio.h>
#include <string.h>



void troca(char text[2000]){
	int i, j, fim;
	char aux;
	
	fim = strlen(text);
	
	for(i = 0, j = fim - 1; i < j; i++, j--){
		aux = text[i];
		text[i] = text[j];
		text[j] = aux;
	}
}


void main(){
	
	char text[2000];
	
	printf("Digite algo: ");
	gets(text);
	troca(text);
	
	
	printf("\nTexto digitado: %s", text);
}
