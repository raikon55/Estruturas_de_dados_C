#ifndef KRUSKAL_H_
#define KRUSKAL_H_

#include "grafos.h"

typedef struct {
    int pai;
    int value;
}Subset;

/**
 *
 */
int buscar(Subset subconj[], int i);

/**
 *
 */
void unir(Subset subconj[], int x, int y);

/**
 *
 */
Subset* kruskal(Grafo graph);

#endif /* KRUSKAL_H_ */
