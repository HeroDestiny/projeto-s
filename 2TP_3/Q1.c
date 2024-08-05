// Com base no conteúdo apresentado em sala de aula, construa uma Lista Ligada onde os elementos 
// são inseridos sempre na ordem correta, onde o menor número está no início da Lista e o maior no final da Lista.

#include <stdio.h>
#include <stdlib.h>

struct listaLigada
{
    int numero;
    struct listaLigada *proximo;
};

int listar(struct listaLigada **lista){
    struct listaLigada *atual = *lista;
    while (atual != NULL){
        printf("%d\n", atual->numero);
        atual = atual->proximo;
    }
}

int inserir(struct listaLigada **lista, int numero){
    struct listaLigada *novo = malloc(sizeof(struct listaLigada));
    novo->numero = numero;
    novo->proximo = NULL;

    if (*lista == NULL){
        *lista = novo;
    } else {
        struct listaLigada *atual = *lista;
        struct listaLigada *anterior = NULL;
        while (atual != NULL && atual->numero < numero){
            anterior = atual;
            atual = atual->proximo;
        }
        if (anterior == NULL){
            novo->proximo = *lista;
            *lista = novo;
        } else {
            anterior->proximo = novo;
            novo->proximo = atual;
        }
    }
}

int main(){
    struct listaLigada *lista = NULL;
    inserir(&lista, 5);
    inserir(&lista, 3);
    inserir(&lista, 7);
    printf("Lista:\n");
    return 0;
}