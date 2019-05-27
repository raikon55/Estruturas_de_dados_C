#include "grafos.h"

void inicializar_grafo(Grafo* graph, int total_vert)
{
    graph->vertices = (Vertice*) calloc(total_vert, sizeof(Vertice));
    Vertice temp = { 0, 0, { -1, -1, -1, NULL} };

    for (unsigned i = 0; i < total_vert; i++){
        graph->vertices[i] = temp;
    }
    graph->num_vertices = total_vert;
    graph->num_arestas = 0;
}

void criar_aresta(Grafo* graph, int vert_out, int vert_in, int peso)
{
    Aresta* nova = (Aresta*) malloc(sizeof(Aresta));
    nova->vertice_in = vert_in;
    nova->vertice_out = vert_out;
    nova->peso = peso;
    nova->prox = NULL;

    graph->vertices[vert_in].grau_in++;
    graph->vertices[vert_in].arestas.prox = nova;

    graph->vertices[vert_out].grau_out++;
    graph->vertices[vert_out].arestas.prox = nova;

    graph->num_arestas++;

}

void remover_aresta(Grafo* graph, int vert_out, int vert_in)
{
    graph->vertices[vert_in].grau_in--;
    graph->vertices[vert_in].arestas.vertice_out = 0;

    graph->vertices[vert_out].grau_out--;
    graph->vertices[vert_out].arestas.vertice_in = 0;

    graph->num_arestas--;
}
