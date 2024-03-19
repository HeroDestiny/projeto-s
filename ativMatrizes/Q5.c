#include <stdio.h>

int main() {
    int L, C;
    printf("Digite o valor de Linhas e Colunas para as matrizes: ");
    scanf("%d %d", &L, &C);

    int mat1[L][C], mat2[L][C], resultado[L][C];

    // Preenchendo as matrizes com valores
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            mat1[i][j] = 1 + i*C + j; // Preenche mat1
            mat2[i][j] = 1 + i*C + j; // Preenche mat2
        }
    }

    // Realiza a soma das matrizes
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            resultado[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("\nO resultado da soma das matrizes é:\n");
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
