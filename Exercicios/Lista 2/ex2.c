#include <stdio.h>
#include <conio.h>

//Escreva um procedimento que leia seu nome e ap�s a leitura e exiba o nome lido. Este procedimento dever� ser chamado atrav�s do programa principal.


void nome(){
	char nome[50];
	printf("ESCREVA O NOME: ");
	scanf("%s", nome);
	printf("NOME LIDO: %s", nome);
}

void main(){
	nome();
}
