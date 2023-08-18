#include <stdio.h>
#include <conio.h>


int data_nascimento(int aa, int an){
	int idade;
	
	idade = aa-an;
	
	return idade;
}

void main(){
	int aa, an;
	printf("Informe o ano atual: ");
	scanf("%d", &aa);
	printf("Informe o ano de nascimento: ");
	scanf("%d", &an);
	
	printf("Idade %d", data_nascimento(aa, an));
}
