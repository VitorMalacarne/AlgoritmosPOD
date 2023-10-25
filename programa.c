#include "header.h"


int main(void){
    /*Bem vindo ao código do prgrama para testes de algoritmos de ordenação de dados!
     * Antes de iniciar, configure a variável ordemDeGrandeza, essa varíavel é utilizada como multiplicador dentro do programa
     * para determinar qual o tamanho dos arquivos que serão gerados, e consequentemente, dos vetores que serão ordenados.
     * Por exemplo, se a  ordem de grandeza estiver definida como 1, o programa será executado em modo de teste,
     * utilizando na sua execução arquivos menores para a rápida ordenação, sendo 500, 750 e 1000.
     * Caso a variável esteja definida como 1000, o programa executará
     * com os arquivos de tamanho solicitado pelo professor, sendo 500.000, 750.000 e 1.000.000
     * */
    int ordemDeGrandeza = 10;
    system("clear");
    printf(BLU"\t\tBem Vindo ao progama para testes de algoritmos de ordenação de dados!\n");

    //Verificar a existência de arquivos, se estes não existem, então cria-los
    printf(YEL"\nVerificando a existêcia de arquivos...\n");
    verificarArquivos(ordemDeGrandeza);
    printf(GRN"\n\nArquivos verificados com êxito!");
    espera();

    //Menu para selecionar qual algoritmo deseja utilizar
    int menu = 0;
    do{
        system("clear");
        printf(BLU"\n\t\tTestar algoritmos de ordenação de dados");
        printf("\nAgoritmos de ordenação disponíveis:\n"
               "\t1-Bubble Sort\n"
               "\t2-Insert Sort\n"
               "\t3-Select Sort\n"
               "\t4-Shell Sort\n"
               "\t5-Quick Sort Hoare\n"
               "\t6-Quick Sort Lomuto\n"
               "\t7-Merge Sort\n"
               "\t8-Radix Sort\n"
               "\t9-Heap Sort\n"
               "\t10-Todos os algoritmos\n"
               "\t0-Encerrar Programa!");
        printf("\nEscolha a opção que desejar:");
        menu = lerInteiro();
        switch (menu) {
            case 1:
                algoritmosUI(ordemDeGrandeza, "Bubble Sort", bubbleSort, NULL);
                break;
            case 2:
                algoritmosUI(ordemDeGrandeza, "Insert Sort", insertSort, NULL);
                break;
            case 3:
                algoritmosUI(ordemDeGrandeza, "Select Sort", selectSort, NULL);
                break;
            case 4:
                algoritmosUI(ordemDeGrandeza, "Shell Sort", shellSort, NULL);
                break;
            case 5:
                algoritmosUI(ordemDeGrandeza, "Quick Sort - Hoare", quickSort, hoare);
                break;
            case 6:
                algoritmosUI(ordemDeGrandeza, "Quick Sort - Lomuto", quickSort, lomuto);
                break;
            case 7:
                algoritmosUI(ordemDeGrandeza, "Merge Sort", mergeSort, NULL);
                break;
            case 8:
                algoritmosUI(ordemDeGrandeza, "Radix Sort", radixSort, NULL);
                break;
            case 9:
                algoritmosUI(ordemDeGrandeza, "Heap Sort", heapSort, NULL);
                break;
            case 10:{
                todosAlgoritmos(ordemDeGrandeza);
                break;}
            case 0:
                system("clear");
                printf(YEL"Programa encerrado!\n");
                exit(0);
            default:
                system("clear");
                printf(YEL"\nOpção inválida. Digite apenas os números 0 até 8");
                espera();
                break;
        }
    }while(menu != 0);
    return 0;
}
