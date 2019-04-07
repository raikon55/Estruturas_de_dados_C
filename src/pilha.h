#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/*
 * Header com a implementação de uma Pilha em C
 * Deve ser modificado para cada tipo de dado
 * Buscando maneiras de evitar esse trabalho extra
 */

typedef int TIPO;

typedef struct c Celula;
typedef struct p Pilha;

/*
 * Celula simples, com ligação apenas para
 * a próxima celula
 */
struct c{
    TIPO dado;
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
bool empilhar(Pilha *p, TIPO dado);

/*
 * Remove um novo elemento do topo da Pilha
 */
TIPO desempilhar(Pilha *p);

/*
 * Deleta a Pilha
 */
void limpar_pilha(Pilha *p);

#endif // PILHA_H_INCLUDED
