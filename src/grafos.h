#ifndef GRAFOS_H_
#define GRAFOS_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct edge Aresta;

struct edge{
    int vertice_in;
    int vertice_out;
    int peso;
    Aresta* prox;
};

typedef struct {
    int grau_in;
    int grau_out;
    Aresta arestas;
}Vertice;

typedef struct {
    Vertice* vertices;
    int num_arestas;
    int num_vertices;
}Grafo;

void inicializar_grafo(Grafo* graph, int total_vert);

void criar_aresta(Grafo* graph, int vert_in, int vert_out, int peso);

void remover_aresta(Grafo* graph, int vert_in, int vert_out);

#endif /* GRAFOS_H_ */
