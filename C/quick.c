#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para trocar dois elementos
void trocar(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Função para particionar o array
int particionar(int arr[], int baixo, int alto) {
    int pivo = arr[alto];
    int i = (baixo - 1);

    for (int j = baixo; j <= alto - 1; j++) {
        if (arr[j] < pivo) {
            i++;
            trocar(&arr[i], &arr[j]);
        }
    }
    trocar(&arr[i + 1], &arr[alto]);
    return (i + 1);
}

// Função Quick Sort
void quick_sort(int arr[], int baixo, int alto) {
    if (baixo < alto) {
        int pi = particionar(arr, baixo, alto);
        quick_sort(arr, baixo, pi - 1);
        quick_sort(arr, pi + 1, alto);
    }
}

void gerar_dados(int *array, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        array[i] = rand() % 100000; // Gera números aleatórios entre 0 e 99999
    }
}

void medir_tempo_execucao(int tamanho, void (*sort_function)(int *, int, int)) {
    int *array = (int *)malloc(tamanho * sizeof(int));
    gerar_dados(array, tamanho);

    clock_t inicio = clock();
    sort_function(array, 0, tamanho - 1);
    clock_t fim = clock();

    double tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("Tempo de execução para %d elementos: %f segundos\n", tamanho, tempo_execucao);

    free(array);
}

int main() {
    srand(time(0));
    int tamanhos[] = {10, 100, 1000, 10000, 100000};
    int num_tamanhos = sizeof(tamanhos) / sizeof(tamanhos[0]);

    for (int i = 0; i < num_tamanhos; i++) {
        medir_tempo_execucao(tamanhos[i], quick_sort);
    }

    return 0;
}
