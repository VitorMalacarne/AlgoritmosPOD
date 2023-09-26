
#ifndef ALGORITMOSPOD_ALGORITMOS_H
#define ALGORITMOSPOD_ALGORITMOS_H

#include "../header.h"
typedef int (*Func)(int[], int, int);


void bubblesort(int vetor[], int tam);
void insertsort(int vetor[], int tam);
void selectsort(int vetor[], int tam);
void shellsort(int vetor[], int tam);
void quicksort(int vetor[], int tamanho, Func particione);
void quicksortrecursivo(int vetor[], int esquerda, int direita, Func particione);
int hoare(int vetor[], int esquerda, int direita);
int lomuto(int vetor[], int esquerda, int direita);
void mergesort(int vetor[], int tamanho);
void mergesortrecursivo(int vetor[], int esquerda, int direita);
void merge(int vetor[], int esquerda, int meio, int direita);
void radixSort(int vetor[], int tamanho);
void heapify_down(int *array, int i, int tamanho);
void heap_sort(int *array, int tamanho);

#endif //ALGORITMOSPOD_ALGORITMOS_H
