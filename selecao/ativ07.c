#include <stdio.h>

int main()
{
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7){
        printf("Categoria: Infantil A\n");
    }
    if (idade >= 8 && idade <= 10){
        printf("Categoria: Infantil B\n");
    }
    if (idade >= 11 && idade <= 13){
        printf("Categoria: Juvenil A\n");
    }
    if (idade >= 14 && idade <= 17){
        printf("Categoria: Juvenil B\n");
    }
    if (idade >= 18){
        printf("Categoria: Adulto\n");
    }
    if (idade < 5){
        printf("Idade Invalida!\n");
    }
    return 0;
}