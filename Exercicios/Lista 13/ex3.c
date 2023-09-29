#include <stdio.h>
#include <conio.h>

#define TL 4
#define TC 4


void carregar_matriz(int mat[TL][TC]){
	int l,c, num;
	
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("Informe um numero para a matriz[%d][%d]: ", l,c);
			scanf("%d", &mat[l][c]);
		}
	}
}

void exibir_matriz(int mat[TL][TC]){
	int l,c;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("\nMatriz[%d][%d]= %d ", l, c, mat[l][c]);
		}
	}
}

void somar_matriz(int mat[TL][TC]){
	int l = 3,c, soma, somaL, somaC;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			soma += mat[l][c];
			if(l==2){
				somaL += mat[2][c];
			}
			if(c==1){
				somaC += mat[l][1];
			}
		}
	}
	printf("\nSoma da linha 3 = %d ", somaL);
	printf("\nSoma da coluna 2 = %d", somaC);
	printf("\nSoma da matriz toda = %d", soma);
}


void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	somar_matriz(mat);
	
}
