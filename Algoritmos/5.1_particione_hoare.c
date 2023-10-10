
int hoare(int vetor[], int esquerda, int direita)
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

