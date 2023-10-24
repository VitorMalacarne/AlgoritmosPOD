
double shellSort(int vetor[], int tam, Func funcaoAuxiliar)
{
  struct timeval inicio, fim;
  gettimeofday(&inicio, NULL);

  int h, i, j, auxiliar;

  for (h = 1; h <= tam / 9; h = 3 * h + 1)
    ;

  while (h > 0)
  {
    for (i = h; i < tam; i++)
    {
      auxiliar = vetor[i];
      j = i;

      while (j >= h && vetor[j - h] > auxiliar)
      {
        vetor[j] = vetor[j - h];
        j -= h;
      }

      vetor[j] = auxiliar;
    }

    h /= 3;
  }

  gettimeofday(&fim, NULL);
    return (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec) / 1000000.0;;
}
