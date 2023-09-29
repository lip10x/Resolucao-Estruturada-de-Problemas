#include <stdio.h>
#include <conio.h>

#define TL 3
#define TC 3


void carregar_matriz(int mat[TL][TC]){
	int l,c;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("Insira um numero para a matriz[%d][%d]: ", l,c);
			scanf("%d", &mat[l][c]);
		}
	}
}

void carregar_matriz2(int mat[TL][TC], int mat2[TL][TC]){
	int l,c;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			mat2[l][c] = mat[l][c] * 2;
		}
	}
}

void exibir_matriz(int mat2[TL][TC]){
	int l,c;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("\nMatriz[%d][%d]= %d ", l, c, mat2[l][c]);
		}
	}
}




void main(){
	int mat[TL][TC], mat2[TL][TC];
	carregar_matriz(mat);
	carregar_matriz2(mat,mat2);
	
	exibir_matriz(mat2);
	
	
}
