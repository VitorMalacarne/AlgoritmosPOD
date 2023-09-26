#include "arquivos.h"

void gerarArquivoAleatorio(const char *nomeArquivo, int tamanho)
{
    if (verificaExistencia(nomeArquivo) == 0)
    {
        return;
    }

    FILE *ponteiro;
    ponteiro = fopen(nomeArquivo, "w");
    if (ponteiro == NULL)
    {
        printf("Não foi possível criar o arquivo!\n");
        exit(1);
    }

    if (tamanho <= 0)
    {
        fclose(ponteiro);
        return;
    }

    srand(time(NULL));

    int *numeros = malloc((tamanho + 1) * sizeof(int)); // Tamanho aumentado em uma linha
    if (numeros == NULL)
    {
        printf("Erro de alocação de memória.\n");
        fclose(ponteiro);
        exit(1);
    }

    for (int i = 0; i <= tamanho; i++)
    {
        numeros[i] = i;
    }

    for (int i = tamanho; i > 0; i--)
    {
        int j = rand() % (i + 1);
        int temp = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = temp;
    }

    for (int i = 0; i <= tamanho; i++)
    {
        fprintf(ponteiro, "%d\n", numeros[i]);
    }

    free(numeros);
    fclose(ponteiro);
    removerUltimaLinha(nomeArquivo); // Remove a última linha do arquivo
}
