#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 7

struct concurso{
	char nome[100];
	float altura;
	int cor_fav;
	int cor_olhos;

};

void carregar_reg(struct concurso reg_cad[TF]){
	int i;
	printf("<<Cadastro Do Concurso>>");
	for(i=0;i<TF;i++){
		printf("\nInsira o nome: ");
		fflush(stdin);
		gets(reg_cad[i].nome);
		printf("\nInsira a altura: ");
		fflush(stdin);
		scanf("%f", &reg_cad[i].altura);
		printf("\nInsira a cor favorita (1-branco, 2-vermelho, 3-amarelo, 4-Verde): ");
		scanf("%d", &reg_cad[i].cor_fav);
		fflush(stdin);
		printf("\nInsira a cor dos olhos (1-castanho, 2-preto, 3-azul, 4-verde): ");
		scanf("%d", &reg_cad[i].cor_olhos);
	}
}

void funcoes(struct concurso reg_cad[TF]){
	int i, cont_acima = 0, cont_azul = 0, cont_fav = 0;
	float mais_alta = 0, mais_baixa = reg_cad[0].altura, total_altura = 0, media_geral = 0, total_fav = 0, media_fav = 0;
	char nome_alta[50], nome_baixa[50];
	for(i=0;i<TF;i++){
		if(reg_cad[i].altura > mais_alta){
			mais_alta = reg_cad[i].altura;
			strcpy(nome_alta,reg_cad[i].nome);
		}
		if(reg_cad[i].altura < mais_baixa){
			mais_baixa = reg_cad[i].altura;
			strcpy(nome_baixa,reg_cad[i].nome);
		}
		if(reg_cad[i].altura >= 1.60){
			cont_acima++;
		}
		if(reg_cad[i].cor_olhos == 3){
			cont_azul++;
		}
		if(reg_cad[i].cor_fav == 4){
			total_fav += reg_cad[i].altura;
			cont_fav++;
		}
		total_altura += reg_cad[i].altura;
	}
	media_geral = total_altura/TF;
	media_fav = total_fav/cont_fav;
	printf("\n%s eh a mais alta e tem %0.2f metros de altura\n", nome_alta, mais_alta);
	printf("\n%s eh a mais baixa e tem %0.2f metros de altura\n", nome_baixa, mais_baixa);
	printf("\nMedia da altura de todas as participantes: %0.2f", media_geral);
	printf("\nQtd de candidatas acima da media de altura: %d\n\n", cont_acima);
	printf("\nQtd de candidatas que possuem olhos azuis: %d\n\n", cont_azul);
	printf("\nMedia da altura das candidatas que possuem como cor favorita o verde: %0.2f\n", media_fav);
}

void exibir_reg(struct concurso reg_cad[TF]){
	int i;
	printf("<<Exibir>>\n");
	for(i=0;i<TF;i++){
		printf("\n\nNome: %s", reg_cad[i].nome);
		printf("\nAltura: %0.2f", reg_cad[i].altura);
		if(reg_cad[i].cor_fav == 1){
			printf("\nCor preferida: Branco");
		}
		else if(reg_cad[i].cor_fav == 2){
			printf("\nCor preferida: Vermelho");
		}
		else if(reg_cad[i].cor_fav == 3){
			printf("\nCor preferida: Amarelo");
		}
		else if(reg_cad[i].cor_fav == 4){
			printf("\nCor preferida: Verde");
		}
		if(reg_cad[i].cor_olhos == 1){
			printf("\nCor dos olhos: Castanho");
		}
		else if(reg_cad[i].cor_olhos == 2){
			printf("\nCor dos olhos: Preto");
		}
		else if(reg_cad[i].cor_olhos == 3){
			printf("\nCor dos olhos: Azul");
		}
		else if(reg_cad[i].cor_olhos == 4){
			printf("\nCor dos olhos: Verde");
		}
	}
	
}

void main(){
	struct concurso reg_cad[TF];
	carregar_reg(reg_cad);
	funcoes(reg_cad);
	exibir_reg(reg_cad);
}
