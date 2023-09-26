#include "arquivos.h"
void lerArquivo(int vetor[], const char *nomeArquivo)
{
    FILE *ponteiro;
    int numero, cont = 0;

    ponteiro = fopen(nomeArquivo, "r");
    if (ponteiro == NULL)
    {
        printf("Não foi possível abrir o arquivo selecionado.");
        return;
    }

    while (!feof(ponteiro))
    {
        fscanf(ponteiro, "%d", &numero);
        vetor[cont++] = numero;
    }

    fclose(ponteiro);
}
