#include <stdio.h>
//Listing 4: Código
void swap(int *a, int *b) {
    int temp;

    temp = *a;

    *a = *b;

    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Antes da troca: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}
