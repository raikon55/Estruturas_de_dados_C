#ifndef KRUSKAL_H_
#define KRUSKAL_H_

#include "grafos.h"

/**
 *
 */
int buscar(int subconj[], int pos);

/**
 *
 */
void unir(int subconj[], int x, int y);

/**
 *
 */
void kruskal(Grafo graph, int subset[]);

#endif /* KRUSKAL_H_ */
