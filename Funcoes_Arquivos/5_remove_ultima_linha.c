#include "arquivos.h"
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