#include <stdio.h>


int main() {
    int mat[4][8];
    int soma_linha, soma_coluna;
   
   //preenche de 1 até 32
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 8; j++) {
            mat[i][j] = 1 + i*8 + j;  
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 4; i++) {
        soma_linha = 0;
        for (int j = 0; j < 8; j++) {
            soma_linha += mat[i][j];
        }
        printf("Soma dos elementos da linha %d: %d - %s\n", i+1, soma_linha, soma_linha % 2 == 0 ? "Par" : "Impar");
    }

    printf("\n");

    for (int j = 0; j < 8; j++) {
        soma_coluna = 0;
        for (int i = 0; i < 4; i++) {
            soma_coluna += mat[i][j];
        }
        printf("Soma dos elementos da coluna %d: %d - %s\n", j+1, soma_coluna, soma_coluna % 2 == 0 ? "Par" : "Impar");
    }

    return 0;
}
