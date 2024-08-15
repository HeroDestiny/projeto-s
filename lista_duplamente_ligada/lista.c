#include <stdio.h>
#include <stdlib.h>

// Estrutura de um nó da lista
typedef struct No
{
    int numero;
    struct No *proximo;
    struct No *anterior;
} No;

No *inicio = NULL;

// Função para criar um Novo nó
No *criar_novo_no(int numero)
{
    No *novo_no = (No *)malloc(sizeof(No));
    novo_no->numero = numero;
    novo_no->proximo = NULL;
    novo_no->anterior = NULL;
    return novo_no;
}

// Função para inserir um nó No início da lista
void inserir_inicio(int numero)
{
    No *novo_no = criar_novo_no(numero);

    novo_no->proximo = inicio;
    if (inicio != NULL)
        (inicio)->anterior = novo_no;
    inicio = novo_no;
}

// Função para inserir um nó No final da lista
void inserir_fim(int numero)
{
    No *novo_no = criar_novo_no(numero);
    if (inicio == NULL)
    {
        inicio = novo_no;
        return;
    }
    No *ultimo_no = inicio;
    while (ultimo_no->proximo != NULL)
        ultimo_no = ultimo_no->proximo;
    ultimo_no->proximo = novo_no;
    novo_no->anterior = ultimo_no;
}

void remover_inicio()
{
    if (inicio == NULL)
        return;
    No *velho = inicio;
    inicio = inicio->proximo;
    if (inicio != NULL)
        inicio->anterior = NULL;
    free(velho);
}

void remover_fim()
{
    if (inicio == NULL)
        return;
    No *ultimo_no = inicio;
    while (ultimo_no->proximo != NULL)
        ultimo_no = ultimo_no->proximo;
    if (ultimo_no->anterior != NULL)
        ultimo_no->anterior->proximo = NULL;
    free(ultimo_no);
}

// Função para imprimir a lista
void imprimir(No *no)
{
    while (no != NULL)
    {
        printf("%d ", no->numero);
        no = no->proximo;
    }
    printf("\n");
}

int main()
{

    inserir_inicio(1);
    inserir_inicio(2);
    inserir_inicio(0);
    inserir_fim(3);
    inserir_fim(7);
    inserir_fim(8);

    imprimir(inicio);

    return 0;
}