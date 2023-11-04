#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 2

struct alunos{
	char nome[100];
	int faltas;
	float n1;
	float n2;
	float media; 

};

void carregar_reg(struct alunos reg_cad[TF]){
	int i;
	printf("<<Cadastro dos alunos>>");
	for(i=0;i<TF;i++){
		printf("\nInsira o nome: ");
		fflush(stdin);
		gets(reg_cad[i].nome);
		printf("\nInsira o numero de faltas: ");
		fflush(stdin);
		scanf("%d", &reg_cad[i].faltas);
		printf("\nInsira a nota 1: ");
		scanf("%f", &reg_cad[i].n1);
		fflush(stdin);
		printf("\nInsira a nota 2: ");
		scanf("%f", &reg_cad[i].n2);
		reg_cad[i].media = (reg_cad[i].n1 + reg_cad[i].n2)/TF;
	}
}

void media(struct alunos reg_cad[TF]){
	int i, cont_maior_que_sete = 0, cont_menor_que_sete = 0, cont_faltas = 0; 
	float med_maior = 0, med_menor = reg_cad[0].media, media_geral, cont_geral;
	char nome_maior[50], nome_menor[50];
	for(i=0;i<TF;i++){
		if(reg_cad[i].media > med_maior){
			med_maior = reg_cad[i].media;
			strcpy(nome_maior,reg_cad[i].nome);
		}
		if(reg_cad[i].media < med_menor){
			med_menor = reg_cad[i].media;
			strcpy(nome_menor,reg_cad[i].nome);
		}
		if(reg_cad[i].media >= 7){
			cont_maior_que_sete++;
		}
		else if(reg_cad[i].media < 7){
			cont_menor_que_sete++;
		}
		if(reg_cad[i].faltas > 20){
			cont_faltas++;
		}
		cont_geral += reg_cad[i].media;
	}
	media_geral = cont_geral/TF;
	printf("\n%s ficou com media: %0.2f e eh a maior nota!\n", nome_maior, med_maior);
	printf("\n%s ficou com media: %0.2f e eh a menor nota\n", nome_menor, med_menor);
	printf("\nMedia geral da turma: %0.2f: \n", media_geral);
	printf("\nQtd de alunos que ficaram com mais de 7 de media: %d", cont_maior_que_sete);
	printf("\nQtd de alunos que ficaram com menos de 7 de media: %d\n", cont_menor_que_sete);
	printf("\nQtd de alunos que ficaram com mais de 20 faltas: %d\n\n", cont_faltas);
}

void exibir_reg(struct alunos reg_cad[TF]){
	int i, cont_fem=0;
	printf("<<Exibir>>\n");
	for(i=0;i<TF;i++){
		printf("\n\nNome: %s", reg_cad[i].nome);
		printf("\nFaltas: %d", reg_cad[i].faltas);
		printf("\nNota 1: %0.2f", reg_cad[i].n1);
		printf("\nNota 2: %0.2f", reg_cad[i].n2);
		printf("\nMedia de notas do aluno %s: %0.2f", reg_cad[i].nome , reg_cad[i].media);
	}
}

void main(){
	struct alunos reg_cad[TF];
	carregar_reg(reg_cad);
	media(reg_cad);
	exibir_reg(reg_cad);
}
