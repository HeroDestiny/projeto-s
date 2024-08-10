#include <stdio.h>
#include <stdlib.h>

struct No {
    int dado;
    struct No *proximo;
};

void listar(struct No *n) {
    while (n != NULL) {
        printf("%d ", n->dado);
        n = n->proximo;
    }
}

void inserir(struct No **cabeca, int dado) {
    struct No *novo_no = (struct No*)malloc(sizeof(struct No));
    struct No *ultimo = *cabeca;
    novo_no->dado = dado;
    novo_no->proximo = NULL;

    if (*cabeca == NULL) {
        *cabeca = novo_no;
        return;
    }

    if ((*cabeca)->dado >= novo_no->dado) {
        novo_no->proximo = *cabeca;
        *cabeca = novo_no;
        return;
    }

    while (ultimo->proximo != NULL && ultimo->proximo->dado < novo_no->dado) {
        ultimo = ultimo->proximo;
    }

    novo_no->proximo = ultimo->proximo;
    ultimo->proximo = novo_no;
}

int main() {
    struct No *cabeca = NULL;
    inserir(&cabeca, 5);
    inserir(&cabeca, 2);
    inserir(&cabeca, 8);
    inserir(&cabeca, 1);
    inserir(&cabeca, 3);
    listar(cabeca);
    return 0;
}
// Reposta da questão 3:
// Inserção: O(n) (no pior caso, para encontrar a posição correta)
// Remoção: O(n) (no pior caso, para encontrar o nó a ser removido)
// Ambas as operações têm complexidade linear no pior caso, devido à necessidade de percorrer a lista para encontrar o elemento específico.