#include <stdio.h>


int mdc(int a, int b){
    if (b == 0){
        return a;
    } else {
        return mdc(b, a % b);
    }
}

int main(void) {
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("máximo divisor comum: %d\n", mdc(a, b));

  return 0;
}
