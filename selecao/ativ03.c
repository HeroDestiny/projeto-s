#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite o terceiro número: ");
    scanf("%d", &c);

    if (a < b && a < c)
    {
        printf("%d\n", a);
    }
    else if (b < a && b < c)
    {
        printf("%d\n", b);
    }
    else
    {
        printf("%d\n", c);
    }

    if ((a > b && a < c) || (a < b && a > c))
    {
        printf("%d\n", a);
    }
    else if ((b > a && b < c) || (b < a && b > c))
    {
        printf("%d\n", b);
    }
    else
    {
        printf("%d\n", c);
    }

    if (a > b && a > c)
    {
        printf("%d\n", a);
    }
    else if (b > a && b > c)
    {
        printf("%d\n", b);
    }
    else
    {
        printf("%d\n", c);
    }

    return 0;
}
