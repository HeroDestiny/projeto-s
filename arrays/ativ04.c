#include <stdio.h>
int main()
{
    int n;
    int i;
    int index = -1;

    printf("digite o tamanho do array: ");
    scanf("%d",&n);
    int a[n];
    
    printf("digite o array: ");
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