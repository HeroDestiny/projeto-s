import random
import time

def bubble_sort(array):
    size = len(array)
    for i in range(size - 1):
        for j in range(size - i - 1):
            if array[j] > array[j + 1]:
                array[j], array[j + 1] = array[j + 1], array[j]

def gerar_dados(tamanho):
    return [random.randint(0, 99999) for _ in range(tamanho)]

def medir_tempo_execucao(tamanho, sort_function):
    array = gerar_dados(tamanho)

    inicio = time.time()
    sort_function(array)
    fim = time.time()

    tempo_execucao = fim - inicio
    print(f"Tempo de execução para {tamanho} elementos: {tempo_execucao:.6f} segundos")

tamanhos = [10, 100, 1000, 10000, 100000]

for tamanho in tamanhos:
    medir_tempo_execucao(tamanho, bubble_sort)