#include <stdio.h>

int main() {

    int mat[5][5];
    int vet[5];

   //preenche de 1 até 25
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            mat[i][j] = 1 + i*5 + j;  
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 5; i++) {
        vet[i] = mat[i][i];
    }

    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
