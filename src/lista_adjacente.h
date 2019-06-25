#ifndef LISTA_ADJACENCIA_H_INCLUDED
#define LISTA_ADJACENCIA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct {
    int num_vertice;
    int num_aresta;
    Lista **vert;
}Grafo;

/**
 * Inicia o gráfo com o número de vértices
 * já definido
 */
void inicializar_grafo(Grafo* graph, int total_vert);

/**
 * Criar uma aresta entre dois vértices
 */
void criar_aresta(Grafo* graph, int vert_out, int vert_in, unsigned int peso);

/**
 * Finaliza o grafo
 */
void finalizar_grafo(Grafo* graph);

#endif /* LISTA_ADJCENCIA_H_ */
