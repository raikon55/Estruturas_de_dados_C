#ifndef ARVBIN_H_INCLUDED
#define ARVBIN_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct n node;
typedef struct btree ArvBin;

struct n{
    int dado;
    No *pai, *esq, *dir;
};

struct btree{
    node *raiz;
    int tam;
};

/*
 * Inicializa a árvore com o nó raiz e tamanho 0
 */
void inicializar_arvore(ArvBin *arvore);

/*
 * Insere um novo nó, seguindo os requisitos da estrutura
 * da árvore
 */
bool inserir_arvore(ArvBin *arvore, int dado);

/*
 * Mostrar os elementos da árvore InOrder
 */
void in_ord(node *node);

/*
 * Mostrar os elementos da árvore PreOrder
 */
void pre_ord(node *node);

/*
 * Mostrar os elementos da árvore PosOrder
 */
void pos_ord(node *node);

/*
 * Pesquisar elemento na árvore
 */
int pesquisar_arvore(ArvBin *arvore, int chave);

/*
 * Exibe o pai do nó passado como parâmetro
 */
int antecessor_node(node *node);

/*
 * Remover elemento da árvore
 */
bool remover_arvore(ArvBin *arvore, int chave);

#endif // ARVBIN_H_INCLUDED
