#include <stdio.h>
#include <string.h>
struct Produto
{
    char nome[50];
    float preco;
    int quantidade;
};
void atualizaEstoque(struct Produto *p, int qtd)
{
    p->quantidade += qtd;
}
int main()
{
    struct Produto p;

    strcpy(p.nome, "Arroz");
    p.preco = 10.0;
    p.quantidade = 100;

    atualizaEstoque(&p, 50);

    printf("Nome: %s\n", p.nome);
    printf("Preco: %.2f\n", p.preco);
    printf("Quantidade: %d\n", p.quantidade);

    return 0;
}