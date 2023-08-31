#include <stdio.h>
#include <conio.h>






float salario_bruto(float *sb){
	
	printf("\nDigite o salario bruto: ");
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

float ganho_horas(float hrs) {
    float ganho_total = hrs * 20;
    return ganho_total;
}


void main(){
	
	float sb, hrs, dsc, ganho;
	
	
	printf("Salario bruto: %0.2f", salario_bruto(&sb));
	printf("Horas extras trabalhadas: %0.2f", horas_extras(&hrs));
	printf("Descontos recebidos: %0.2f", descontos(&dsc));
	printf("\nGanho por horas extras: %0.2f", ganho_horas(hrs));
	
	
}





