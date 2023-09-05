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
