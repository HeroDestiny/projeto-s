#include <stdio.h>

int main()
{
    int a, b;

    printf("Digite um numero: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d\n", &a);

        printf("%d\n", &b);
    }
    else
    {
        printf("%d\n", &a);

        printf("%d\n", &b);
    }
    return 0;
}