void merge(int vetor[], int esquerda, int meio, int direita)
{
  int tamanhoauxiliar = direita - esquerda + 1;
  int auxiliar[tamanhoauxiliar];

  // Copia os elementos para o vetor auxiliar
  for (int i = esquerda; i <= direita; i++)
  {
    auxiliar[i - esquerda] = vetor[i];
  }

  int i = esquerda;
  int j = meio + 1;
  int k = esquerda;

  while (i <= meio && j <= direita)
  {
    if (auxiliar[i - esquerda] <= auxiliar[j - esquerda])
    {
      vetor[k] = auxiliar[i - esquerda];
      i++;
    }
    else
    {
      vetor[k] = auxiliar[j - esquerda];
      j++;
    }
    k++;
  }

  // Copia os elementos restantes da primeira metade, se houver
  while (i <= meio)
  {
    vetor[k] = auxiliar[i - esquerda];
    i++;
    k++;
  }
  // Copia os elemensot restantes da segunda metade, se houver
  while (j <= direita)
  {
    vetor[k] = auxiliar[j - esquerda];
    j++;
    k++;
  }
}

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

  mergesortrecursivo(vetor, 0, tamanho);

  gettimeofday(&fim, NULL);
  double tempo = (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec) / 1000000.0;
  printf("Tempo de Ordenação do arquivo com %d dados: %.5f\n", tamanho, tempo);
}