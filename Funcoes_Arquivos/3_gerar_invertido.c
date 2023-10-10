
void gerarArquivoInvertido(const char *nomeArquivo, int tamanho)
{
    if (verificaExistencia(nomeArquivo) == 0)
    {
        printf("\nArquivo %s já existe! Não foi criado um novo arquivo", nomeArquivo);
        return;
    }

    FILE *ponteiro;
    ponteiro = fopen(nomeArquivo, "w");
    if (ponteiro == NULL)
    {
        printf("Não foi possível criar o arquivo %s!\n", nomeArquivo);
        exit(1);
    }

    for (int cont = tamanho; cont >= 0; cont--)
    {
        fprintf(ponteiro, "%d\n", cont);
    }

    fclose(ponteiro);
    removerUltimaLinha(nomeArquivo); // Remove a última linha do arquivo
    printf("\nArquivo %s gerado!.", nomeArquivo);
}