#include <stdio.h>

int main()
{
    int numero;

    scanf("%d", &numero);

    int resultado = numero % 2;

    if(resultado != 0){
        printf("impar\n");
    }else {
        printf("par\n");
    }

    return 0;
}