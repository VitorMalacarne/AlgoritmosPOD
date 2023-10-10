
void radixSort(int vetor[], int tamanho, Func funcaoAuxiliar)
{
    struct timeval inicio, fim;
    gettimeofday(&inicio, NULL);
    int base = 10, r, m, i, j;
    int digito = 3;
    int *vetorAuxiliar1 = (int *)malloc(tamanho * sizeof(int));
    int *vetorAuxiliar2 = (int *)malloc(base * sizeof(int));

    for(m = 0; m < digito; m++ ){
        for(i = 0; i < base; i++){
            vetorAuxiliar2[i] = 0;
        }
        for(j = 0; j < tamanho; j++){
            r = (vetor[j] / (int)(potencia(10, m))) % base;
            ++vetorAuxiliar2[r];
        }
        for(i = 1; i < base; i++){
            vetorAuxiliar2[i] += vetorAuxiliar2[i - 1];
        }
        for(j = tamanho - 1; j >= 0; j--){
            r=(vetor[j] / (int)(potencia(10, m))) % base;
            i = --vetorAuxiliar2[r];
            vetorAuxiliar1[i] = vetor[j];
        }
        for(j = 0; j < tamanho; ++j){
            vetor[j] = vetorAuxiliar1[j];
        }
    }
    free(vetorAuxiliar1);
    free(vetorAuxiliar2);
    gettimeofday(&fim, NULL);
    double tempo = (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec) / 1000000.0;
    printf("Tempo de Ordenação do arquivo com %d dados: %.5f\n", tamanho, tempo);
}