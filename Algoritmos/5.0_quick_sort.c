
void quicksortRecursivo(int vetor[], int esquerda, int direita, Func particione)
{
    int i;
    if (direita > esquerda)
    {
        i = particione(vetor, esquerda, direita);
        quicksortRecursivo(vetor, esquerda, i - 1, particione);
        quicksortRecursivo(vetor, i + 1, direita, particione);
    }
}

double quickSort(int vetor[], int tamanho, Func funcaoAuxiliar)
{
    struct timeval inicio, fim;
    gettimeofday(&inicio, NULL);

    quicksortRecursivo(vetor, 0, tamanho, funcaoAuxiliar); // tamanho - 1

    gettimeofday(&fim, NULL);
    return (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec) / 1000000.0;;
}