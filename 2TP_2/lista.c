// fazer um menu com 0-sair, 1-listar, 2-inserir no inicio, 3-inserir no fim, 4-remover do inicio, 5-remover do fim, 6-buscar elemento

#include <stdio.h>
#include <stdlib.h>

struct listaLigada
{
    int numero;
    struct listaLigada *proximo;
};

int listar(struct listaLigada **lista)
{
    struct listaLigada *aux = *lista;
    while (aux != NULL)
    {
        printf("%p\n", aux);
        aux = aux->proximo;
    }
}

int inserirInicio(struct listaLigada **lista)
{
    struct listaLigada *novo = malloc(sizeof(struct listaLigada));
    novo->proximo = *lista;
    *lista = novo;
}

int removerInicio(struct listaLigada **lista)
{
    if (*lista != NULL)
    {
        struct listaLigada *aux = *lista;
        *lista = (*lista)->proximo;
        free(aux);
    }
}

int inserirFim(struct listaLigada **lista)
{
    struct listaLigada *novo = malloc(sizeof(struct listaLigada));
    novo->proximo = NULL;

    if (*lista == NULL)
    {
        *lista = novo;
    }
    else
    {
        struct listaLigada *aux = *lista;
        while (aux->proximo != NULL)
        {
            aux = aux->proximo;
        }
        aux->proximo = novo;
    }
}

int removerFim(struct listaLigada **lista)
{
    if (*lista != NULL)
    {
        if ((*lista)->proximo == NULL)
        {
            free(*lista);
            *lista = NULL;
        }
        else
        {
            struct listaLigada *aux = *lista;
            while (aux->proximo->proximo != NULL)
            {
                aux = aux->proximo;
            }
            free(aux->proximo);
            aux->proximo = NULL;
        }
    }
}

int buscarElemento(struct listaLigada *lista, int elemento)
{
    struct listaLigada *aux = lista;
    int i = 0;
    while (aux != NULL)
    {
        if (i == elemento)
        {
            return 1;
        }
        aux = aux->proximo;
        i++;
    }
    return 0;
}

void main()
{
    struct listaLigada *lista = NULL;
    int opcao;
    int elemento;

    do
    {
        printf("0 - Sair\n");
        printf("1 - Listar\n");
        printf("2 - Inserir no inicio\n");
        printf("3 - Remover do inicio\n");
        printf("4 - Inserir no fim\n");
        printf("5 - Remover do fim\n");
        printf("6 - Buscar elemento\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            listar(&lista);
            break;
        case 2:
            inserirInicio(&lista);
            break;
        case 3:
            removerInicio(&lista);
            break;
        case 4:
            inserirFim(&lista);
            break;
        case 5:
            removerFim(&lista);
            break;
        case 6:
            printf("Digite o elemento que deseja buscar: ");
            scanf("%d", &elemento);
            if (buscarElemento(lista, elemento))
            {
                printf("Elemento encontrado\n");
            }
            else
            {
                printf("Elemento nao encontrado\n");
            }
            break;
        }
    } while (opcao != 0);
}