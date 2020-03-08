#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct celula celula_t;
typedef struct fila fila_t;

/*
 * Celula simples, com ligação apenas para
 * a próxima celula
 */
struct celula{
    int dado;
    celula_t* prox;
};

struct fila{
    celula_t *inicio, *fim;
    int tam;
};

/*
 * Inicializar a Fila com o inicio e fim NULL e
 * tamanho da Fila como zero
 */
void inicializar_fila(fila_t* f);

/*
 * Verifica se a Fila está vazia
 */
bool vazia_fila(fila_t* f);

/*
 * Retorna o tamanho da Fila
 */
int tamanho_fila(fila_t f);

/*
 * Adiciona um novo elemento ao fim da Fila
 */
bool enfileirar(fila_t* f, int dado);

/*
 * Remove um elemento do fim da Fila
 */
int desenfileirar(fila_t* f);

/*
 * Deleta a Fila
 */
void limpar_fila(fila_t* f);

#endif //FILA_H_INCLUDED
