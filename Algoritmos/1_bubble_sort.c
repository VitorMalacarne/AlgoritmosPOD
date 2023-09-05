
void bubblesort(int vetor[], int tam)
{
  struct timeval inicio, fim;
  gettimeofday(&inicio, NULL);
  for (int x = tam; x > 1; x--)
  {
    for (int y = 0; y < x - 1; y++)
    {
      if (vetor[y] > vetor[y + 1])
      {
        int aux = vetor[y];
        vetor[y] = vetor[y + 1];
        vetor[y + 1] = aux;
      }
    }
  }
  gettimeofday(&fim, NULL);
  double tempo = (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec) / 1000000.0;
  printf("Tempo de Ordenação do arquivo com %d dados: %.5f\n", tam, tempo);
}