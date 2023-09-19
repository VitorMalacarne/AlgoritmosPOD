void radixSort(int vetor[], int tam){
    int base = 10, r;
    int digito = 3;//numero de digitos
    int *B = new int[tam], *C = new int[base];
    for(int m = 0; m < digito; m++){
        for(int i = 0; i < base; ++i) C[i] = 0;
        for(int j = 0; j < tam; ++j){
            r = (vetor[j] / (int)(pow(10.0,m))) % base;
            ++C[r];
        }
        for(int i = 1; i < base; ++i) C[i] += C[i-1];
        for(int j = tam-1; j >= 0; --j){
                r = (vetor[j] / (int)(pow(10.0,m))) % base;
                int i = --C[r];
                B[i] = vetor[j];
        }
        for(int j = 0; j < tam; ++j) vetor[j] = B[j];
    }
}