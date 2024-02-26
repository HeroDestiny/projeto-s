#include <stdio.h>

int main()
{
    int a;

    printf("Digite um numero: ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("Maior do que zero\n");
    }
    else if (a < 0)
    {
        printf("Menor do que zero\n");
    }
    else
    {
        printf("Zero\n");
    }
    return 0;
}