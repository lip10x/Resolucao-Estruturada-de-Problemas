#include <stdio.h>
#include <conio.h>


#define TL 3
#define TC 3




void carregar_matriz(int mat[TL][TC]){
	int l,c, media, soma, soma_menor = 0;
	
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("Digite um numero para a matriz [%d] [%d]: ", l, c);
			scanf("%d", &mat[l][c]);
			if(l==c){
				soma += mat[l][c];
			}
		}
	}
	media = soma / TL;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			if(mat[l][c] < media){
				soma_menor += mat[l][c];
			}
		}
	}
	printf("Soma dos valores que sao menores que a media dos itens na diagonal principal: %d", soma_menor);
}




void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
}
