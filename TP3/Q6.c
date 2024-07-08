#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um valor V está presente em um arranjo
bool valorPresente(int arr[], int n, int V) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == V) {
            return true; // Valor encontrado
        }
    }
    return false; // Valor não encontrado
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Exemplo de arranjo
    int n = sizeof(arr) / sizeof(arr[0]); // Tamanho do arranjo
    int V = 3; // Valor a ser procurado

    if (valorPresente(arr, n, V)) {
        printf("Valor %d encontrado no arranjo.\n", V);
    } else {
        printf("Valor %d não encontrado no arranjo.\n", V);
    }

    return 0;
}