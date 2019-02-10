#ifndef SEARCH_H_INCLUDED
#define SEARCH_H_INCLUDED

typedef int TIPO;

/*
 * Pesquisa sequencial realizada em vetor
 * Util para encontrar elementos em vetores pequenos
 */
TIPO pesquisa_seq(TIPO dado[], int chave, unsigned int tam);

/*
 * Pesquisa binária realizada em vetor
 * Mais eficaz que a pesquisa sequencial
 */
TIPO pesquisa_bin(TIPO dado[], int chave, unsigned int tam);

#endif
