#include "header.h"
#include "Algoritmos/algoritmos.h"
#include "Funcoes_Arquivos/arquivos.h"

int main(void)
{
    int menu1, vetor[1000];
    /*
    printf("\nGerrando Arquivos");
    gerarArquivoCrescente("Ordenado500000.txt", 500000);
    gerarArquivoCrescente("Ordenado750000.txt", 750000);
    gerarArquivoCrescente("Ordenado1000000.txt", 1000000);
    gerarArquivoDecrescente("Decrescente500000.txt", 500000);
    gerarArquivoDecrescente("Decrescente750000.txt", 750000);
    gerarArquivoDecrescente("Decrescente1000000.txt", 1000000);
    gerarArquivoAleatorio("Aleatorio500000.txt", 500000);
    gerarArquivoAleatorio("Aleatorio750000.txt", 750000);
    gerarArquivoAleatorio("Aleatorio1000000.txt", 1000000);
    */
    do
    {
        system("clear");
        printf("ALgoritmos de ordenação disponíveis:\n"
               "1-Bubble Sort\n"
               "2-Insert Sort\n"
               "3-Select Sort\n"
               "4-Shell Sort\n"
               "5-Quick Sort Hoare\n"
               "6-Quick Sort Lomuto\n"
               "7-Merge Sort\n"
               "8-Radix Sort\n"
               "0-Encerrar Programa!");
        printf("\nEscolha a opção que desejar:");
        menu1 = lerInteiro();
        switch (menu1)
        {
        case 1:
            system("clear");
            printf("BubbleSort\n");
            printf("\nVetor Aleatório:\n");
            lerArquivo(vetor, "Aleatorio500.txt");
            bubblesort(vetor, 500);
            // imprimevetor(vetor, 500);
            lerArquivo(vetor, "Aleatorio750.txt");
            bubblesort(vetor, 750);
            // imprimevetor(vetor, 750);
            lerArquivo(vetor, "Aleatorio1000.txt");
            bubblesort(vetor, 1000);
            // imprimevetor(vetor, 1000);

            printf("\nVetor Decrescente:\n");
            lerArquivo(vetor, "Decrescente500.txt");
            bubblesort(vetor, 500);
            // imprimevetor(vetor, 500);
            lerArquivo(vetor, "Decrescente750.txt");
            bubblesort(vetor, 750);
            // imprimevetor(vetor, 750);
            lerArquivo(vetor, "Decrescente1000.txt");
            bubblesort(vetor, 1000);
            // imprimevetor(vetor, 1000);

            printf("\nVetor Ordenado:\n");
            lerArquivo(vetor, "Ordenado500.txt");
            bubblesort(vetor, 500);
            // imprimevetor(vetor, 500);
            lerArquivo(vetor, "Ordenado750.txt");
            bubblesort(vetor, 750);
            // imprimevetor(vetor, 750);
            lerArquivo(vetor, "Ordenado1000.txt");
            bubblesort(vetor, 1000);
            // imprimevetor(vetor, 1000);
            espera();
            break;
        case 2:
            system("clear");
            printf("InsertSort\n");
            printf("\nVetor Aleatório:\n");
            lerArquivo(vetor, "Aleatorio500.txt");
            insertsort(vetor, 500);
            lerArquivo(vetor, "Aleatorio750.txt");
            insertsort(vetor, 750);
            lerArquivo(vetor, "Aleatorio1000.txt");
            insertsort(vetor, 1000);

            printf("\nVetor Decrescente:\n");
            lerArquivo(vetor, "Decrescente500.txt");
            insertsort(vetor, 500);
            lerArquivo(vetor, "Decrescente750.txt");
            insertsort(vetor, 750);
            lerArquivo(vetor, "Decrescente1000.txt");
            insertsort(vetor, 1000);

            printf("\nVetor Ordenado:\n");
            lerArquivo(vetor, "Ordenado500.txt");
            insertsort(vetor, 500);
            lerArquivo(vetor, "Ordenado750.txt");
            insertsort(vetor, 750);
            lerArquivo(vetor, "Ordenado1000.txt");
            insertsort(vetor, 1000);
            espera();
            break;
        case 3:
            system("clear");
            printf("Select Sort\n");

            printf("\nVetor Aleatório:\n");
            lerArquivo(vetor, "Aleatorio500.txt");
            selectsort(vetor, 500);
            lerArquivo(vetor, "Aleatorio750.txt");
            selectsort(vetor, 750);
            lerArquivo(vetor, "Aleatorio1000.txt");
            selectsort(vetor, 1000);

            printf("\nVetor Decrescente:\n");
            lerArquivo(vetor, "Decrescente500.txt");
            selectsort(vetor, 500);
            lerArquivo(vetor, "Decrescente750.txt");
            selectsort(vetor, 750);
            lerArquivo(vetor, "Decrescente1000.txt");
            selectsort(vetor, 1000);

            printf("\nVetor Ordenado:\n");
            lerArquivo(vetor, "Ordenado500.txt");
            selectsort(vetor, 500);
            lerArquivo(vetor, "Ordenado750.txt");
            selectsort(vetor, 750);
            lerArquivo(vetor, "Ordenado1000.txt");
            selectsort(vetor, 1000);
            espera();

            break;
        case 4:
            system("clear");
            printf("Shell Sort\n");

            printf("\nVetor Aleatório:\n");
            lerArquivo(vetor, "Aleatorio500.txt");
            shellsort(vetor, 500);
            imprimevetor(vetor, 500);
            lerArquivo(vetor, "Aleatorio750.txt");
            shellsort(vetor, 750);
            lerArquivo(vetor, "Aleatorio1000.txt");
            shellsort(vetor, 1000);

            printf("\nVetor Decrescente:\n");
            lerArquivo(vetor, "Decrescente500.txt");
            shellsort(vetor, 500);
            lerArquivo(vetor, "Decrescente750.txt");
            shellsort(vetor, 750);
            lerArquivo(vetor, "Decrescente1000.txt");
            shellsort(vetor, 1000);

            printf("\nVetor Ordenado:\n");
            lerArquivo(vetor, "Ordenado500.txt");
            shellsort(vetor, 500);
            lerArquivo(vetor, "Ordenado750.txt");
            shellsort(vetor, 750);
            lerArquivo(vetor, "Ordenado1000.txt");
            shellsort(vetor, 1000);
            espera();
            break;
        case 5:
            system("clear");
            printf("Quick Sort Hoare\n");

            printf("\nVetor Aleatório:\n");
            lerArquivo(vetor, "Aleatorio500.txt");
            quicksorthoare(vetor, 500);

            lerArquivo(vetor, "Aleatorio750.txt");
            quicksorthoare(vetor, 750);
            lerArquivo(vetor, "Aleatorio1000.txt");
            quicksorthoare(vetor, 1000);

            printf("\nVetor Decrescente:\n");
            lerArquivo(vetor, "Decrescente500.txt");
            quicksorthoare(vetor, 500);
            lerArquivo(vetor, "Decrescente750.txt");
            quicksorthoare(vetor, 750);
            lerArquivo(vetor, "Decrescente1000.txt");
            quicksorthoare(vetor, 1000);

            printf("\nVetor Ordenado:\n");
            lerArquivo(vetor, "Ordenado500.txt");
            quicksorthoare(vetor, 500);
            lerArquivo(vetor, "Ordenado750.txt");
            quicksorthoare(vetor, 750);
            lerArquivo(vetor, "Ordenado1000.txt");
            quicksorthoare(vetor, 1000);
            espera();

            break;
        case 6:
            system("clear");
            printf("Quick Sort Lomuto\n");

            printf("\nVetor Aleatório:\n");
            lerArquivo(vetor, "Aleatorio500.txt");
            quicksortlomuto(vetor, 500);
            // imprimevetor(vetor, 500);
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
            espera();
            break;
        case 7:
            system("clear");
            printf("Merge Sort\n");

            printf("\nVetor Aleatório:\n");
            lerArquivo(vetor, "Aleatorio500.txt");
            mergesort(vetor, 500);
            // imprimevetor(vetor, 500);
            lerArquivo(vetor, "Aleatorio750.txt");
            mergesort(vetor, 750);
            lerArquivo(vetor, "Aleatorio1000.txt");
            mergesort(vetor, 1000);

            printf("\nVetor Decrescente:\n");
            lerArquivo(vetor, "Decrescente500.txt");
            mergesort(vetor, 500);
            lerArquivo(vetor, "Decrescente750.txt");
            mergesort(vetor, 750);
            lerArquivo(vetor, "Decrescente1000.txt");
            mergesort(vetor, 1000);

            printf("\nVetor Ordenado:\n");
            lerArquivo(vetor, "Ordenado500.txt");
            mergesort(vetor, 500);
            lerArquivo(vetor, "Ordenado750.txt");
            mergesort(vetor, 750);
            lerArquivo(vetor, "Ordenado1000.txt");
            mergesort(vetor, 1000);
            espera();
            break;
        case 8:
            system("clear");
            printf("Radix Sort\n");

            printf("\nVetor Aleatório:\n");
            lerArquivo(vetor, "Aleatorio500.txt");
            radixSort(vetor, 500);
            imprimevetor(vetor, 500);
            lerArquivo(vetor, "Aleatorio750.txt");
            radixSort(vetor, 750);
            lerArquivo(vetor, "Aleatorio1000.txt");
            radixSort(vetor, 1000);

            printf("\nVetor Decrescente:\n");
            lerArquivo(vetor, "Decrescente500.txt");
            radixSort(vetor, 500);
            lerArquivo(vetor, "Decrescente750.txt");
            radixSort(vetor, 750);
            lerArquivo(vetor, "Decrescente1000.txt");
            radixSort(vetor, 1000);

            printf("\nVetor Ordenado:\n");
            lerArquivo(vetor, "Ordenado500.txt");
            radixSort(vetor, 500);
            lerArquivo(vetor, "Ordenado750.txt");
            radixSort(vetor, 750);
            lerArquivo(vetor, "Ordenado1000.txt");
            radixSort(vetor, 1000);
            espera();
            break;
        case 0:
            system("clear");
            printf("Programa encerrado!\n");
            exit(0);

        default:
            system("clear");
            printf("\nOpção inválida. Digite apenas os números 1, 2 ou 0");
            espera();
            break;
        }

    } while (menu1 != 0);
    return 0;
}