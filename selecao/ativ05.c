#include <stdio.h>

int main()
{
    int real_01, real_02;
    int cent_01, cent_02;

    scanf("%d %d", &real_01, &cent_01);
    scanf("%d %d", &real_02, &cent_02);

    int real = real_01 + real_02;
    int cent = cent_01 + cent_02;

    if (cent > 100)
    {
        real += 1;
        cent %= 100;
    }

    printf("%d.%d\n", real, cent);

    return 0;
}