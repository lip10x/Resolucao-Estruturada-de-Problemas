#include <stdio.h>
#include <conio.h>
#include <string.h>



void inverter(char text[2000]){
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
	
	char text[2000], texto_copia[2000];
	
	printf("Digite algo: ");
	gets(text);
	
	strcpy(texto_copia,text);
	inverter(texto_copia);
	
	if(strcmp(text, texto_copia)==0){
		printf("Eh palindrome");
	}
	else
		printf("Nao eh palindrome");
}
