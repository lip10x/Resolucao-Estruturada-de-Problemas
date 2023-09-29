#include <stdio.h>
#include <conio.h>

#define TL 4s
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

void procurar(int mat[TL][TC]){
	int l,c, num, cont;
	printf("\nInforme numero a ser procurado na matriz: ");
	scanf("%d", &num);
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			if(num == mat[l][c]){
				printf("Numero encontrado na linha: %d,%d", l, c);
				cont++;
			}
		}
	}
	if(cont==0){
		printf("\nNumero nao encontrado!");
	}
}


void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	procurar(mat);
	
}
