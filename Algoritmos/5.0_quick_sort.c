#include "algoritmos.h"
void quicksortrecursivo(int vetor[], int esquerda, int direita, Func particione)
{
    int i;
    if (direita > esquerda)
    {
        i = particione(vetor, esquerda, direita);
        quicksortrecursivo(vetor, esquerda, i - 1, particione);
        quicksortrecursivo(vetor, i + 1, direita, particione);
    }
}

void quicksort(int vetor[], int tamanho, Func particione)
{
    struct timeval inicio, fim;
    gettimeofday(&inicio, NULL);

    quicksortrecursivo(vetor, 0, tamanho, particione ); // tamanho - 1

    gettimeofday(&fim, NULL);
    double tempo = (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec) / 1000000.0;
    printf("Tempo de Ordenação do arquivo com %d dados: %.5f\n", tamanho, tempo);
}