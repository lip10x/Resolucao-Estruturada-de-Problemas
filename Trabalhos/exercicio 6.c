#include <stdio.h>
#include <conio.h>

void calcular_idade(int *aa, int *an, int *result){
	
	*result = *aa - *an;
	
	
	
}

void main(){
	
	int aa=0, an=0, result=0;
	
	printf("Digite o ano atual: ");
	scanf("%d", &aa);
	
	printf("Digite o ano de nascimento: ");
	scanf("%d", &an);
	
	calcular_idade(&aa,&an,&result);
	
	printf("Sua idade eh: %d", result);
}
