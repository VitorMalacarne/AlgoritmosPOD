#include "funcao.h"

int main(void)
{
  int vetor[1000];
  system("clear");
  printf("Merge Sort\n");
  printf("\nVetor Aleatório:\n");
  lerArquivo(vetor, "Aleatorio500.txt");
  mergesort(vetor, 500);
  imprimevetor(vetor, 500);
  lerArquivo(vetor, "Aleatorio750.txt");
  mergesort(vetor, 750);
  // imprimevetor(vetor, 750);
  lerArquivo(vetor, "Aleatorio1000.txt");
  mergesort(vetor, 1000);
  // imprimevetor(vetor, 1000);

  printf("\nVetor Decrescente:\n");
  lerArquivo(vetor, "Decrescente500.txt");
  mergesort(vetor, 500);
  // imprimevetor(vetor, 500);
  lerArquivo(vetor, "Decrescente750.txt");
  mergesort(vetor, 750);
  // imprimevetor(vetor, 750);
  lerArquivo(vetor, "Decrescente1000.txt");
  mergesort(vetor, 1000);
  // imprimevetor(vetor, 1000);

  printf("\nVetor Ordenado:\n");
  lerArquivo(vetor, "Ordenado500.txt");
  mergesort(vetor, 500);
  // imprimevetor(vetor, 500);
  lerArquivo(vetor, "Ordenado750.txt");
  mergesort(vetor, 750);
  // imprimevetor(vetor, 750);
  lerArquivo(vetor, "Ordenado1000.txt");
  mergesort(vetor, 1000);
  // imprimevetor(vetor, 1000);
  espera();
  return 0;
}