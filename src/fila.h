#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * Header com a implementação de uma Fila em C
 * Deve ser modificado para cada int de dado
 * Buscando maneiras de evitar esse trabalho extra
 */

typedef struct c Celula;
typedef struct f Fila;

/*
 * Celula simples, com ligação apenas para
 * a próxima celula
 */
struct c{
    int dado;
    Celula *prox;
};

struct f{
    Celula *inicio, *fim;
    int tam;
};

/*
 * Inicializar a Fila com o inicio e fim NULL e
 * tamanho da Fila como zero
 */
void inicializar_fila(Fila *f);

/*
 * Verifica se a Fila está vazia
 */
bool vazia_fila(Fila *f);

/*
 * Retorna o tamanho da Fila
 */
int tamanho_fila(Fila f);

/*
 * Adiciona um novo elemento ao fim da Fila
 */
bool enfileirar(Fila *f, int dado);

/*
 * Remove um elemento do fim da Fila
 */
int desenfileirar(Fila *f);

/*
 * Deleta a Fila
 */
void limpar_fila(Fila *f);

#endif //FILA_H_INCLUDED
