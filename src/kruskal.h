#ifndef KRUSKAL_H_
#define KRUSKAL_H_

#include <stdlib.h>
#include <string.h>

typedef struct aresta aresta_t;
typedef struct celula celula_t;
typedef struct grafo grafo_t;

struct aresta {
    int vertice_in;
    int vertice_out;
    int peso;
    aresta_t* prox;
};

struct celula {
    aresta_t aresta;
    int nivel;
    celula_t* prox;
};

struct grafo{
    int num_arestas;
    int num_vertices;
    aresta_t* arestas;
};

/**
 * Determina a qual conjunto um determinado elemento pertence.
 * Também útil para determinar se dois elementos estão no mesmo conjunto.
 */
int buscar(int subconj[], int pos);

/**
 * Combina ou agrupa dois conjuntos em um único conjunto.
 */
void unir(int subconj[], int x, int y);

/**
 * Ordenar as arestas em ordem não-decrescente.
 */
void ordenar(aresta_t aresta[], int tot_aresta);

/**
 * Dado um conjunto ordenado de arestas, retorna uma árvore
 * geradora minima.
 */
void kruskal(grafo_t graph, aresta_t* arvore);

#endif /* KRUSKAL_H_ */
