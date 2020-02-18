#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * Header com a implementação de uma Lista duplamente encadeada em C
 * Deve ser modificado para cada tipo de dado
 * Buscando maneiras de evitar esse trabalho extra
 */

typedef struct cd Dupla;
typedef struct l Lista;

/*
 * Celula dupla, ligação para a próxima e
 * para a anterior
 */
struct cd{
    int dado;
    Dupla *ant, *prox;
};

struct l{
    Dupla *inicio, *fim;
    short tam;
};


/*
 * Inicializa a Lista com NULL, faz o inicio e fim apontar
 * para o mesmo lugar e tamanho recebe 0.
 */
void inicializar_lista(Lista *l);

/*
 * Confere se a Lista está vazia,
 */
bool vazia_lista(Lista *l);

/*
 * Retorna o tamanho da Lista
 */
int tamanho_lista(Lista l);

/*
 * Insere um novo elemento ao FINAL da Lista
 */
bool inserir_lista(Lista *l, int dado);

/*
 * Remove um elemento na POS-ésima posição
 */
bool remover_lista(Lista *l, int pos);

/*
 * Pesquisa um elemento na Lista, a partir da chave
 */
int pesquisar_lista(Lista *l, int chave);

/*
 * Limpa a Lista e zera o tamanho
 */
void limpar_lista(Lista *l);

#endif
