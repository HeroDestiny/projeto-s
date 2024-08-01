#include <stdio.h>
#include <string.h>
struct Pessoa
{
    char nome[50];
    int idade;
    float altura;
};
int main()
{
    struct Pessoa pessoas[5];
    
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);
        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%f", &pessoas[i].altura);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("Altura: %.2f\n", pessoas[i].altura);
        printf("\n");
    }

    return 0;
}