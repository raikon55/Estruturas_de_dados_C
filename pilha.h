#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include "celula.h"

/*
 * Header com a implementação de uma pilha em C
 * Deve ser modificado para cada tipo de dado
 * Buscando maneiras de evitar esse trabalho extra
 */

#define TIPO int

typedef struct PILHA{
    celula *topo;
    unsigned short tam;
}pilha;

/*
 * Inicializar a pilha com o topo NULL e
 * tamanho da pilha como zero
 */
void inicializar_pilha(pilha *p);

/*
 * Verifica se a pilha está vazia
 */
short vazia_pilha(pilha *p);

/*
 * Adiciona um novo elemento ao topo da pilha
 */
void empilhar(pilha *p, char *dado);

/*
 * Remove um novo elemento do topo da pilha
 */
TIPO desempilhar(pilha *p);

/*
 * Imprimir os dados da pilha
 */
short pesquisar_pilha(pilha *p, TIPO dado);

/*
 * Deleta a pilha
 */
void limpar_pilha(pilha *p);

#endif // PILHA_H_INCLUDED
