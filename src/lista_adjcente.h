#ifndef LISTA_ADJCENCIA_H_INCLUDED
#define LISTA_ADJCENCIA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct v Vertice;
typedef struct g Grafo;

struct g {
    int num_vertice;
    int num_aresta;
    Vertice **vert;
};

struct v {
    int dado;
    Vertice *adj;
};

/**
 * Inicia o gráfo com o número de vértices
 * já definido
 * @verts: Número máximo de vértices
 */
Grafo* iniciar_grafo(int verts);

/**
 * Cria um novo vértice
 * @graph: Ponteiro para o grafo
 * @vert: Novo vértice a ser inserido
 */
Vertice* criar_vertice(Grafo *graph, int vert);

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
void show(Vertice *vert);

#endif /* LISTA_ADJCENCIA_H_ */
