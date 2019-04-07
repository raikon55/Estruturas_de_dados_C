#ifndef LISTA_ADJACENCIA_H_INCLUDED
#define LISTA_ADJACENCIA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct g Grafo;

struct g {
    int num_vertice;
    int num_aresta;
    Lista **vert;
};

/**
 * Inicia o gráfo com o número de vértices
 * já definido
 * @verts: Número máximo de vértices
 */
Grafo* iniciar_grafo(int verts);

/**
 * Criar uma aresta entre dois vértices
 * @graph: Ponteiro para o grafo
 * @vert1: Vértice primário
 * @vert2: vértice secundário
 */
void criar_aresta(Grafo *graph, int vert1, int vert2);

/**
 * Mostrar o grafo
 * @graph: Ponteiro para o grafo
 */
void show(Grafo *graph);

#endif /* LISTA_ADJCENCIA_H_ */
