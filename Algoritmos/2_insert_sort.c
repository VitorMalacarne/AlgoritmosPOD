
double insertSort(int vetor[], int tam, Func funcaoAuxiliar)
{
  struct timeval inicio, fim;
  gettimeofday(&inicio, NULL);
  for (int x = 1; x <= tam - 1; x++)
  {
    int aux = vetor[x];
    int y = x - 1;
    while (y >= 0 && aux < vetor[y])
    {
      vetor[y + 1] = vetor[y];
      y--;
      vetor[y + 1] = aux;
    }
  }
  gettimeofday(&fim, NULL);
  return (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec) / 1000000.0;;
}