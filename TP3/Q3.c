#include <stdio.h>

void inserirOrdenado(int vetor[], int *tamanho, int valor) {
    int i, posicao;
    // Encontra a posição correta para inserção
    for (i = 0; i < *tamanho; i++) {
        if (valor <= vetor[i]) {
            posicao = i;
            break;
        }
    }
    // Se o valor é maior que todos, insere no final
    if (i == *tamanho) posicao = *tamanho;
    // Desloca os elementos para abrir espaço
    for (i = *tamanho; i > posicao; i--) {
        vetor[i] = vetor[i - 1];
    }
    // Insere o valor
    vetor[posicao] = valor;
    (*tamanho)++;
}

int main() {
    int vetor[100] = {1, 2, 4, 5, 6}; // Exemplo de vetor ordenado
    int tamanho = 5; // Tamanho atual do vetor
    int valor = 3; // Valor a ser inserido

    inserirOrdenado(vetor, &tamanho, valor);

    // Imprime o vetor atualizado
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}