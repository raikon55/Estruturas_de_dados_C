#include "grafos.h"

int inicializar_grafo(Grafo* graph, int total_vert)
{
    graph->num_vertices = total_vert;
    graph->num_arestas = 0;
    graph->arestas = NULL;

    return 0;
}

int criar_aresta(Grafo* graph, int vert_out, int vert_in, int peso)
{
    if (graph->arestas == NULL){
        graph->arestas = (Aresta*) malloc(sizeof(Aresta));
        if (graph->arestas == NULL) return -1;

        graph->arestas->vertice_in = vert_in;
        graph->arestas->vertice_out = vert_out;
        graph->arestas->peso = peso;
        graph->arestas->prox = NULL;
    } else {
        Aresta* nova = (Aresta*) malloc(sizeof(Aresta));

        nova->vertice_in = vert_in;
        nova->vertice_out = vert_out;
        nova->peso = peso;
        nova->prox = graph->arestas;

        graph->arestas = nova;
    }

    graph->num_arestas++;

    return 0;
}
