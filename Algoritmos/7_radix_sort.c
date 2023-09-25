#include <math.h>
void radixSort(int vetor[], int tamanho)
{
    struct timeval inicio, fim;
    gettimeofday(&inicio, NULL);

    int base = 10, r;
    int digito = 3; // numero de digitos
    int vetorauxiliar1[tamanho], vetorauxiliar2[base];
    for (int m = 0; m < digito; m++)
    {
        for (int i = 0; i < base; ++i)
            vetorauxiliar2[i] = 0;
        for (int j = 0; j < tamanho; ++j)
        {
            r = (vetor[j] / (int)(pow(10.0, m))) % base;
            ++vetorauxiliar2[r];
        }
        for (int i = 1; i < base; ++i)
            vetorauxiliar2[i] += vetorauxiliar2[i - 1];
        for (int j = tamanho - 1; j >= 0; --j)
        {
            r = (vetor[j] / (int)(pow(10.0, m))) % base;
            int i = --vetorauxiliar2[r];
            vetorauxiliar1[i] = vetor[j];
        }
        for (int j = 0; j < tamanho; ++j)
            vetor[j] = vetorauxiliar1[j];
    }
    gettimeofday(&fim, NULL);
    double tempo = (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec) / 1000000.0;
    printf("Tempo de Ordenação do arquivo com %d dados: %.5f\n", tamanho, tempo);
}