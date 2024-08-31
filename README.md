# Relatório Resumido sobre Algoritmos de Ordenação

## 1. Introdução aos Algoritmos de Ordenação

Os algoritmos de ordenação são fundamentais para a organização de dados em sistemas computacionais. Eles são amplamente utilizados para organizar listas ou arrays em uma ordem específica (crescente ou decrescente). A escolha do algoritmo adequado depende de fatores como o tamanho dos dados e a eficiência necessária. Entre os algoritmos de ordenação mais comuns, temos o Bubble Sort, Insertion Sort, Selection Sort, Merge Sort e Quick Sort.

## 2. Descrição da Implementação de Cada Algoritmo

- **Bubble Sort**:
  - Compara elementos adjacentes e os troca se estiverem fora de ordem.
  - Simples, mas ineficiente para grandes conjuntos de dados (O(n²)).

- **Insertion Sort**:
  - Insere cada elemento na posição correta em uma lista já ordenada.
  - Eficiente para listas pequenas ou quase ordenadas, mas tem complexidade O(n²).

- **Selection Sort**:
  - Encontra o menor elemento da parte não ordenada da lista e o coloca na posição correta.
  - Simples, mas menos eficiente que o Insertion Sort (O(n²)).

- **Merge Sort**:
  - Divide a lista em sublistas menores, ordena-as e as combina.
  - Eficiente com complexidade O(n log n), mas requer espaço adicional para armazenamento.

- **Quick Sort**:
  - Escolhe um pivô e particiona a lista em elementos menores e maiores que o pivô.
  - Em média, mais rápido que o Merge Sort (O(n log n)), mas pode atingir O(n²) no pior caso.

## 3. Metodologia Utilizada para os Experimentos

Os experimentos foram conduzidos com implementações dos algoritmos em Python e C, utilizando o mesmo conjunto de dados. A performance foi medida em termos de tempo de execução e número de comparações realizadas. Os testes foram feitos com diferentes tamanhos de entrada para avaliar a escalabilidade e eficiência de cada algoritmo.

## 4. Apresentação dos Resultados

Os resultados dos experimentos são apresentados em tabelas e gráficos, mostrando o tempo de execução e a quantidade de operações realizadas para cada algoritmo em diferentes tamanhos de entrada. As implementações em C geralmente foram mais rápidas que as em Python devido à natureza compilada e otimizada da linguagem C.

| Algoritmo       | Tempo Médio (Python) | Tempo Médio (C) |
|-----------------|----------------------|-----------------|
| Bubble Sort     | Alto                 | Moderado        |
| Insertion Sort  | Alto                 | Moderado        |
| Selection Sort  | Alto                 | Moderado        |
| Merge Sort      | Baixo                | Muito Baixo     |
| Quick Sort      | Baixo                | Muito Baixo     |

## 5. Análise e Discussão dos Resultados

Os resultados confirmaram as expectativas teóricas. O Merge Sort e o Quick Sort se destacaram pela eficiência, especialmente em grandes conjuntos de dados. O Bubble Sort, Insertion Sort, e Selection Sort mostraram-se ineficientes para entradas maiores, confirmando sua complexidade O(n²). A implementação em C proporcionou um ganho de desempenho significativo em relação à versão em Python, destacando a importância da escolha da linguagem de programação.

## 6. Conclusões

A análise mostrou que a escolha do algoritmo de ordenação impacta significativamente o desempenho, especialmente em grandes volumes de dados. Quick Sort e Merge Sort são preferíveis para grandes conjuntos de dados, enquanto os demais algoritmos podem ser adequados para casos mais simples ou listas pequenas. Além disso, a linguagem de implementação também desempenha um papel crucial na eficiência do algoritmo.
