#include <stdio.h>
#include <conio.h>

#define L 3
#define C 6

void lerMat(float matriz[L][C]);
void impSomaColunaImpar(float matriz[L][C]);
void impMediaColuna2e4(float matriz[L][C]);
void substColuna6(float matriz[L][C]);
void impMat(float matriz[L][C]);

void main() {
    float mat[L][C];
	lerMat(mat);
	impSomaColunaImpar(mat);
	impMediaColuna2e4(mat);
	substColuna6(mat);
	impMat(mat);
	getch();
}
void lerMat(float mat[L][C]) {
    int i, j;
    printf("Digite os elementos da matriz %dx%d:\n", L, C);
    for (i=0;i<L;i++) {
        for (j=0;j<C;j++) {
            scanf("%f", &mat[i][j]);
        }
    }
}
void impSomaColunaImpar(float mat[L][C]) {
    float soma = 0;
    int j, i;
    for (j=0;j<C;j+=2) {
        for (i=0;i<L;i++) {
            soma += mat[i][j];
        }
    }
    printf("Soma das colunas impares: %.0f\n", soma);
}
void impMediaColuna2e4(float mat[L][C]) {
    float soma = 0;
    int j, i;
    for (j=1;j<C;j+=2) {
        for (i=0;i<L;i++) {
            soma += mat[i][j];
        }
    }
    float media = soma / L;
    printf("Media aritmetica das colunas 2 e 4: %.2f\n", media);
}
void substColuna6(float mat[L][C]) {
	int i;
    for (i=0;i<L;i++) {
        mat[i][5] = mat[i][0] + mat[i][1];
    }
}
void impMat(float mat[L][C]) {
	int i, j;
    printf("Matriz modificada: \n");
    for (i=0;i<L;i++) {
        for (j=0;j<C;j++) {
            printf("%.0f ", mat[i][j]);
        }
        printf("\n");
    }
}
