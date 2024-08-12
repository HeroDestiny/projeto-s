#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No* proximo;
} No;

No* criarNo(int dado) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->dado = dado;
    novoNo->proximo = NULL;
    return novoNo;
}

void listarElementos(No* cabeca) {
    No* temp = cabeca;
    while (temp != NULL) {
        printf("Elemento: %d \n", temp->dado);
        temp = temp->proximo;
    }
    printf("--Fim da Lista--\n");
}

void inserirNoInicio(No** cabeca, int dado) {
    No* novoNo = criarNo(dado);
    novoNo->proximo = *cabeca;
    *cabeca = novoNo;
}

void inserirNoFim(No** cabeca, int dado) {
    No* novoNo = criarNo(dado);
    if (*cabeca == NULL) {
        *cabeca = novoNo;
        return;
    }
    No* temp = *cabeca;
    while (temp->proximo != NULL) {
        temp = temp->proximo;
    }
    temp->proximo = novoNo;
}

void removerDoInicio(No** cabeca) {
    if (*cabeca == NULL) {
        printf("A lista está vazia.\n");
        return;
    }
    No* temp = *cabeca;
    *cabeca = (*cabeca)->proximo;
    free(temp);
}

void removerDoFim(No** cabeca) {
    if (*cabeca == NULL) {
        printf("A lista está vazia.\n");
        return;
    }
    if ((*cabeca)->proximo == NULL) {
        free(*cabeca);
        *cabeca = NULL;
        return;
    }
    No* temp = *cabeca;
    while (temp->proximo->proximo != NULL) {
        temp = temp->proximo;
    }
    free(temp->proximo);
    temp->proximo = NULL;
}

void buscarElemento(No* cabeca, int dado) {
    No* temp = cabeca;
    while (temp != NULL) {
        if (temp->dado == dado) {
            printf("Elemento %d encontrado.\n", dado);
            return;
        }
        temp = temp->proximo;
    }
    printf("Elemento %d não encontrado.\n", dado);
}

int main() {
    No* cabeca = NULL;
    int escolha, dado;

    do {
        printf("MENU:\n");
        printf("0 - SAIR\n");
        printf("1 - LISTAR ELEMENTOS DA LISTA\n");
        printf("2 - INSERIR NO INÍCIO\n");
        printf("3 - INSERIR NO FIM\n");
        printf("4 - REMOVER DO INÍCIO\n");
        printf("5 - REMOVER DO FIM\n");
        printf("6 - BUSCAR ELEMENTO\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 0:
                printf("Saindo...\n");
                break;
            case 1:
                listarElementos(cabeca);
                break;
            case 2:
                printf("Digite o valor a ser inserido no início: ");
                scanf("%d", &dado);
                inserirNoInicio(&cabeca, dado);
                break;
            case 3:
                printf("Digite o valor a ser inserido no fim: ");
                scanf("%d", &dado);
                inserirNoFim(&cabeca, dado);
                break;
            case 4:
                removerDoInicio(&cabeca);
                break;
            case 5:
                removerDoFim(&cabeca);
                break;
            case 6:
                printf("Digite o valor a ser buscado: ");
                scanf("%d", &dado);
                buscarElemento(cabeca, dado);
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (escolha != 0);

    return 0;
}