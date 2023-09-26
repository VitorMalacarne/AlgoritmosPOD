int criaArquivos(int tam) {
    int si = 1;
    char nomes[3][10] = {"Ordenado", "Invertido", "Aleatorio"};
    for (int x = 0; x < 3; x++) {
        char texto[40];
        sprintf(texto, "%s/arquivo-%d", nomes[x], tam);
        FILE *arquivo = fopen(texto, "w");
        if (arquivo == NULL) {
            si = 0;
            break;
        } else {
            // Ordenado
            if (strcmp(nomes[x], "Ordenado") == 0) {
                for (int cont = 0; cont < tam; cont++) {
                    fprintf(arquivo, "%d\n", cont);
                }
            }
            // Invertido
            if (strcmp(nomes[x], "Invertido") == 0) {
                for (int cont = tam; cont > 0; cont--) {
                    fprintf(arquivo, "%d\n", cont - 1);
                }
            }
            // Aleatorio
            srand(time(0));
            if (strcmp(nomes[x], "Aleatorio") == 0) {
                int lista[tam];
                for (int cont = 0; cont < tam; cont++) {
                    lista[cont] = cont;
                }
                for (int cont = tam - 1; cont > 0; cont--) {
                    int j = rand() % (cont + 1);
                    int aux = lista[cont];
                    lista[cont] = lista[j];
                    lista[j] = aux;
                }
                for (int cont = 0; cont < tam; cont++) {
                    fprintf(arquivo, "%d\n", lista[cont]);
                }
            }
            fclose(arquivo);
        }
    }
    return si;
}