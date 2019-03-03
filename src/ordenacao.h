#ifndef ORDENACAO_H_INCLUDED
#define ORDENACAO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/*
 * Um dos mais simples algoritmos de ordenação.
 * Percorre o vetor fazendo comparações 2 a 2
 * até todos estarem nos respectivos lugares
 */
void bolha(int* vet, int tamanho);

/*
 * Insere o elemento na devida posição.
 * Ótimo para inserir novos elementos em vetores já ordenados
 */
void insercao(int* vet, int tamanho);

/*
 * Algortimo mais eficiente de ordenação, e
 * provavelmente, o mais utilizado.
 */
void quick(int* vet, int esquerda, int direita);

/*
 * Seleciona o menor elemento e coloca-o no inicio.
 * Útil para buscar elementos, em vetores não ordenados,
 * sem percorre-lo todo.
 */
void selecao(int* vet, int tamanho);

/*
 * Utiliza a estrategia "dividir e conquitar" para ordenar.
 * Ótimo para organizar listas encadeadas.
 */
void merge(int* vet, int inicio, int fim);

void merging(int* vet, int inicio, int meio, int fim);

#endif