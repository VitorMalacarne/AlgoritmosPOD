void shellsort(int vetor[], int tam)
{
  struct timeval inicio, fim;
  gettimeofday(&inicio, NULL);
  int h, i, j, auxiliar;
  for (h = 1; h < tam; h = 3 * h + 1)
  {
    while (h > 0)
      h = (h - 1) / 3;
    for (i = h; i < tam; i++)
    {
      auxiliar = vetor[i];
      j = 1;
      while (vetor[j - h] > auxiliar)
      {
        vetor[j] = vetor[j - h];
        j -= h;
        if (j < h)
        {
          return;
        }
      }
      vetor[j] = auxiliar;
    }
  }
  gettimeofday(&fim, NULL);
  double tempo = (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec) / 1000000.0;
  printf("Tempo de Ordenação do arquivo com %d dados: %.5f\n", tam, tempo);
}