
void mergesortRecursivo(int vetor[], int esquerda, int direita)
{
  if (esquerda < direita)
  {
    int meio = (esquerda + direita) / 2;
      mergesortRecursivo(vetor, esquerda, meio);
      mergesortRecursivo(vetor, meio + 1, direita);
    merge(vetor, esquerda, meio, direita);
  }
}

double mergeSort(int vetor[], int tamanho, Func funcaoAuxiliar)
{
  struct timeval inicio, fim;
  gettimeofday(&inicio, NULL);

    mergesortRecursivo(vetor, 0, tamanho); // tamanho - 1

  gettimeofday(&fim, NULL);
    return (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec) / 1000000.0;;
}