#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct c Celula;
typedef struct p Pilha;

/*
 * Celula simples, com ligação apenas para
 * a próxima celula
 */
struct c{
    int dado;
    Celula *prox;
};

struct p{
    Celula *topo;
    unsigned short tam;
};

/*
 * Inicializar a Pilha com o topo NULL e
 * tamanho da Pilha como zero
 */
void inicializar_pilha(Pilha *p);

/*
 * Verifica se a Pilha está vazia
 */
bool vazia_pilha(Pilha *p);

/*
 * Retorna o tamanho da Pilha
 */
int tamanho_pilha(Pilha p);

/*
 * Adiciona um novo elemento ao topo da Pilha
 */
bool empilhar(Pilha *p, int dado);

/*
 * Remove um novo elemento do topo da Pilha
 */
int desempilhar(Pilha *p);

/*
 * Deleta a Pilha
 */
void limpar_pilha(Pilha *p);

#endif // PILHA_H_INCLUDED
