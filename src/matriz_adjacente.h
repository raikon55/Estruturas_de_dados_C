#ifndef MATRIZ_ADJACENTE_H_
#define MATRIZ_ADJACENTE_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct g Grafo;

/*
 * Struct pra guardar o total de vértices, arestas e
 * alocar a matriz
 */
struct g {
    int vertice;
    int aresta;
    int **matriz;
};

/*
 * Cria uma matriz VxV, para ser possível
 * ligar todos os vértices, se necessário.
 */
int** iniciar_matriz(int dimensao);

/*
 * Distribui todos os vértices pela matriz,
 * O grafo representado é não direcionado.
 */
Grafo* iniciar_matriz_adjacente(int vertices);

/*
 * Criar uma aresta entre 2 vértices.
 */
void criar_aresta_matriz(Grafo *graph, int vert1, int vert2, int peso);

/*
 * Retorna o peso da aresta entre os vértices
 */
int obter_aresta(Grafo* grafo, int vert1, int vert2);

/*
 * Remover uma aresta
 */
void remove_aresta_matriz(Grafo *graph, int vert1, int vert2);

/*
 * Deletar grafo
 */
void finalizar_matriz_adjacente(Grafo *graph);

#endif /* MATRIZ_ADJACENTE_H_ */
