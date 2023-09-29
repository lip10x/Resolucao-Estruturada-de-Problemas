#include <stdio.h>
#include <conio.h>

#define TC 3
#define TL 3


void carregar_matriz(int mat[TL][TC]){
	int l,c, soma = 0;
	
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			soma += 10;
			mat[l][c] = soma;
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


void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
}
