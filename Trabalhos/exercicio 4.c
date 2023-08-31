#include <stdio.h>
#include <conio.h>


float salario_bruto(float *sb){
	
	printf("Digite o salario bruto: ");
	scanf("%f", &sb);
	
	
}

float horas_extras(float *hrs){
	
	printf("\nDigite o total de horas extras: ");
	scanf("%f", &hrs);
	
}

float descontos(float *dsc){
	
	printf("\nDigite o total de descontos: ");
	scanf("%f", &dsc);
	
}

float ganho_horas(float hora) {
    float ganho_total = hora * 20;
    return ganho_total;
}


void main(){
	
	float sb, hrs, dsc, hora;
	
	
	printf("Salario bruto: %0.2f", salario_bruto(&sb));
	printf("Horas extras trabalhadas: %0.2f", horas_extras(&hrs));
	printf("Descontos recebidos: %0.2f", descontos(&dsc));
	hora = horas_extras(&hrs);
	printf("\nGanho por horas extras: %0.2f", ganho_horas(hora));
	
	
}





