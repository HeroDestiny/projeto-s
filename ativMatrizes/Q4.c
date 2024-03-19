#include <stdio.h>

int main() {
    int L, C, M;
    printf("Digite o valor de Linhas e Colunas para a primeira matriz e o número de Colunas para a segunda matriz: ");
    scanf("%d %d %d", &L, &C, &M);

    int mat1[L][C], mat2[C][M], resultado[L][M];

    // Inicializa a matriz resultado com zeros
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < M; j++) {
            resultado[i][j] = 0;
        }
    }

    // Preenche as matrizes
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            mat1[i][j] = 1 + i*C + j; // Preenche mat1
        }
    }

    for (int i = 0; i < C; i++) {
        for (int j = 0; j < M; j++) {
            mat2[i][j] = 1 + i*M + j; // Preenche mat2
        }
    }

    // Realiza a multiplicação das matrizes
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < C; k++) {
                resultado[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("\nO resultado da multiplicação das matrizes é:\n");
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
