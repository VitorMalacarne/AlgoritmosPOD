//
// Created by vitorhwm on 24/10/23.
//
void relatorio(int tamanho, double tempo, const char *nomeAlgoritmo, const char *tipoArquivo){
    FILE *arquivo;
    if(verificaExistencia("RelatorioOrdenacao.txt") == 1){
        arquivo = fopen("RelatorioOrdenacao.txt", "w");
        if (arquivo == NULL)
        {
            printf("Não foi possível criar o arquivo %s!\n", "RelatorioOrdenacao.txt");
            exit(1);
        }
    }else{
        arquivo = fopen("RelatorioOrdenacao.txt", "a");
        if (arquivo == NULL)
        {
            printf("Não foi possível criar o arquivo %s!\n", "RelatorioOrdenacao.txt");
            exit(1);
        }
    }

    fprintf(arquivo,"\nArquivo %s com %d elementos, ordenado utilizando o algoritmo %s levou %f segundos para ser concluido.\n", tipoArquivo, tamanho, nomeAlgoritmo, tempo);
    fclose(arquivo);
}