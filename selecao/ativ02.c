#include <stdio.h>

int main()
{
    int a, b;

    printf("Digite um numero: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d\n%d\n", a, b);
    }
    else
    {
        printf("%d\n%d\n", b, a);
    }
    return 0;
}