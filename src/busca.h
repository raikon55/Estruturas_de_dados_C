#ifndef SEARCH_H_INCLUDED
#define SEARCH_H_INCLUDED

/*
 * Pesquisa sequencial realizada em vetor
 * Util para encontrar elementos em vetores pequenos e/ou
 * desordenados
 */
int pesquisa_seq(int dado[], int chave, unsigned int tam);

/*
 * Pesquisa binária realizada em vetor ordenado
 * Mais eficaz que a pesquisa sequencial
 */
int pesquisa_bin(int dado[], int chave, unsigned int inicio, unsigned int fim);

#endif
