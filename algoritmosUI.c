void algoritmosUI(int grandeza, const char *nomeAlgoritmo, Alg algoritmo, Func auxiliar){
    int menu, vetor[500000];
    char tipoArquivo[3][10] = {"Ordenado", "Invertido", "Aleatorio"};
    do{
        system("clear");
        printf("\n\t\tAlgoritmo de Ordenação %s\n", nomeAlgoritmo);
        printf("\nTamanho de arquivos disponíveis:\n"
               "\t1-%d números\n"
               "\t2-%d números\n"
               "\t3-%d números\n"
               "\t4-Todos\n"
               "\t0-Voltar ao menu principal!", 500*grandeza, 750*grandeza, 1000*grandeza);
        printf("\nEscolha a opção que desejar:");
        menu = lerInteiro();
        espera();
        switch (menu) {
            case 1:
                 //malloc((500 * grandeza) * sizeof(int));
                /*
                for (int j = 0; j < 3; j++) {
                    char nomeArquivo[40];
                    sprintf(nomeArquivo, "Arquivos/%s%d.txt", tipoArquivo[j], 500 * grandeza);
                    lerArquivo(vetor, nomeArquivo);
                }*/

                lerArquivo(vetor, "Arquivos/aleatorio500000.txt");
                algoritmo(vetor,500*grandeza,auxiliar);

            default:
                printf("Opção Inválida");
                espera();
        }
    }while(menu != 0);
}

