#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define L 5
#define C 5

#define MINIMO_NUM 0
#define MAXIMO_NUM 99

void gerarC(int cart[L][C]);
void exibirC(int cart[L][C]);

void main() {
    int cart[L][C];
    srand((unsigned int)time(NULL));
    gerarC(cart);
    exibirC(cart);
    getch();
}
void gerarC(int cart[L][C]) {
    int numDisp[MAXIMO_NUM-MINIMO_NUM+1];
    int i, j, k;
    int max_disp = MAXIMO_NUM;

    for (i=0;i<=max_disp-MINIMO_NUM;i++) {
        numDisp[i] = i + MINIMO_NUM;
    }
    for (i=0;i<L;i++) {
        for(j=0;j<C;j++) {
            int posAleatoria = rand() % (max_disp - MINIMO_NUM + 1);
            cart[i][j] = numDisp[posAleatoria];
            usleep(10000);

            for(k=posAleatoria;k<max_disp-MINIMO_NUM;k++){
                numDisp[k] = numDisp[k + 1];
            }
            max_disp--;
        }
    }
}
void exibirC(int cart[L][C]) {
	int i, j;
    
    printf("Cartela de Bingo: \n");
    for (i=0;i<L;i++) {
        for (j=0;j<C;j++) {
            printf("%2d ", cart[i][j]);
        }
        printf("\n");
    }
}

