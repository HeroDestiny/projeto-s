#include <stdio.h>

// resto de divisão
int resto_divisao(int a, int b){
    if (a < b){
        return a;
    } else {
        return resto_divisao(a-b, b);
    }
}

int main(void) {
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("O resto da divisão de %d por %d é %d\n", a, b, resto_divisao(a, b));
  return 0;
}