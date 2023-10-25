
void gerarArquivoOrdenado(const char *nomeArquivo, int tamanho)
{
    if (verificaExistencia(nomeArquivo) == 0)
    {
        printf(YEL"\nArquivo %s já existe! Não foi criado um novo arquivo", nomeArquivo);
        return;
    }

    FILE *ponteiro;
    ponteiro = fopen(nomeArquivo, "w");
    if (ponteiro == NULL)
    {
        printf(RED"Não foi possível criar o arquivo %s!\n", nomeArquivo);
        exit(1);
    }

    for (int cont = 0; cont <= tamanho; cont++)
    {
        fprintf(ponteiro, "%d\n", cont);
    }

    fclose(ponteiro);
    removerUltimaLinha(nomeArquivo); // Remove a última linha do arquivo
    printf(GRN"\nArquivo %s gerado!.", nomeArquivo);
}