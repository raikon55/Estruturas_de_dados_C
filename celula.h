#ifndef CELULA_H_
#define CELULA_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct c celula;
typedef struct cd dupla;
typedef struct k key;
typedef struct d dados;


/*
 * Os dados para serem armazenados na celula
 */
struct d{
    char arquivo[128];
    char frase[64];
    unsigned short pos;
};

/*
 * Chave de pesquisa
 */
struct k{
    unsigned int chave;
    dados dado;
};

/*
 * Celula simples, com ligação apenas para
 * a próxima celula
 */
struct c{
    char word[32];
    celula *prox;
};

/*
 * Celula dupla, ligação para a próxima e
 * para a anterior
 */
struct cd{
    key registro;
    dupla *ant, *prox;
};

#endif
