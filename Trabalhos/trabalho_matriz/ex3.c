#include <stdio.h>
#include <conio.h>


#define TL 4
#define TC 4




void carregar_matriz(int mat[TL][TC]){
	int l,c, maiorL, maiorC, maior;
	maior = 0;
	maiorL = l;
	maiorC = c;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("Informe um numero para a matriz[%d][%d]: ", l,c);
			scanf("%d", &mat[l][c]);
			if(mat[l][c]>maior){
				maiorL = l;
				maiorC = c;
				maior = mat[l][c];
			}
		}
	}
	printf("localizacao do maior numero: [%d] [%d]", maiorL, maiorC);
}


void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
}
