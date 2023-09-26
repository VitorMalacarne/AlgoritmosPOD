#include "algoritmos.h"
void heapify_down(int *array, int i, int tamanho) {
    int maior = i;
    int esquerda = 2 * i + 1;
    int direita = 2 * i + 2;

    if (esquerda < tamanho && array[esquerda] > array[maior])
        maior = esquerda;
    if (direita < tamanho && array[direita] > array[maior])
        maior = direita;
    
    if (maior != i) {
        int temp = array[i];
        array[i] = array[maior];
        array[maior] = temp;
        heapify_down(array, maior, tamanho);
    }
}

void heap_sort(int *array, int tamanho) {
    struct timeval inicio, fim;
    gettimeofday(&inicio, NULL);
    // Construção do heap máximo
    for (int i = tamanho / 2 - 1; i >= 0; i--)
        heapify_down(array, i, tamanho);

    // Ordenação do array
    for (int i = tamanho - 1; i >= 0; i--) {
        int temp = array[0];
        array[0] = array[i];
        array[i] = temp;
        heapify_down(array, 0, i);
    }
    gettimeofday(&fim, NULL);
    double tempo = (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec) / 1000000.0;
    printf("Tempo de Ordenação do arquivo com %d dados: %.5f\n", tamanho, tempo);
}