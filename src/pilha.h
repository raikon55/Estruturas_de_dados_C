#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct pilha pilha_t;
typedef struct celula celula_t;
/*
 * Celula simples, com ligação apenas para
 * a próxima celula
 */
struct celula {
    int dado;
    celula_t* prox;
};

struct pilha {
    unsigned short tam;
    celula_t* topo;
};

/*
 * Inicializar a Pilha com o topo NULL e
 * tamanho da Pilha como zero
 */
void inicializar_pilha(pilha_t* p);

/*
 * Verifica se a Pilha está vazia
 */
bool vazia_pilha(pilha_t* p);

/*
 * Retorna o tamanho da Pilha
 */
int tamanho_pilha(pilha_t p);

/*
 * Adiciona um novo elemento ao topo da Pilha
 */
pilha_t* empilhar(pilha_t* p, int dado);

/*
 * Remove um novo elemento do topo da Pilha
 */
int desempilhar(pilha_t* p);

/*
 * Deleta a Pilha
 */
void limpar_pilha(pilha_t* p);

#endif // PILHA_H_INCLUDED
