#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct p pilha_t;

/*
 * Celula simples, com ligação apenas para
 * a próxima celula
 */
struct p{
    int dado;
    unsigned short tam;
    pilha_t* prox;
};

/*
 * Inicializar a Pilha com o topo NULL e
 * tamanho da Pilha como zero
 */
void inicializar_pilha(pilha_t *p);

/*
 * Verifica se a Pilha está vazia
 */
bool vazia_pilha(pilha_t *p);

/*
 * Retorna o tamanho da Pilha
 */
int tamanho_pilha(pilha_t p);

/*
 * Adiciona um novo elemento ao topo da Pilha
 */
bool empilhar(pilha_t *p, int dado);

/*
 * Remove um novo elemento do topo da Pilha
 */
int desempilhar(pilha_t *p);

/*
 * Deleta a Pilha
 */
void limpar_pilha(pilha_t *p);

#endif // PILHA_H_INCLUDED
