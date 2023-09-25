#include "funcao.h"

int main(void)
{
  int vetor[500];
    system("clear");
    printf("Quick Sort Lomuto\n");

    printf("\nVetor Aleatório:\n");
    lerArquivo(vetor, "output/Aleatorio500.txt");
    imprimevetor(vetor, 500);
    quicksort(vetor,500);
    imprimevetor(vetor, 500);
    /*
    lerArquivo(vetor, "Aleatorio750.txt");
    quicksortlomuto(vetor, 750);
    lerArquivo(vetor, "Aleatorio1000.txt");
    quicksortlomuto(vetor, 1000);

    printf("\nVetor Decrescente:\n");
    lerArquivo(vetor, "Decrescente500.txt");
    quicksortlomuto(vetor, 500);
    lerArquivo(vetor, "Decrescente750.txt");
    quicksortlomuto(vetor, 750);
    lerArquivo(vetor, "Decrescente1000.txt");
    quicksortlomuto(vetor, 1000);

    printf("\nVetor Ordenado:\n");
    lerArquivo(vetor, "Ordenado500.txt");
    quicksortlomuto(vetor, 500);
    lerArquivo(vetor, "Ordenado750.txt");
    quicksortlomuto(vetor, 750);
    lerArquivo(vetor, "Ordenado1000.txt");
    quicksortlomuto(vetor, 1000);
    espera();*/
  espera();
  return 0;
}