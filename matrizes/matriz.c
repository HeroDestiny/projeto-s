#include <stdio.h>

int main(void)
{
    int a[2][3];
    a[0][1] = 6;
    a[0][2] = -9;
    a[1][0] = -2;
    a[1][1] = 6;
    a[1][2] = 8;

    printf("Matriz a:\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%2i\t", a[j][i]);
        }
    }
    return 0;
}