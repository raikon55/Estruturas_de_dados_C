#ifndef KRUSKAL_H_
#define KRUSKAL_H_

#include "grafos.h"

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
void ordenar(Aresta aresta[], int tot_aresta);

/**
 * Dado um conjunto ordenado de arestas, retorna uma árvore
 * geradora minima.
 */
void kruskal(Grafo graph, Aresta* arvore);

#endif /* KRUSKAL_H_ */
