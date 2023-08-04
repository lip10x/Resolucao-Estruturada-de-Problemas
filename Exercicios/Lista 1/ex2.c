#include <stdio.h>
#include <conio.h>

/*2.	Escreva um programa para ler as dimensões de uma cozinha retangular (comprimento, largura e altura), calcular e escrever a 
quantidade de caixas de azulejos para se colocar em todas as suas paredes (considere que não será descontada a área ocupada por portas e janelas). 
Cada caixa de azulejos possui 1,5 m2.*/

void main(){
	
	float comp, larg, alt, az, areaT, comp2, larg2;
	
	printf("Insira o comprimento da cozinha: ");
	scanf("%f", &comp);
	printf("Insira a largura da cozinha: ");
	scanf("%f", &larg);
	printf("Insira a altura da cozinha: ");
	scanf("%f", &alt);
	
	comp2 = comp*2;
	larg2 = larg*2;
	
	areaT = (comp2*alt) + (larg2*alt);
	
	az = areaT/1.5;
	
	printf("Quantidade de azulejos: %0.2f", az);
	
	
}
