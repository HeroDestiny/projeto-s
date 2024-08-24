#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selection_sort(int *arr, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void gerar_dados(int *array, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        array[i] = rand() % 100000; // Gera números aleatórios entre 0 e 99999
    }
}

void medir_tempo_execucao(int tamanho, void (*sort_function)(int *, int)) {
    int *array = (int *)malloc(tamanho * sizeof(int));
    gerar_dados(array, tamanho);

    clock_t inicio = clock();
    sort_function(array, tamanho);
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
        medir_tempo_execucao(tamanhos[i], selection_sort);
    }

    return 0;
}
