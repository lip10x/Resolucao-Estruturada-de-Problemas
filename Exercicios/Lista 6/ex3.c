#include <stdio.h>
#include <conio.h>

float media_total(float n1, float n2){
	float media;
	
	media = (n1+n2)/2;
	
	return media;
}

void main(){
	float n1, n2;
	printf("Informe a nota 1: ");
	scanf("%f", &n1);
	printf("Informe a nota 2: ");
	scanf("%f", &n2);
	
	printf("Media total: %f", media_total(n1,n2));
}
