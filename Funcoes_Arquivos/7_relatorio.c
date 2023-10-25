//
// Created by vitorhwm on 24/10/23.
//
void relatorio(int tamanho, double tempo, const char *nomeAlgoritmo, const char *tipoArquivo){
    FILE *arquivo;

    arquivo = fopen("RelatorioOrdenacao.txt", "a+");
    if (arquivo == NULL)
    {
        printf(RED"Não foi possível criar o arquivo %s!\n", "RelatorioOrdenacao.txt");
        exit(1);
    }

    fprintf(arquivo,"\n%s\nArquivo com %d elementos %s \nTempo: %f segundos.\n", nomeAlgoritmo,  tamanho, tipoArquivo,  tempo);
    fclose(arquivo);
}