#include <stdio.h>
#include <conio.h>

/*1.	Escreva um programa para ler o raio de um círculo, calcular e escrever a sua área.*/

void main(){
	
	float raio, area;
	
	printf("<<<<Calcular area de um circulo>>>>");
	printf("\nInforme o raio de um circulo: ");
	scanf("%f", &raio);
	
	area = (3.14*raio*raio);
	printf("\n Area do circulo: %0.2f", area);	
	
	}
