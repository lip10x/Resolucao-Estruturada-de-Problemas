#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 3

struct pessoas{
	char nome[100];
	float salario;
	int cpf;
	int idade;
	int sexo; 

};

void carregar_reg(struct pessoas reg_cad[TF]){
	int i;
	printf("<<Cadastro>>");
	for(i=0;i<TF;i++){
		printf("\nInsira o nome: ");
		gets(reg_cad[i].nome);
		printf("\nInsira o salario: ");
		fflush(stdin);
		scanf("%f", &reg_cad[i].salario);
		printf("\nInsira o CPF: ");
		scanf("%d", &reg_cad[i].cpf);
		printf("\nInsira a idade: ");
		scanf("%d", &reg_cad[i].idade);
		printf("\nInsira o sexo (1-Masculino,2-Feminino): ");
		scanf("%d", &reg_cad[i].sexo);
	}
}

void exibir_reg(struct pessoas reg_cad[TF]){
	int i;
	printf("<<Exibir>>");
	for(i=0;i<TF;i++){
		printf("Nome: %s", reg_cad[i].nome);
		printf("Salario: %f", reg_cad[i].salario);
		printf("CPF: %d", reg_cad[i].cpf);
		printf("Idade: %d", reg_cad[i].idade);
		if(reg_cad[i].sexo == 1){
			printf("Sexo: Masculino");
		}
		else if(reg_cad[i].sexo == 2){
			printf("Sexo: Feminino");
		}
	}
}

void main(){
	struct pessoas reg_cad[TF];
	carregar_reg(reg_cad);
	exibir_reg(reg_cad);
}
