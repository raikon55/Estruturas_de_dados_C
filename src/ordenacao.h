#ifndef ORDENACAO_H_INCLUDED
#define ORDENACAO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

void bolha(int* vet, int tamanho);

void insercao(int* vet, int tamanho);

void quick(int* vet, int esquerda, int direita);

void selecao(int* vet, int n);

void merge(int* vet, int inicio, int fim);

void merging(int* vet, int inicio, int meio, int fim);

#endif