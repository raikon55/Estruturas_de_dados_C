#ifndef GRAFOS_H_
#define GRAFOS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct edge Aresta;

struct edge{
    int vertice_in;
    int vertice_out;
    int peso;
    Aresta* prox;
};

typedef struct {
    int num_arestas;
    int num_vertices;
    Aresta* arestas;
}Grafo;

/**
 *
 */
int inicializar_grafo(Grafo* graph, int total_vert);

int criar_aresta(Grafo* graph, int vert_in, int vert_out, int peso);

#endif /* GRAFOS_H_ */
