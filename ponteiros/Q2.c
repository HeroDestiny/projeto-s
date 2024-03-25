#include <stdio.h>
// Listing 2: Código
int main()
{
    int a = 10, b = 20, c = 30;
    int *ponteiro;
    ponteiro = &b;
    *ponteiro = -5;
    ponteiro = &c;
    *ponteiro = 50;
    ponteiro = &a;
    printf("a, b, c, *p = %d, %d, %d, %d\n", a, b, c, *ponteiro);
    return 0;
}