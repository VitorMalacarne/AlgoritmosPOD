
void selectSort(int vetor[], int tam, Func funcaoAuxiliar)
{

  struct timeval inicio, fim;
  gettimeofday(&inicio, NULL);
  for (int i = 0; i < tam; i++)
  {
    int menor = i;
    for (int j = i; j < tam; j++)
    {
      if (vetor[j] < vetor[menor])
      {
        menor = j;
      }
    }
    int auxiliar = vetor[i];
    vetor[i] = vetor[menor];
    vetor[menor] = auxiliar;
  }
  gettimeofday(&fim, NULL);
  double tempo = (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec) / 1000000.0;
  printf("Tempo de Ordenação do arquivo com %d dados: %.5f\n", tam, tempo);
}