int particione(int vetor[], int esquerda, int direita)
{
  int x = vetor[esquerda], up = direita, down = esquerda;

  while (down < up)
  {
    while (vetor[down] <= x && down < direita)
    {
      down++;
    }
    while (vetor[up] > x)
    {
      up--;
    }
    if (down < up)
    {
      int auxiliar = vetor[down];
      vetor[down] = vetor[up];
      vetor[up] = auxiliar;
    }
  }
  vetor[esquerda] = vetor[up];
  vetor[up] = x;
  return up;
}

void quicksortrecursivo(int vetor[], int esquerda, int direita)
{
  int i;
  if (direita > esquerda)
  {
    i = particione(vetor, esquerda, direita);
    quicksortrecursivo(vetor, esquerda, i - 1);
    quicksortrecursivo(vetor, i + 1, direita);
  }
}

void quicksort(int vetor[], int esquerda, int direita)
{
  struct timeval inicio, fim;
  gettimeofday(&inicio, NULL);

  quicksortrecursivo(vetor, esquerda, direita);

  gettimeofday(&fim, NULL);
  double tempo = (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec) / 1000000.0;
  printf("Tempo de Ordenação do arquivo com  dados: %.5f\n", tempo);
}