#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

#include "celula.h"

/*
 * Header com a implementação de uma fila em C
 * Deve ser modificado para cada tipo de dado
 * Buscando maneiras de evitar esse trabalho extra
 */

typedef TIPO int;

typedef struct FILA{
    celula *inicio, *fim;
    int tam;
}fila;

/*
 * Inicializar a fila com o inicio e fim NULL e
 * tamanho da fila como zero
 */
void inicializar_fila(fila *f);

/*
 * Verifica se a fila está vazia
 */
short vazia_fila(fila *f);

/*
 * Retorna o tamanho da fila
 */
int tamanho_fila(fila f);

/*
 * Adiciona um novo elemento ao fim da fila
 */
void inserir_fila(fila *f, dados dado);

/*
 * Remove um elemento do fim da fila
 */
void remover_fila(fila *f);

/*
 * Deleta a fila
 */
void limpar_fila(fila *f);

#endif //FILA_H_INCLUDED
