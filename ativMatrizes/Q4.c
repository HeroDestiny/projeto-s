#include <stdio.h>

int main() {
    int N;
    printf("Digite o valor de N para as matrizes: ");
    scanf("%d", &N);

    int mat1[N][N], mat2[N][N], resultado[N][N];

    // Inicializa a matriz resultado com zeros
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            resultado[i][j] = 0;
        }
    }

   //preenche de 1 até N
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mat1[i][j] = 1 + i*N + j;  
        }
    }

   //preenche de 1 até N
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mat2[i][j] = 1 + i*N + j;  
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                resultado[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("\nO resultado da multiplicação das matrizes é:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
