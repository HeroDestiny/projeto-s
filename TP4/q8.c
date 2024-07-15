#include <stdio.h>
int main()
{
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int maior = matriz[0][0];
    // Código para encontrar o maior elemento da matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
    }
    printf("O maior elemento da matriz é: %d\n", maior);
    return 0;
}