

#ifndef ALGORITMOSPOD_HEADER_H
#define ALGORITMOSPOD_HEADER_H
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <sys/time.h>
    #include <unistd.h>
    #include <math.h>
    #include <string.h>

typedef int (*Func)(int[], int, int);
typedef void (*Alg)(int[], int, Func);

    #include "funcoes_auxiliares.c"

    #include "Algoritmos/1_bubble_sort.c"
    #include "Algoritmos/2_insert_sort.c"
    #include "Algoritmos/3_select_sort.c"
    #include "Algoritmos/4_shell_sort.c"
    #include "Algoritmos/5.0_quick_sort.c"
    #include "Algoritmos/5.1_particione_hoare.c"
    #include "Algoritmos/5.2_particione_lomuto.c"
    #include "Algoritmos/6.1_merge.c"
    #include "Algoritmos/6.0_merge_sort.c"
    #include "Algoritmos/7_radix_sort.c"
    #include "Algoritmos/8_heap_sort.c"

    #include "Funcoes_Arquivos/1_verifica_existencia.c"
    #include "Funcoes_Arquivos/5_remove_ultima_linha.c"
    #include "Funcoes_Arquivos/2_gerar_ordenado.c"
    #include "Funcoes_Arquivos/3_gerar_invertido.c"
    #include "Funcoes_Arquivos/4_gerar_aleatorio.c"
    #include "Funcoes_Arquivos/0_verificarArquivos.c"
    #include "Funcoes_Arquivos/6_ler_arquivo.c"

    #include "algoritmosUI.c"
#endif //ALGORITMOSPOD_HEADER_H
