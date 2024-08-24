import random
import time

# Função para trocar dois elementos
def trocar(arr, i, j):
    arr[i], arr[j] = arr[j], arr[i]

# Função para particionar o array
def particionar(arr, baixo, alto):
    pivo = arr[alto]
    i = baixo - 1

    for j in range(baixo, alto):
        if arr[j] < pivo:
            i += 1
            trocar(arr, i, j)
    trocar(arr, i + 1, alto)
    return i + 1

# Função Quick Sort
def quick_sort(arr, baixo, alto):
    if baixo < alto:
        pi = particionar(arr, baixo, alto)
        quick_sort(arr, baixo, pi - 1)
        quick_sort(arr, pi + 1, alto)

def gerar_dados(tamanho):
    return [random.randint(0, 99999) for _ in range(tamanho)]

def medir_tempo_execucao(tamanho, sort_function):
    array = gerar_dados(tamanho)

    inicio = time.time()
    sort_function(array, 0, tamanho - 1)
    fim = time.time()

    tempo_execucao = fim - inicio
    print(f"Tempo de execução para {tamanho} elementos: {tempo_execucao:.6f} segundos")


tamanhos = [10, 100, 1000, 10000, 100000]

for tamanho in tamanhos:
    medir_tempo_execucao(tamanho, quick_sort)

