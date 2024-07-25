#include <stdio.h>

struct contatos
{
    int id;
    char nome[50];
    char telefone[15];
};

void incluir(struct contatos *c, int *n)
{
    printf("Digite o nome: ");
    scanf("%s", c[*n].nome);
    printf("Digite o telefone: ");
    scanf("%s", c[*n].telefone);
    (*n)++;

    for (int i = 1; i < *n; i++)
    {
        c[i].id = i;
    }
}

void listar(struct contatos *c, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Id: %d\n", c[i].id);
        printf("Nome: %s\n", c[i].nome);
        printf("Telefone: %s\n", c[i].telefone);
        printf("\n");
    }
}

void deletar(struct contatos *c, int *n)
{
    int id;
    printf("Digite o id do contato que deseja deletar: ");
    scanf("%d", &id);

    for (int i = 0; i < *n; i++)
    {
        if (c[i].id == id)
        {
            for (int j = i; j < *n - 1; j++)
            {
                c[j] = c[j + 1];
            }
            (*n)--;
            break;
        }
    }
}

int main()
{
    struct contatos c[100];
    int n = 0; // Contador de contatos
    int opcao;

    do
    {
        printf("\nMENU\n");
        printf("0 - SAIR\n");
        printf("1 - INCLUIR CONTATO\n");
        printf("2 - LISTAR CONTATOS\n");
        printf("3 - DELETAR CONTATO\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            incluir(c, &n);
            break;
        case 2:
            listar(c, n);
            break;
        case 3:
            deletar(c, &n);
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida.\n");
        }
    } while (opcao != 0);

    return 0;
}