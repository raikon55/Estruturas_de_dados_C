#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * Header com a implementação de uma lista duplamente encadeada em C
 * Deve ser modificado para cada tipo de dado
 * Buscando maneiras de evitar esse trabalho extra
 */

typedef struct cd dupla;
typedef struct l lista;

typedef int TIPO;

/*
 * Celula dupla, ligação para a próxima e
 * para a anterior
 */
struct cd{
    TIPO dado;
    dupla *ant, *prox;
};

struct l{
    dupla *inicio, *fim;
    short tam;
};


/*
 * Inicializa a lista com NULL, faz o inicio e fim apontar
 * para o mesmo lugar e tamanho recebe 0.
 */
void inicializar_lista(lista *l);

/*
 * Confere se a lista está vazia,
 */
bool vazia_lista(lista *l);

/*
 * Retorna o tamanho da lista
 */
int tamanho_lista(lista l);

/*
 * Insere um novo elemento ao FINAL da lista
 */
bool inserir_lista(lista *l, TIPO dado);

/*
 * Remove um elemento na POS-ésima posição
 */
bool remover_lista(lista *l, int pos);

/*
 * Pesquisa um elemento na lista, a partir da chave
 */
TIPO pesquisar_lista(lista *l, TIPO chave);

/*
 * Limpa a lista e zera o tamanho
 */
void limpar_lista(lista *l);

#endif
