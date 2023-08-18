#include <stdio.h>
#include <conio.h>

float area_total(float larg, float comp){
	float area;
	
	area = larg * comp;
	
	return area;
}

void main(){
	float larg, comp;
	printf("<<CALCULO AREA>>");
	printf("\n\nInsira a largura: ");
	scanf("%f", &larg);
	printf("Insira o comprimento: ");
	scanf("%f", &comp);
	
	printf("Area total: %f", area_total(larg,comp));
	
}
