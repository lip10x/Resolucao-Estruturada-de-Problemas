#include <stdio.h>
#include <conio.h>


#define TL 5
#define TC 5




void carregar_matriz(int mat[TL][TC]){
	int l,c;
	
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			if(l==c){
				mat[l][c] = 1;
			}
			else mat[l][c] = 0;
			}
		}
	}

void exibir_matriz(int mat[TL][TC]){
	int l,c;
	printf("Como a matriz ficou: \n");
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("%d ", mat[l][c]);
		}
		printf("\n");
	}
}


void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
}
