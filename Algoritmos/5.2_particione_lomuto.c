
int lomuto(int vetor[], int esquerda, int direita)
{
    int pivo = vetor[direita];
    int i = esquerda - 1;

    for (int j = esquerda; j <= direita - 1; j++)
    {
        if (vetor[j] < pivo)
        {
            i++;
            troca(vetor, i, j);
        }
    }
    troca(vetor, i + 1, direita);
    return (i + 1);
}

