#include <stdio.h>
#include <conio.h>



float sal_brt(){
	
	float sal; 
	
	printf("\nDigite seu Salario: ");
	scanf("%f", &sal);
	
	return sal;	
}
float hora_extra(){
	
	float extra;
	
	printf("\nDigite as horas extras: ");
	scanf("%f", &extra);
	
	return extra;
}
float descontos(){
	
	float val_descontos;
	
	printf("\nDigite os Descontos: ");
	scanf("%f", &val_descontos);
	
	return val_descontos;	
}
float total_horas(float extra){
	
	float multi;
	
	multi = extra * 20;
	
	return multi;
}
float calc_sal(float val_horas_extra, float sal){
	
	float sal_total;
	
	sal_total = val_horas_extra + sal;
	
	return sal_total;
}
void sal_liquido(float sal_bruto1, float descontos){
	
	float sal_liq;
	
	sal_liq = sal_bruto1 - descontos;
	
	printf("\nSalario Liquido do Funcionario: %0.2f", sal_liq);
}
void main(){
	
	float sal, extra, taxa_descontos, val_horas_extra, sal_bruto1;
	
	int i;
	for(i=0;i<5;i++){
		printf("\n<<Salario do funcionario(a))>>\n");
		printf("\nFuncionario Numero: %d",i + 1);
		
		//funções de calculo:
		sal = sal_brt();
		extra = hora_extra();
		taxa_descontos = descontos();
		val_horas_extra = total_horas(extra);
		sal_bruto1 = calc_sal(val_horas_extra, sal);
		
		printf("\nValor das Horas Extras: %0.2f", val_horas_extra);
		
		printf("\nSalario Bruto do Funcionario: %0.2f", sal_bruto1);
		
		sal_liquido(sal_bruto1, taxa_descontos);
	}	 
}











