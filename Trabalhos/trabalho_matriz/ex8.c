#include <stdio.h>
#include <conio.h>
#include <unistd.h>


#define TL 5
#define TC 5




void carregar_matriz(int mat[TL][TC]){
	int l,c, numeroAleatorio = rand() % 99 + 0;
	
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			
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
