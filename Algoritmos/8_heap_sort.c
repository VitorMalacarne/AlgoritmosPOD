
void heapifyDown(int *vetor, int i, int tamanho) {
    int maior = i;
    int esquerda = 2 * i + 1;
    int direita = 2 * i + 2;

    if (esquerda < tamanho && vetor[esquerda] > vetor[maior])
        maior = esquerda;
    if (direita < tamanho && vetor[direita] > vetor[maior])
        maior = direita;
    
    if (maior != i) {
        int temp = vetor[i];
        vetor[i] = vetor[maior];
        vetor[maior] = temp;
        heapifyDown(vetor, maior, tamanho);
    }
}

void heapSort(int *array, int tamanho, Func funcaoAuxiliar) {
    struct timeval inicio, fim;
    gettimeofday(&inicio, NULL);
    // Construção do heap máximo
    for (int i = tamanho / 2 - 1; i >= 0; i--)
        heapifyDown(array, i, tamanho);

    // Ordenação do array
    for (int i = tamanho - 1; i >= 0; i--) {
        int temp = array[0];
        array[0] = array[i];
        array[i] = temp;
        heapifyDown(array, 0, i);
    }
    gettimeofday(&fim, NULL);
    double tempo = (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec) / 1000000.0;
    printf("Tempo de Ordenação do arquivo com %d dados: %.5f\n", tamanho, tempo);
}