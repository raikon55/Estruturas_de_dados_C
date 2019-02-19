#ifndef MATRIZ_ADJACENTE_H_
#define MATRIZ_ADJACENTE_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct g Grafo;

/**
 * Struct pra guardar o total de vértices, arestas e
 * alocar a matriz
 */
struct g {
    int vertice;
    int aresta;
    int **matriz;
};

/*
 * Criar matriz a ser usada
 * @dimensão: Matrizes adjacentes tem dimensão VxV
 */
int** iniciar_matriz(int dimensao);

/*
 * Iniciar a matriz de adjacencia com um
 * grafo de vert vértices
 * @vert: Número total de vértices
 */
Grafo* iniciar_grafo(int vert);

/*
 * Criar uma aresta entre 2 vértices
 * @graph: struct contento as informações do grafo
 * @vert1: vértice inicial
 * @vert2: vértice final
 */
void criar_aresta(Grafo *graph, int vert1, int vert2);

/*
 * Remover uma aresta
 * @graph: struct contento a matriz de adjacencia
 * @vert1: vértice inicial
 * @vert2: vértice final
 */
void remove_aresta(Grafo *graph, int vert1, int vert2);

/*
 * Mostrar o grafo
 * @graph: struct contento as informações do grafo
 */
void show(Grafo *graph);

/*
 * Deletar grafo
 * @graph: struct contento as informações do grafo
 */
void finalizar_grafo(Grafo *graph);

#endif /* MATRIZ_ADJACENTE_H_ */
