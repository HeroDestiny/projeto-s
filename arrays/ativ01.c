#include <stdio.h>

int main()
{
    int a[10] = {2, 6, 8, 3, 10, 9, 1, 21, 33, 14};
    int x = 2;
    int y = 4;

    for (int i = 0; i < 10; i++){
        printf("%d\n",a[i]);
    }

    prinf("%d\n",a[x + 1]);

    return 0;
}