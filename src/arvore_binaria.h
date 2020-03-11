#ifndef ARVBIN_H_INCLUDED
#define ARVBIN_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node node_t;
typedef struct btree arv_bin_t;

struct node {
    int dado;
    node_t *pai, *esq, *dir;
};

struct btree {
    node_t *raiz;
    int tam;
};

/*
 * Inicializa a árvore com o nó raiz e tamanho 0
 */
void inicializar_arvore(arv_bin_t* arvore);

/*
 * Insere um novo nó, seguindo os requisitos da estrutura
 * da árvore
 */
bool inserir_arvore(arv_bin_t* arvore, int dado);

/*
 * Mostrar os elementos da árvore InOrder
 */
void in_ord(node_t* node);

/*
 * Mostrar os elementos da árvore PreOrder
 */
void pre_ord(node_t* node);

/*
 * Mostrar os elementos da árvore PosOrder
 */
void pos_ord(node_t* node);

/*
 * Pesquisar elemento na árvore
 */
int pesquisar_arvore(arv_bin_t* arvore, int chave);

/*
 * Exibe o pai do nó passado como parâmetro
 */
int antecessor_Node(node_t* node);

/*
 * Remover elemento da árvore
 */
bool remover_arvore(arv_bin_t* arvore, int chave);

#endif // ARVBIN_H_INCLUDED
