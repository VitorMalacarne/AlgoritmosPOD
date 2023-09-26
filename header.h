

#ifndef ALGORITMOSPOD_HEADER_H
#define ALGORITMOSPOD_HEADER_H
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <sys/time.h>
    #include <unistd.h>
    #include <math.h>

    #include "Algoritmos/algoritmos.h"

    #include "Funcoes_Arquivos/arquivos.h"

    void espera();
    void imprimevetor(int vetor[], int tam);
    int lerInteiro();;
    void troca(int vetor[], int primeiraPosicao, int segundaPosicao);
    double potencia(double base, double expoente);
#endif //ALGORITMOSPOD_HEADER_H
