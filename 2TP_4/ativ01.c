#include <stdio.h>

int somar_consecutivo(int a, int b){
    if (a == b){
        return a;
    } else {
        return a + somar_consecutivo(a+1, b);
    }
}

int main(void) {
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("A soma dos números consecutivos de %d a %d é %d\n", a, b, somar_consecutivo(a, b));
  return 0;
}