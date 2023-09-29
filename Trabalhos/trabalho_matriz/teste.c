void main() {
    int matriz[5][5], i, j;
    
    // Preencher a matriz com 0s inicialmente
    for ( i = 0; i < 5; i++) {
        for ( j = 0; j < 5; j++) {
            matriz[i][j] = 0;
        }
    }

    // Preencher a diagonal principal com 1s
    for ( i = 0; i < 5; i++) {
        matriz[i][i] = 1;
    }

    // Imprimir a matriz resultante
    for ( i = 0; i < 5; i++) {
        for ( j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


}
