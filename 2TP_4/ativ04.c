#include <stdio.h>

int divisao(int a, int b){
    if (a < b){
        return 0;
    } else {
        return 1 + divisao(a-b, b);
    }
}

int main(void) {
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("A divisão de %d por %d é %d\n", a, b, divisao(a, b));
  return 0;
}