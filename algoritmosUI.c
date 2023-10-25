void algoritmosUI(int grandeza, const char *nomeAlgoritmo, Alg algoritmo, Func auxiliar){
    int menu, *vetor;
    double tempo;
    char nomeArquivo[40], tipoArquivo[3][10] = {"Ordenado", "Invertido", "Aleatorio"};

    do{
        system("clear");
        printf(BLU"\n\t\tAlgoritmo de Ordenação %s\n", nomeAlgoritmo);
        printf("\nTamanho de arquivos disponíveis:\n"
               "\t1-%d números\n"
               "\t2-%d números\n"
               "\t3-%d números\n"
               "\t4-Todos\n"
               "\t0-Voltar ao menu principal!", 500 * grandeza, 750 * grandeza, 1000 * grandeza);
        printf("\nEscolha a opção que desejar:");
        menu = lerInteiro();

        switch (menu) {
            case 1:{
                vetor = malloc((grandeza * 500) * sizeof(int));
                for (int j = 0; j < 3; j++) {

                    sprintf(nomeArquivo, "Arquivos/%s%d.txt", tipoArquivo[j], 500 * grandeza);
                    lerArquivo(vetor, nomeArquivo);
                    tempo = algoritmo(vetor, 500 * grandeza, auxiliar);
                    relatorio(grandeza*500, tempo, nomeAlgoritmo,tipoArquivo[j]);
                    printf(GRN"\nArquivo %s com %d elementos foi ordenado com SUCESSO utilizando o algoritmo %s.", tipoArquivo[j], 500*grandeza, nomeAlgoritmo);
                }
                free(vetor);
                espera();
                break;}
            case 2: {
                vetor = malloc((grandeza * 751) * sizeof(int));
                for (int j = 0; j < 3; j++) {

                    sprintf(nomeArquivo, "Arquivos/%s%d.txt", tipoArquivo[j], 750 * grandeza);
                    lerArquivo(vetor, nomeArquivo);
                    tempo = algoritmo(vetor, 750 * grandeza, auxiliar);
                    relatorio(grandeza*750, tempo, nomeAlgoritmo,tipoArquivo[j]);
                    printf(GRN"\nArquivo %s com %d elementos foi ordenado com SUCESSO utilizando o algoritmo %s.", tipoArquivo[j], 750*grandeza, nomeAlgoritmo);
                }
                free(vetor);
                espera();
                break;}
            case 3:{
                vetor = malloc((grandeza * 1000) * sizeof(int));

                for (int j = 0; j < 3; j++) {

                    sprintf(nomeArquivo, "Arquivos/%s%d.txt", tipoArquivo[j], 1000 * grandeza);
                    lerArquivo(vetor, nomeArquivo);
                    tempo = algoritmo(vetor, 1000 * grandeza, auxiliar);
                    relatorio(grandeza*1000, tempo, nomeAlgoritmo,tipoArquivo[j]);
                    printf(GRN"\nArquivo %s com %d elementos foi ordenado com SUCESSO utilizando o algoritmo %s.", tipoArquivo[j], 1000*grandeza, nomeAlgoritmo);
                }

                free(vetor);
                espera();
                break;}
            case 4:{
                for(int i = 500; i <= 1000; i += 250) {
                    vetor = malloc((grandeza * i+1) * sizeof(int));
                    for (int j = 0; j < 3; j++) {

                        sprintf(nomeArquivo, "Arquivos/%s%d.txt", tipoArquivo[j], grandeza * i);
                        lerArquivo(vetor, nomeArquivo);
                        tempo = algoritmo(vetor, i * grandeza, auxiliar);
                        relatorio(grandeza*i, tempo, nomeAlgoritmo,tipoArquivo[j]);
                        printf(GRN"\nArquivo %s com %d elementos foi ordenado com SUCESSO utilizando o algoritmo %s.", tipoArquivo[j], i*grandeza, nomeAlgoritmo);
                    }
                    free(vetor);
                }
                espera();
                break;}
            case 0:
                break;
            default:
                printf(YEL"Opção Inválida");
                espera();
        }
    }while(menu != 0);
}

