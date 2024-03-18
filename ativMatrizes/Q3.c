#include <stdio.h>

int main() {
    int N;
    printf("Digite o valor de N para a matriz: ");
    scanf("%d", &N);

    int mat[N][N], transposta[N][N];

   //preenche de 1 até N
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mat[i][j] = 1 + i*N + j;  
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            transposta[j][i] = mat[i][j];
        }
    }

    printf("\nA matriz transposta é:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
