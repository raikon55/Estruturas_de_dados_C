#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct celula_dupla dupla_t;
typedef struct lista lista_t;

/*
 * Celula dupla, ligação para a próxima e
 * para a anterior
 */
struct celula_dupla {
    int dado;
    dupla_t *ant, *prox;
};

struct lista {
    dupla_t *inicio, *fim;
    short tam;
};


/*
 * Inicializa a Lista com NULL, faz o inicio e fim apontar
 * para o mesmo lugar e tamanho recebe 0.
 */
void inicializar_lista(lista_t* l);

/*
 * Confere se a Lista está vazia,
 */
bool vazia_lista(lista_t* l);

/*
 * Retorna o tamanho da Lista
 */
int tamanho_lista(lista_t l);

/*
 * Insere um novo elemento ao FINAL da Lista
 */
bool inserir_lista(lista_t* l, int dado);

/*
 * Remove um elemento na POS-ésima posição
 */
bool remover_lista(lista_t* l, int pos);

/*
 * Pesquisa um elemento na Lista, a partir da chave
 */
int pesquisar_lista(lista_t* l, int chave);

/*
 * Limpa a Lista e zera o tamanho
 */
void limpar_lista(lista_t* l);

#endif
