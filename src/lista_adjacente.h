#ifndef LISTA_ADJACENCIA_H_INCLUDED
#define LISTA_ADJACENCIA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct grafo grafo_t;
typedef struct aresta aresta_t;

struct grafo {
    int num_vertice;
    int num_aresta;
    aresta_t **vert;
};

struct aresta {
    int peso;
    int dado;
    aresta_t* prox;
};

/**
 * Inicia o gráfo com o número de vértices
 * já definido
 */
void inicializar_grafo(grafo_t* graph, int total_vert);

/**
 * Criar uma aresta entre dois vértices
 */
void criar_aresta(grafo_t* graph, int vert_out, int vert_in, unsigned int peso);

void adicionar_aresta(aresta_t* vert_in, int vert_out, unsigned int peso);

/**
 * Finaliza o grafo
 */
void finalizar_grafo(grafo_t* graph);

#endif /* LISTA_ADJCENCIA_H_ */
