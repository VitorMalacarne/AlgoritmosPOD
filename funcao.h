#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>
#include <math.h>

typedef int (*Func)(int[], int, int);

#include "Funcoes/0_funcoes.c"
#include "Funcoes/1_arquivo.c"
#include "Arquivos/0_gerar.c"
#include "Funcoes/3_tamanhoUI.c"

#include "Algoritmos/1_bubble_sort.c"
#include "Algoritmos/2_insert_sort.c"
#include "Algoritmos/3_select_sort.c"
#include "Algoritmos/4_shell_sort.c"
#include "Algoritmos/5.1_quick_sort_hoare.c"
#include "Algoritmos/5.2_quick_sort_lomuto.c"
#include "Algoritmos/6_merge_sort.c"
#include "Algoritmos/7_radix_sort.c"
#include "Algoritmos/8_heap_sort.c"