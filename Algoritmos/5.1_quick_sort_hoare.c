int particione(int vetor[], int esquerda, int direita)
{
  int pivo = vetor[esquerda], up = direita, down = esquerda;

  while (down < up)
  {
    while (vetor[down] <= pivo && down < direita)
    {
      down++;
    }
    while (vetor[up] > pivo)
    {
      up--;
    }
    if (down < up)
    {
      troca(vetor, down, up);
    }
  }
  vetor[esquerda] = vetor[up];
  vetor[up] = pivo;
  return up;
}

void quicksorthoarerecursivo(int vetor[], int esquerda, int direita)
{
  int i;
  if (direita > esquerda)
  {
    i = particione(vetor, esquerda, direita);
    quicksorthoarerecursivo(vetor, esquerda, i - 1);
    quicksorthoarerecursivo(vetor, i + 1, direita);
  }
}

void quicksorthoare(int vetor[], int tamanho)
{
  struct timeval inicio, fim;
  gettimeofday(&inicio, NULL);

  quicksorthoarerecursivo(vetor, 0, tamanho); // tamanho - 1

  gettimeofday(&fim, NULL);
  double tempo = (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec) / 1000000.0;
  printf("Tempo de Ordenação do arquivo com %d dados: %.5f\n", tamanho, tempo);
}