#include <stdio.h>
#include <conio.h>


char *funcao_ola(){
	return "ola mundo";
}


void main(){
	printf("\nRetorno >> %s", funcao_ola());
}
