#include <stdio.h>

void imprimir_matriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int somar_quadrados_primeira_coluna(int matriz[4][4]) {
    int soma = 0;
    for (int i = 0; i < 4; i++) {
        soma += matriz[i][0] * matriz[i][0];
    }
    return soma;
}

int somar_terceira_linha(int matriz[4][4]) {
    int soma = 0;
    for (int j = 0; j < 4; j++) {
        soma += matriz[2][j];
    }
    return soma;
}


int somar_diagonal_principal(int matriz[4][4]) {
    int soma = 0;
    for (int i = 0; i < 4; i++) {
        soma += matriz[i][i];
    }
    return soma;
}


int somar_elementos_par_segunda_linha(int matriz[4][4]) {
    int soma = 0;
    for (int j = 0; j < 4; j += 2) {
        soma += matriz[1][j];
    }
    return soma;
}

// Programa principal
int main() {

    int matriz[4][4];
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Insira o valor para a posição [%d,%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nMatriz:\n");
    imprimir_matriz(matriz);
    
    printf("\nSoma dos quadrados da primeira coluna: %d", somar_quadrados_primeira_coluna(matriz));
    printf("\nSoma da terceira linha: %d", somar_terceira_linha(matriz));
    printf("\nSoma da diagonal principal: %d", somar_diagonal_principal(matriz));
    printf("\nSoma dos elementos de índice par da segunda linha: %d", somar_elementos_par_segunda_linha(matriz));

    return 0;
}
