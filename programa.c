#include "funcao.h"

int main(void)
{
  int vetor[1000];
  system("clear");
  printf("Merge Sort\n");
  printf("\nVetor Aleatório:\n");
  lerArquivo(vetor, "output/Aleatorio500.txt");
  radixSort(vetor, 500);
  imprimevetor(vetor, 500);
  lerArquivo(vetor, "output/Aleatorio750.txt");
  radixSort(vetor, 750);
  // imprimevetor(vetor, 750);
  lerArquivo(vetor, "output/Aleatorio1000.txt");
  radixSort(vetor, 1000);
  // imprimevetor(vetor, 1000);

  printf("\nVetor Decrescente:\n");
  lerArquivo(vetor, "output/Decrescente500.txt");
  radixSort(vetor, 500);
  // imprimevetor(vetor, 500);
  lerArquivo(vetor, "output/Decrescente750.txt");
  radixSort(vetor, 750);
  // imprimevetor(vetor, 750);
  lerArquivo(vetor, "output/Decrescente1000.txt");
  radixSort(vetor, 1000);
  // imprimevetor(vetor, 1000);

  printf("\nVetor Ordenado:\n");
  lerArquivo(vetor, "output/Ordenado500.txt");
  radixSort(vetor, 500);
  // imprimevetor(vetor, 500);
  lerArquivo(vetor, "output/Ordenado750.txt");
  radixSort(vetor, 750);
  // imprimevetor(vetor, 750);
  lerArquivo(vetor, "output/Ordenado1000.txt");
  radixSort(vetor, 1000);
  // imprimevetor(vetor, 1000);
  espera();
  return 0;
}