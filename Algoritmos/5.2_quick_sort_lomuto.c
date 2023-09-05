int particionelomuto(int vetor[], int esquerda, int direita)
{
  int pivo = vetor[esquerda], i = esquerda, j = esquerda + 1;

  while (j < direita)
  {
    while (vetor[j] > pivo)
    {
      j++;
    }
    i++;
    troca(vetor, i, j);
  }
  troca(vetor, i, pivo);

  return i;
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

void quicksortlomuto(int vetor[], int tamanho)
{
  struct timeval inicio, fim;
  gettimeofday(&inicio, NULL);

  quicksortlomutorecursivo(vetor, 0, tamanho);

  gettimeofday(&fim, NULL);
  double tempo = (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec) / 1000000.0;
  printf("Tempo de Ordenação do arquivo com %d dados: %.5f\n", tamanho, tempo);
}