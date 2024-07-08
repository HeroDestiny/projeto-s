#include <stdio.h>

int encontraMenor(int A[], int n) {
    if (n <= 0) return -1; // Considerando -1 como valor de erro para arranjo vazio ou inválido

    int menor = A[0]; // Inicializa com o primeiro elemento
    for (int i = 1; i < n; i++) {
        if (A[i] < menor) {
            menor = A[i]; // Atualiza o menor valor encontrado
        }
    }
    return menor; // Retorna o menor valor encontrado
}

int main() {
    int A[] = {5, 2, 8, 1, 3}; // Exemplo de arranjo
    int n = sizeof(A) / sizeof(A[0]); // Calcula o número de elementos no arranjo
    int menor = encontraMenor(A, n);
    printf("O menor elemento é: %d\n", menor);
    return 0;
}