#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "celula.h"

/*
 * Header com a implementação de uma lista duplamente encadeada em C
 * Deve ser modificado para cada tipo de dado
 * Buscando maneiras de evitar esse trabalho extra
 */

typedef TIPO int;

typedef struct LISTA{
    dupla *inicio, *fim;
    unsigned short tam;
}lista;


/*
 * Inicializa a lista com NULL, faz o inicio e fim apontar
 * para o mesmo lugar e tamanho recebe 0.
 */
void inicializar_lista(lista *l);

/*
 * Confere se a lista está vazia,
 */
short vazia_lista(lista *l);

/*
 * Retorna o tamanho da lista
 */
unsigned int tamanho_lista(lista l);

/*
 * Insere um novo elemento ao FINAL da lista
 */
short inserir_lista(lista *l, key registro);

/*
 * Remove um elemento na POS-ésima posição
 */
short remover_lista(lista *l, int pos);

/*
 * Pesquisa um elemento na lista, a partir da chave
 */
key pesquisar_lista(lista l, char *chave);

/*
 * Limpa a lista e zera o tamanho
 */
void limpar_lista(lista *l);

/*
 * Exclui a lista
 */
void deletar_lista(lista *l);

#endif
