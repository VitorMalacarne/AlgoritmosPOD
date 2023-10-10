
/*Função que verifica se o arquivo gerado já existe, tanto para não gerar desnecessáriamente os arquivos
  em ordem crescente e decrescente, mas, principalmente para evitar que o arquivo aleatório seja sobre escrito
  com valores diferentes
*/
int verificaExistencia(const char *nomeArquivo)
{
    FILE *ponteiro;
    ponteiro = fopen(nomeArquivo, "r"); // Verifica se o arquivo já existe em modo leitura
    if (ponteiro != NULL)
    {
        //Arquivo já existe
        fclose(ponteiro); // Fecha o arquivo
        return 0;
    }
    return 1;
}