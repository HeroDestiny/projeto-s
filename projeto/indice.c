#include "indice.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

indice *criar_indice()
{
    indice *ind = (indice *)malloc(sizeof(indice));
    ind->entradas = NULL;
    ind->tamanho = 0;
    return ind;
}

unsigned int tamanho(indice *ind)
{
    return ind->tamanho;
}

entrada *localizar(indice *ind, char *termo_de_busca)
{
    unsigned int i;
    for (i = 0; i < ind->tamanho; ++i)
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
    ind->tamanho++;
    ind->entradas = (entrada *)realloc(ind->entradas, ind->tamanho * sizeof(entrada));

    entrada *nova_entrada = &(ind->entradas[ind->tamanho - 1]);
    strcpy(nova_entrada->termo, termo);
    nova_entrada->paginas = (unsigned int *)malloc(n_paginas * sizeof(unsigned int));
    memcpy(nova_entrada->paginas, paginas, n_paginas * sizeof(unsigned int));
    nova_entrada->n_paginas = n_paginas;
}

void atualizar_entrada(indice *ind, char *termo, unsigned int *paginas, int n_paginas)
{
    entrada *encontrada = localizar(ind, termo);
    if (encontrada != NULL)
    {
        free(encontrada->paginas);
        encontrada->paginas = (unsigned int *)malloc(n_paginas * sizeof(unsigned int));
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
