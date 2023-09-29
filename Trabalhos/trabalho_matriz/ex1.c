#include <stdio.h>
#include <conio.h>


#define TL 4
#define TC 4




void carregar_matriz(int mat[TL][TC]){
	int l,c, cont_maior_que_dez;
	
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("Informe um numero para a matriz[%d][%d]: ", l,c);
			scanf("%d", &mat[l][c]);
			if(mat[l][c]>10){
				cont_maior_que_dez++;
			}
		}
	}
	printf("Qtd de numeros maiores que 10: %d", cont_maior_que_dez);
}

void exibir_matriz(int mat[TL][TC]){
	int l,c;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("\nMatriz[%d][%d]= %d ", l, c, mat[l][c]);
		}
	}
}


void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
}
