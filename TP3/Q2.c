// 2. Escreva um algoritmo que receba valores em um vetor e imprima “ORDENADO” se o vetor estiver em ordem crescente. Qual e função de custo de pior caso e sua ordem de complexidade O?

#include <stdio.h>
#define TAMANHO 5 // Defina o tamanho do vetor conforme necessário
int main() {
    int vetor[TAMANHO];
    int i;
    int ordenado = 1; // Assume inicialmente que o vetor está ordenado
    // Recebe os valores do vetor
    printf("Digite %d valores para o vetor:\n", TAMANHO);
    for(i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);
    }
    // Verifica se o vetor está em ordem crescente
    for(i = 0; i < TAMANHO - 1; i++) {
        if(vetor[i] > vetor[i + 1]) {
            ordenado = 0; // Se um elemento é maior que o próximo, o vetor não está ordenado
            break;
        }
    }
    // Imprime se o vetor está ordenado ou não
    if(ordenado) {
        printf("ORDENADO\n");
    } else {
        printf("NÃO ORDENADO\n");
    }
    return 0;
}