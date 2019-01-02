#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/*
 * Header com a implementação de uma pilha em C
 * Deve ser modificado para cada tipo de dado
 * Buscando maneiras de evitar esse trabalho extra
 */

typedef int TIPO;

typedef struct c celula;
typedef struct p pilha;

/*
 * Celula simples, com ligação apenas para
 * a próxima celula
 */
struct c{
    TIPO dado;
    celula *prox;
};

struct p{
    celula *topo;
    unsigned short tam;
};

/*
 * Inicializar a pilha com o topo NULL e
 * tamanho da pilha como zero
 */
void inicializar_pilha(pilha *p);

/*
 * Verifica se a pilha está vazia
 */
bool vazia_pilha(pilha *p);

/*
 * Retorna o tamanho da fila
 */
int tamanho_pilha(pilha p);

/*
 * Adiciona um novo elemento ao topo da pilha
 */
bool empilhar(pilha *p, TIPO dado);

/*
 * Remove um novo elemento do topo da pilha
 */
TIPO desempilhar(pilha *p);

/*
 * Deleta a pilha
 */
void limpar_pilha(pilha *p);

#endif // PILHA_H_INCLUDED
