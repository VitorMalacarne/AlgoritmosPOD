
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
    printf("\nO arquivo já existe. Não foi criado um novo arquivo.\n");
    fclose(ponteiro); // Fecha o arquivo
    return 0;
  }
  return 1;
}

/*Remove a última linha, em branco, do arquivo para evitar problemas
 */

void removerUltimaLinha(const char *nomeArquivo)
{
  FILE *ponteiro = fopen(nomeArquivo, "r+");
  if (ponteiro == NULL)
  {
    printf("Não foi possível abrir o arquivo para remoção da última linha!\n");
    exit(1);
  }

  fseek(ponteiro, -2, SEEK_END);
  int ch = fgetc(ponteiro);
  while (ch != '\n')
  {
    fseek(ponteiro, -2, SEEK_CUR);
    ch = fgetc(ponteiro);
  }
  ftruncate(fileno(ponteiro), ftell(ponteiro));
  fclose(ponteiro);
}

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
