
/*Funções auxiliares que permitem melhorar o funcionamento do programa*/

void espera()
{
  // Aguarda o usuário pressionar algum caracter(tecla enter) para prosseguir
  printf("\n\nAperte ENTER para continuar!");
  setbuf(stdin, NULL);
  getchar();
  setbuf(stdin, NULL);
}

void imprimevetor(int vetor[], int tam)
{
  for (int cont = 0; cont < tam; cont++)
  {
    printf("%d\t", vetor[cont]);
  }
}

int lerInteiro()
{
  int numero;
  while (scanf("%d", &numero) == 0)
  {
    printf("\nDigite apenas um número inteiro e positivo:");
    setbuf(stdin, NULL);
  }
  return numero;
}

/*limpa o buffer, caso seja o setbuff não funcionar em algum momento
  while (getchar() != '\n')
    {
    }
      */

void troca(int vetor[], int primeiraPosicao, int segundaPosicao)
{
  int auxiliar = vetor[primeiraPosicao];
  vetor[primeiraPosicao] = vetor[segundaPosicao];
  vetor[segundaPosicao] = auxiliar;
}

//Função para calcular uma potenciação, porque a função pow da biblioteca math.h não estava funcionando por algum motivo desconhecido
double potencia(double base, double expoente){

    double resultado = 1.0;

    if (expoente > 0) {
        for (int i = 0; i < expoente; i++) {
            resultado *= base;
        }
    } else if (expoente < 0) {
        for (int i = 0; i > expoente; i--) {
            resultado /= base;
        }
    }

    return resultado;
}