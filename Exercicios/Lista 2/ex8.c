#include <stdio.h>
#include <conio.h>

void menu(){
	int option;
	do{
		system("cls");
		printf("Informe a opcao: ");
		printf("\n1 - Calcular idade");
		printf("\n2 - Media de 3 notas");
		printf("\n3 - Maior numero");
		printf("\n4 - Menor numero");
		printf("\n5 - Sair");
		printf("\nInforme uma opcao: ");
		scanf("%d", &option);
		
	}while(option!=5);
	
	switch(option){
			
			case 1:
				calcula_idade();
				break;
			
			case 2:
				tres_notas();
				break;
			
			case 3:
				maior_numero();
				break;		
				
			case 4:
				menor_numero();
				break;
			
			default:
			printf("Invalido!");
		}
}

void calcula_idade(){
	printf("teste");
}

void tres_notas(){
	
}

void maior_numero(){
	
}

void menor_numero(){
	
}

void main(){
	menu();	
}
