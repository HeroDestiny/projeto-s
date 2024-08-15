#include <stdio.h>

int potencia(int a, int b){
    if (b == 0){
        return 1;
    } else {
        return a * potencia(a, b-1);
    }
}


int main(void) {
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("%d elevado a %d é %d\n", a, b, potencia(a, b));
  return 0;
}