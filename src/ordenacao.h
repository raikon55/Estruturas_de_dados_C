#ifndef ORDENACAO_H_INCLUDED
#define ORDENACAO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bolha(int* a, int tamanho);

void insercao(int* a, int tamanho);

void quick(int* a, int esquerda, int direita);

void selecao(int n, int* a);

void  merge(int* a, int inicio, int fim);

void merging(int* a, int inicio, int meio, int fim);

#endif