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
}