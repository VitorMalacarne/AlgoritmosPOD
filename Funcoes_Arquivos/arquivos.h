//
// Created by vitorhwm on 26/09/23.
//

#ifndef ALGORITMOSPOD_ARQUIVOS_H
#define ALGORITMOSPOD_ARQUIVOS_H
#include "../header.h"

int gerarArquivos(int tam);
int verificaExistencia(const char *nomeArquivo);
void gerarArquivoCrescente(const char *nomeArquivo, int tamanho);
void gerarArquivoDecrescente(const char *nomeArquivo, int tamanho);
void gerarArquivoAleatorio(const char *nomeArquivo, int tamanho);
void removerUltimaLinha(const char *nomeArquivo);
void lerArquivo(int vetor[], const char *nomeArquivo);

#endif //ALGORITMOSPOD_ARQUIVOS_H
