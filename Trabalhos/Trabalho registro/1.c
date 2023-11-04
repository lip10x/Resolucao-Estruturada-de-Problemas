#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 2

struct pessoas{
	char nome[100];
	float salario;
	float cpf;
	int idade;
	int sexo; 

};

void carregar_reg(struct pessoas reg_cad[TF]){
	int i;
	printf("<<Cadastro>>");
	for(i=0;i<TF;i++){
		printf("\nInsira o nome: ");
		fflush(stdin);
		gets(reg_cad[i].nome);
		printf("\nInsira o salario: ");
		fflush(stdin);
		scanf("%f", &reg_cad[i].salario);
		printf("\nInsira o CPF: ");
		scanf("%f", &reg_cad[i].cpf);
		fflush(stdin);
		printf("\nInsira a idade: ");
		scanf("%d", &reg_cad[i].idade);
		printf("\nInsira o sexo (1-Masculino,2-Feminino): ");
		scanf("%d", &reg_cad[i].sexo);
	}
}

void media(struct pessoas reg_cad[TF]){
	int i, media, total_sal;
	for(i=0;i<TF;i++){
		total_sal += reg_cad[i].salario;
	}
	media = total_sal / TF;
	printf("\nMedia salarial: %d\n", media);
}

void salario_maior(struct pessoas reg_cad[TF]){
	int i;
	float maior_sal=0;
	for(i=0;i<TF;i++){
		if(reg_cad[i].salario > maior_sal){
			maior_sal = reg_cad[i].salario;
		}
	}
	printf("\nMaior Salario: %0.2f\n", maior_sal);
}

void exibir_reg(struct pessoas reg_cad[TF]){
	int i, cont_fem=0;
	printf("<<Exibir>>\n");
	for(i=0;i<TF;i++){
		printf("\n\nNome: %s", reg_cad[i].nome);
		printf("\nSalario: %0.2f", reg_cad[i].salario);
		printf("\nCPF: %0.2f", reg_cad[i].cpf);
		printf("\nIdade: %d", reg_cad[i].idade);
		if(reg_cad[i].sexo == 1){
			printf("\nSexo: Masculino");
		}
		else if(reg_cad[i].sexo == 2){
			printf("\nSexo: Feminino");
			cont_fem++;
		}
	}
	printf("\nNumero de pessoas de sexo feminino: %d", cont_fem);
}

void main(){
	struct pessoas reg_cad[TF];
	carregar_reg(reg_cad);
	media(reg_cad);
	salario_maior(reg_cad);
	exibir_reg(reg_cad);
}
