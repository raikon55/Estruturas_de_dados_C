#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * Header com a implementação de uma fila em C
 * Deve ser modificado para cada tipo de dado
 * Buscando maneiras de evitar esse trabalho extra
 */

typedef struct c celula;
typedef struct f fila;

typedef int TIPO;

/*
 * Celula simples, com ligação apenas para
 * a próxima celula
 */
struct c{
    TIPO dado;
    celula *prox;
};

struct f{
    celula *inicio, *fim;
    int tam;
};

/*
 * Inicializar a fila com o inicio e fim NULL e
 * tamanho da fila como zero
 */
void inicializar_fila(fila *f);

/*
 * Verifica se a fila está vazia
 */
bool vazia_fila(fila *f);

/*
 * Retorna o tamanho da fila
 */
int tamanho_fila(fila f);

/*
 * Adiciona um novo elemento ao fim da fila
 */
bool inserir_fila(fila *f, TIPO dado);

/*
 * Remove um elemento do fim da fila
 */
TIPO remover_fila(fila *f);

/*
 * Deleta a fila
 */
void limpar_fila(fila *f);

#endif //FILA_H_INCLUDED
