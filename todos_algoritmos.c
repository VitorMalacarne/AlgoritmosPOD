//
// Created by vitorhwm on 25/10/23.
//
void todosAlgoritmos(int grandeza){
    system("clear");
    Alg algoritmos[9] ={bubbleSort, insertSort, selectSort, shellSort, quickSort, quickSort, mergeSort, radixSort, heapSort};
    Func auxiliares[9]= {NULL, NULL, NULL, NULL, hoare, lomuto, NULL,NULL,NULL,};
    char nomeAlgoritmos[9][20] = {"Bubble Sort", "Insert Sort", "Select Sort", "Shell Sort", "Quick Sort - Hoare", "Quick Sort - Lomuto", "Merge Sort", "Radix Sort", "Heap Sort"};
    char nomeArquivo[40], tipoArquivo[3][10] = {"Ordenado", "Invertido", "Aleatorio"};
    double tempo;
    int *vetor;
    for(int a = 0; a < 9; a++){
        for(int i = 500; i <= 1000; i += 250) {
            vetor = malloc((grandeza * i+1) * sizeof(int));
            for (int j = 0; j < 3; j++) {

                sprintf(nomeArquivo, "Arquivos/%s%d.txt", tipoArquivo[j], grandeza * i);
                lerArquivo(vetor, nomeArquivo);
                tempo = algoritmos[a](vetor, i * grandeza, auxiliares[a]);
                relatorio(grandeza*i, tempo, nomeAlgoritmos[a],tipoArquivo[j]);
                printf(GRN"\nArquivo %s com %d elementos foi ordenado com SUCESSO utilizando o algoritmo %s.", tipoArquivo[j], i*grandeza, nomeAlgoritmos[a]);
            }
            free(vetor);
        }
    }
    espera();

}