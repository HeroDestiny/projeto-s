#include <stdio.h>
#include <stdlib.h>

struct No {
    int dado;
    struct No *proximo;
};

struct No* criarNo(int dado) {
    struct No* novoNo = (struct No*)malloc(sizeof(struct No));
    novoNo->dado = dado;
    novoNo->proximo = novoNo;
    return novoNo;
}

void adicionarNo(struct No** cabeca, int dado) {
    struct No* novoNo = criarNo(dado);
    if (*cabeca == NULL) {
        *cabeca = novoNo;
    } else {
        struct No* temp = *cabeca;
        while (temp->proximo != *cabeca) {
            temp = temp->proximo;
        }
        temp->proximo = novoNo;
        novoNo->proximo = *cabeca;
    }
}

void listar(struct No *n) {
    if (n == NULL) return;
    struct No *temp = n;
    do {
        printf("%d ", temp->dado);
        temp = temp->proximo;
    } while (temp != n);
    printf("\n");
}

int main() {
    struct No* cabeca = NULL;

    adicionarNo(&cabeca, 10);
    adicionarNo(&cabeca, 20);
    adicionarNo(&cabeca, 30);

    listar(cabeca);

    return 0;
}
// Reposta da questão 3:
// Inserção: O(n) no pior caso, devido à necessidade de percorrer a lista para encontrar o último nó.
// Remoção: O(n) no pior caso, devido à necessidade de percorrer a lista para encontrar o nó a ser removido.