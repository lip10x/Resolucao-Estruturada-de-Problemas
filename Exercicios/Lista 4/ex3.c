#include <stdio.h>
#include <conio.h>



int calcular_idade(){
	int aa, an, idade;
	printf("Informe o ano atual: ");
	scanf("%d", &aa);
	printf("Informe o ano de nascimento: ");
	scanf("%d", &an);
	idade  = aa - an;
	return idade;
	
}

int media_quatro(){
	float n1, n2, n3, n4, media;
	printf("Infome a nota: ");
	scanf("%f", &n1);
	printf("Infome a nota: ");
	scanf("%f", &n2);
	printf("Infome a nota: ");
	scanf("%f", &n3);
	printf("Infome a nota: ");
	scanf("%f", &n4);
	
	media = (n1+n2+n3+n4)/4;
	
	return media;
}

int mult_dois(){
	float n1, n2, mult;
	printf("Insira um numero: ");
	scanf("%f", &n1);
	printf("Insira um numero: ");
	scanf("%f", &n2);
	
	mult = n1*n2;
	
	return mult;
}

int div_dois(){
	float n1, n2, div;
	printf("Insira um numero: ");
	scanf("%f", &n1);
	printf("Insira um numero: ");
	scanf("%f", &n2);
	
	div = n1/n2;
	
	return div;
}

void menu(){
	int opcao=0, idade;
	float media, mult, div;
	do{
		system("cls");
		printf("\nInforme a opcao: ");
		printf("\n 1 - Calcular idade ");
		printf("\n 2 - Media de quatro notas ");
		printf("\n 3 - Multiplicacao de 2 numeros ");
		printf("\n 4 - Divisao de dois numeros ");
		printf("\n 5 - Sair ");
		printf("\nInforme a opcao: ");
		scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			idade = calcular_idade();
			printf("Idade: %d \n \n", idade);
			system("pause");
			break;
		case 2:
			media = media_quatro();
			printf("Media de quatro notas: %f \n \n", media);
			system("pause");
			break;
		case 3:
			mult = mult_dois();
			printf("Multiplicacao de dois numeros: %f \n \n", mult);
			system("pause");
			break;
		case 4:
			div = div_dois();
			printf("Divisao de dois numeros: %f \n \n", div);
			system("pause");
			break;
		case 5:
			printf("\nPrograma encerrado!");
			break;
		default:
			printf("\n Opcao invalida!");
			break; 
	}
	}while(opcao != 5);
}

void main(){
	menu();
}
