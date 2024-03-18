#include "indice.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

indice *criar_indice()
{
    indice *ind = (indice *)malloc(sizeof(indice));
    if (ind == NULL) {
        return NULL; // Falha na alocação de memória
    }
    ind->entradas = NULL;
    ind->tamanho = 0;
    return ind;
}

unsigned int tamanho(indice *ind)
{
    if (ind == NULL) {
        return 0; // Índice não inicializado
    }
    return ind->tamanho;
}

entrada *localizar(indice *ind, char *termo_de_busca)
{
    if (ind == NULL || termo_de_busca == NULL) {
        return NULL; // Índice não inicializado ou termo de busca nulo
    }
    for (unsigned int i = 0; i < ind->tamanho; ++i)
    {
        if (strcmp(ind->entradas[i].termo, termo_de_busca) == 0)
        {
            return &(ind->entradas[i]);
        }
    }
    return NULL;
}

void inserir_entrada(indice *ind, char *termo, unsigned int *paginas, int n_paginas)
{
    if (ind == NULL || termo == NULL || paginas == NULL || n_paginas <= 0) {
        return; // Parâmetros inválidos
    }
    ind->tamanho++;
    ind->entradas = (entrada *)realloc(ind->entradas, ind->tamanho * sizeof(entrada));
    if (ind->entradas == NULL) {
        ind->tamanho--; // Reverter o incremento de tamanho em caso de falha
        return; // Falha na alocação de memória
    }

    entrada *nova_entrada = &(ind->entradas[ind->tamanho - 1]);
    nova_entrada->termo = strdup(termo); // Alocação de memória para termo
    if (nova_entrada->termo == NULL) {
        ind->tamanho--; // Reverter o incremento de tamanho em caso de falha
        return; // Falha na alocação de memória
    }
    nova_entrada->paginas = (unsigned int *)malloc(n_paginas * sizeof(unsigned int));
    if (nova_entrada->paginas == NULL) {
        free(nova_entrada->termo); // Liberação de memória para termo
        ind->tamanho--; // Reverter o incremento de tamanho em caso de falha
        return; // Falha na alocação de memória
    }
    memcpy(nova_entrada->paginas, paginas, n_paginas * sizeof(unsigned int));
    nova_entrada->n_paginas = n_paginas;
}

void atualizar_entrada(indice *ind, char *termo, unsigned int *paginas, int n_paginas)
{
    if (ind == NULL || termo == NULL || paginas == NULL || n_paginas <= 0) {
        return; // Parâmetros inválidos
    }
    entrada *encontrada = localizar(ind, termo);
    if (encontrada != NULL)
    {
        free(encontrada->paginas); // Liberação de memória para paginas
        encontrada->paginas = (unsigned int *)malloc(n_paginas * sizeof(unsigned int));
        if (encontrada->paginas == NULL) {
            return; // Falha na alocação de memória
        }
        memcpy(encontrada->paginas, paginas, n_paginas * sizeof(unsigned int));
        encontrada->n_paginas = n_paginas;
    }
}

void imprimir(indice *ind)
{
    if (ind == NULL)
    {
        printf("Índice vazio.\n");
        return;
    }

    printf("Índice Remissivo:\n");
    unsigned int i, j;
    for (i = 0; i < ind->tamanho; ++i)
    {
        printf("%s: ", ind->entradas[i].termo);
        for (j = 0; j < ind->entradas[i].n_paginas; ++j)
        {
            printf("%u ", ind->entradas[i].paginas[j]);
        }
        printf("\n");
    }
}
