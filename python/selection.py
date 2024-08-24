import random
import time

def selection_sort(arr):
    tamanho = len(arr)
    for i in range(tamanho - 1):
        min_idx = i
        for j in range(i + 1, tamanho):
            if arr[j] < arr[min_idx]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]

def gerar_dados(tamanho):
    return [random.randint(0, 99999) for _ in range(tamanho)]

def medir_tempo_execucao(tamanho, sort_function):
    array = gerar_dados(tamanho)

    inicio = time.time()
    sort_function(array)
    fim = time.time()

    tempo_execucao = fim - inicio
    print(f"Tempo de execução para {tamanho} elementos: {tempo_execucao:.6f} segundos")


random.seed(time.time())
tamanhos = [10, 100, 1000, 10000, 100000]

for tamanho in tamanhos:
    medir_tempo_execucao(tamanho, selection_sort)

