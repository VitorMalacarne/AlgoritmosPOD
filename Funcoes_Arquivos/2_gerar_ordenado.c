#include "arquivos.h"
void gerarArquivoCrescente(const char *nomeArquivo, int tamanho)
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

    for (int cont = 0; cont <= tamanho; cont++)
    {
        fprintf(ponteiro, "%d\n", cont);
    }

    fclose(ponteiro);
    removerUltimaLinha(nomeArquivo); // Remove a última linha do arquivo
}