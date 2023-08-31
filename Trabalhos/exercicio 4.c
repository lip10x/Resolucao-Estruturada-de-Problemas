#include <stdio.h>
#include <conio.h>


float salario_bruto(float *sb){
	
	printf("Digite o salario bruto: ");
	scanf("%f", &sb);
	
}

float descontos(float *dsc){
	
	printf("\nDigite o total de descontos: ");
	scanf("%f", &dsc);
	
}

float ganho_horas(float hora) {
    float ganho_total = hora * 20;
    return ganho_total;
}

float horas_extras(float *hrs){
	
	printf("\nDigite o total de horas extras: ");
	scanf("%f", &hrs);
	
}


void main(){
	
	float sb, hrs, dsc, hora;
	
	
	printf("Salario bruto: %0.2f", salario_bruto(&sb));
	printf("Horas extras trabalhadas: %0.2f", horas_extras(&hrs));
	printf("Descontos recebidos: %0.2f", descontos(&dsc));
	hora = hrs;
	printf("\nGanho por horas extras: %0.2f", hora);
	
	
}





