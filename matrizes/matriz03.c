#include <stdio.h>

int main(void)
{
    int a[3][3], count;
    count = 1;
    printf("Matriz a:\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[j][i] = count++;
            printf("%2i\t", a[j][i]);
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}