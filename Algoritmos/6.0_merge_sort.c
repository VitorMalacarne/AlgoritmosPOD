#include "algoritmos.h"


void mergesortrecursivo(int vetor[], int esquerda, int direita)
{
  if (esquerda < direita)
  {
    int meio = (esquerda + direita) / 2;
    mergesortrecursivo(vetor, esquerda, meio);
    mergesortrecursivo(vetor, meio + 1, direita);
    merge(vetor, esquerda, meio, direita);
  }
}

void mergesort(int vetor[], int tamanho)
{
  struct timeval inicio, fim;
  gettimeofday(&inicio, NULL);

  mergesortrecursivo(vetor, 0, tamanho); // tamanho - 1

  gettimeofday(&fim, NULL);
  double tempo = (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec) / 1000000.0;
  printf("Tempo de Ordenação do arquivo com %d dados: %.5f\n", tamanho, tempo);
}