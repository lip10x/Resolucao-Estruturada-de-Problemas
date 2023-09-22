#include <stdio.h>
#include <conio.h>

#define TF 10

void main(){
	
    int valores[TF], encontrado = 0;
    int soma = 0, i;
    float media;

    
    for(i = 0; i < TF; i++){
    	printf("Digite 10 valores inteiros:\n");
        scanf("%d", &valores[i]);
        soma += valores[i];
    }

    
    media = soma / TF;

    
    for(i = 0; i < TF; i++){
        if (valores[i] == media) {
            printf("O valor %d é igual à média.\n", valores[i]);
            encontrado = 1;
        }
    }

    
    if (!encontrado){
        printf("Nenhum valor e igual a media.\n");
    }
}







