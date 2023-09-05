#include "function.h"
// Opa
int main(void)
{
    int menu1, menu2, vetor[1000];
    do
    {
        system("clear");
        printf("Algoritmos de ordenação de dados!\n1-Utilizar Algoritmos\n2-Gerar Arquivos\n0-Encerrar Programa\nSelecione a opção desejada:");
        menu1 = lerInteiro();
        switch (menu1)
        {
        case 1:
            do
            {
                system("clear");
                printf("ALgoritmos de ordenação disponíveis:\n1-BubbleSort\n2-InsertSort\n0-Voltar ao menu principal!");
                printf("\nEscolha a opção que desejar:");
                menu2 = lerInteiro();
                switch (menu2)
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
                case 5:
                    system("clear");
                    printf("Quick Sort\n");

                    printf("\nVetor Aleatório:\n");
                    lerArquivo(vetor, "Aleatorio500.txt");
                    quicksort(vetor, 0, 500);
                    imprimevetor(vetor, 500);
                    lerArquivo(vetor, "Aleatorio750.txt");
                    quicksort(vetor, 0, 750);
                    lerArquivo(vetor, "Aleatorio1000.txt");
                    quicksort(vetor, 0, 1000);

                    printf("\nVetor Decrescente:\n");
                    lerArquivo(vetor, "Decrescente500.txt");
                    quicksort(vetor, 0, 500);
                    lerArquivo(vetor, "Decrescente750.txt");
                    quicksort(vetor, 0, 750);
                    lerArquivo(vetor, "Decrescente1000.txt");
                    quicksort(vetor, 0, 1000);

                    printf("\nVetor Ordenado:\n");
                    lerArquivo(vetor, "Ordenado500.txt");
                    quicksort(vetor, 0, 500);
                    lerArquivo(vetor, "Ordenado750.txt");
                    quicksort(vetor, 0, 750);
                    lerArquivo(vetor, "Ordenado1000.txt");
                    quicksort(vetor, 0, 1000);
                    espera();

                    break;
                case 0:
                    break;
                default:
                    system("clear");
                    printf("\nOpção inválida. Digite apenas os números 1, 2 ou 0");
                    espera();
                    break;
                }

            } while (menu2 != 0);
            break;
        case 2:
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
            espera();
            break;
        case 0:
            system("clear");
            printf("Programa encerrado!\n");
            exit(0);
        default:
            printf("\nOpção inválida. Digite apenas os números 1, 2 ou 0");
            espera();
            break;
        }
    } while (menu1 != 0);
    return 0;
}