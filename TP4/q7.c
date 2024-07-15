#include <stdio.h>
int main()
{
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int linha, soma = 0;
    printf("Digite o número da linha (0, 1 ou 2): ");
    scanf("%d", &linha);
    // Código para calcular a soma dos elementos da linha escolhida
    if (linha == 0)
    {
        for (int i = 0; i < 3; i++)
        {
            soma += matriz[0][i];
        }
    }
    else if (linha == 1)
    {
        for (int i = 0; i < 3; i++)
        {
            soma += matriz[1][i];
        }
    }
    else if (linha == 2)
    {
        for (int i = 0; i < 3; i++)
        {
            soma += matriz[2][i];
        }
    }
    else
    {
        printf("Linha inválida\n");
    }   

    printf("A soma dos elementos da linha %d é: %d\n", linha, soma);
    return 0;
}