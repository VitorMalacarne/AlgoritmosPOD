
void lerArquivo(int vetor[], const char *nomeArquivo)
{
    FILE *ponteiro;
    int numero, cont = 0;

    ponteiro = fopen(nomeArquivo, "r");
    if (ponteiro == NULL)
    {
        printf(RED"Não foi possível abrir o arquivo %s.", nomeArquivo);
        return;
    }

    while (!feof(ponteiro))
    {
        fscanf(ponteiro, "%d", &numero);
        vetor[cont++] = numero;
    }

    fclose(ponteiro);
}
