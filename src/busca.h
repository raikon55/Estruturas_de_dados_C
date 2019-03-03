#ifndef SEARCH_H_INCLUDED
#define SEARCH_H_INCLUDED

typedef int TIPO;

/*
 * Pesquisa sequencial realizada em vetor
 * Util para encontrar elementos em vetores pequenos e/ou
 * desordenados
 */
TIPO pesquisa_seq(TIPO dado[], int chave, unsigned int tam);

/*
 * Pesquisa binária realizada em vetor ordenado
 * Mais eficaz que a pesquisa sequencial
 */
TIPO pesquisa_bin(TIPO dado[], int chave, unsigned int inicio, unsigned int fim);

#endif