#include "algoritmos.h"

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