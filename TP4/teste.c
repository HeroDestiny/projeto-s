#include <stdio.h>

int main() {
	int numeros[5] = {10, 20, 30, 40, 50};
	int *ptr = numeros;
	// Qual será o valor impresso?
	printf("%d\n", *(ptr + 2));
	return 0;
}