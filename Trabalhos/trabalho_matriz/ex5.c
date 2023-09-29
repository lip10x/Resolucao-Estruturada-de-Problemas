#include <stdio.h>
#include <conio.h>


#define TL 3
#define TC 3




void carregar_matriz(int mat[TL][TC]){
	int l,c, media, soma;
	
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("Digite um numero para a matriz [%d] [%d]: ", l, c);
			scanf("%d", &mat[l][c]);
			if(l==c){
				soma += mat[l][c] ;
			}
		}
	}
	media = soma / TL;
	printf("Media dos numeros da diagonal principal: %d", media);
}




void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
}
