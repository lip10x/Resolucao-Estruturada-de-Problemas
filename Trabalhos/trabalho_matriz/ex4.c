#include <stdio.h>
#include <conio.h>


#define TL 4
#define TC 4




void carregar_matriz(int mat[TL][TC], int mat2[TL][TC], int mat3[TL][TC]){
	int l,c;
	
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("Informe um numero para a matriz[%d][%d]: ", l,c);
			scanf("%d", &mat[l][c]);
		}
	}
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("Informe um numero para a matriz2[%d][%d]: ", l,c);
			scanf("%d", &mat2[l][c]);
			if(mat2[l][c]>mat[l][c]){
				mat3[l][c] = mat2[l][c];
			}
			else mat3[l][c] = mat[l][c];
			}
			
		}
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("\nMatriz[%d][%d]= %d ", l, c, mat3[l][c]);
		}
	}
	}


void main(){
	int mat[TL][TC], mat2[TL][TC], mat3[TL][TC];
	carregar_matriz(mat,mat2,mat3);
}
