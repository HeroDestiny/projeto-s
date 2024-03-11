#include <stdio.h>
int main()
{
    int n = 6;
    int a[n];
    int i;
    int index = -1;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 3)
        {
            index = i;
        }
    }
    printf("O último indice de 3 e %d \n", index);
    return 0;
}