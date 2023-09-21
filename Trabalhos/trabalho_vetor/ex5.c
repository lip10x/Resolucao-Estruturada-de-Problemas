#include <stdio.h>
#include <conio.h>

void main(){
	
    int val[30], i, j;
    int par[5], impar[5];
    int count_par = 0, count_impar = 0;

    printf("Digite 30 valores:\n");

    for(i = 0; i < 30; i++){
        scanf("%d", &val[i]);

        if(val[i] % 2 == 0){
            
            if(count_par < 5){
                par[count_par] = val[i];
                count_par++;
            } else{
                
                printf("Vetor de Pares: ");
                for(j = 0; j < 5; j++){
                    printf("%d ", par[j]);
                }
                printf("\n");
                	count_par = 0;
                	par[count_par] = val[i];
                	count_par++;
            }
        } else{
            
            if(count_impar < 5){
                impar[count_impar] = val[i];
                count_impar++;
            } else{
                
                printf("Vetor de Ímpares: ");
                for(j = 0; j < 5; j++){
                    printf("%d ", impar[j]);
                }
                printf("\n");
                	count_impar = 0;
                	impar[count_impar] = val[i];
                	count_impar++;
            }
        }
    }

    
    printf("Vetor de Pares: ");
    for(j = 0; j < count_par; j++){
        printf("%d ", par[j]);
    }
    printf("\n");

    printf("Vetor de Ímpares: ");
    	
    for(j = 0; j < count_impar; j++){
        printf("%d ", impar[j]);
    }
    printf("\n");

}

