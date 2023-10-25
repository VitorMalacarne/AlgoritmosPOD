
void verificarArquivos(int tamanho) {
    char tipoArquivo[3][10] = {"Ordenado", "Invertido", "Aleatorio"};
    for(int i = 500; i <= 1000; i += 250){
        for (int j = 0; j < 3; j++) {
            char nomeArquivo[40];
            sprintf(nomeArquivo, "Arquivos/%s%d.txt", tipoArquivo[j], tamanho * i);
            if(verificaExistencia(nomeArquivo) == 1){
                switch (j) {
                    case 0:
                        gerarArquivoOrdenado(nomeArquivo, tamanho * i);
                        break;
                    case 1:
                        gerarArquivoInvertido(nomeArquivo, tamanho * i);
                        break;
                    case 2:
                        gerarArquivoAleatorio(nomeArquivo, tamanho * i);
                        break;
                }
            }else{
                printf(GRN"\nArquivo %s com %d elementos OK!", tipoArquivo[j], i*tamanho);
            }
        }
    }
}