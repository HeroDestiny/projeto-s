// Escreva um programa que lê quatro valores inteiros e imprime a média aritmética
// entre eles. O programa também deve exibir os números lidos que são maiores do que
// a média calculada.

#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite o terceiro número: ");
    scanf("%d", &c);
    printf("Digite o quarto número: ");
    scanf("%d", &d);

    float resultado = (a + b + c + d) / 4.0;

    printf("%.2f\n", resultado);
    if( a > resultado){
        printf("%d\n", a);
    }
    
    if( b > resultado){
        printf("%d\n", b);
    }

    if( c > resultado){
        printf("%d\n", c);
    }
    if( d > resultado){
        printf("%d\n", d);
    }


    return 0;
}