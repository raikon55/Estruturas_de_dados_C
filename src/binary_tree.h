#ifndef ARVBIN_H_INCLUDED
#define ARVBIN_H_INCLUDED

#include "celula.h"

typedef struct btree{
    node *raiz;
    int tam;
}ArvBin;

/*
 * Inicializa a árvore com o nó raiz e tamanho 0
 */
void inicializar_arvore(ArvBin *arvore);

/*
 * Insere um novo nó, seguindo os requisitos da estrutura
 * da árvore
 */
void inserir_arvore(ArvBin *arvore, int dado);

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
int pesquisar_arvore(ArvBin *arvore, int chave, int &cont);

/*
 * Retorna a altura da árvore
 * A altura da aŕvore é diferente do tamanho da mesma
 */
int altura_arvore(node *node);

/*
 * Exibe o pai do nó passado como parâmetro
 */
int antecessor_node(node *node);

/*
 * Remover elemento da árvore
 */
bool remover_arvore(ArvBin *arvore, int chave);

#endif // ARVBIN_H_INCLUDED
