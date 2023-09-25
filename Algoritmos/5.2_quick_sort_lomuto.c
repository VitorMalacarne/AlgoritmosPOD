int particionelomuto(int vetor[], int esquerda, int direita)
{
    int pivo = vetor[direita];
    int i = esquerda -1;

    for (int j = esquerda; j <= direita - 1; j++) {
        if (vetor[j] < pivo) {
            i++;
            troca(vetor, i, j);
        }
    }
    troca(vetor, i+1, direita);
    return (i + 1);
}

void quicksortlomutorecursivo(int vetor[], int esquerda, int direita)
{
    int i;
    if (direita > esquerda)
    {
        i = particionelomuto(vetor, esquerda, direita);
        quicksortlomutorecursivo(vetor, esquerda, i - 1);
        quicksortlomutorecursivo(vetor, i + 1, direita);
    }
}

void quicksort(int vetor[], int tamanho)
{
    struct timeval inicio, fim;
    gettimeofday(&inicio, NULL);
    quicksortlomutorecursivo(vetor, 0, tamanho);

    gettimeofday(&fim, NULL);
    double tempo = (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec) / 1000000.0;
    printf("Tempo de Ordenação do arquivo com %d dados: %.5f\n", tamanho, tempo);
}