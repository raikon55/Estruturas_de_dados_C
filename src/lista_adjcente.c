#include "lista_adjcencia.h"

Grafo* iniciar_grafo(int verts)
{
    Grafo *graph = (Grafo*) malloc(sizeof(Grafo));
    if ( graph == NULL ) puts("Erro na alocação");

    graph->vert = (Vertice**) calloc(verts, sizeof(Vertice*));
    if ( graph->vert == NULL) puts("Erro na alocação");

    for ( int i = 0; i < verts; i++) graph->vert[i] = NULL;

    graph->num_vertice = verts;
    graph->num_aresta = 0;

    return graph;
}

Vertice* criar_vertice(Grafo *graph, int vert)
{
    Vertice *temp = (Vertice*) malloc(sizeof(Vertice));
    if ( temp == NULL) return NULL;

    temp->dado = vert;
    temp->adj = NULL;

    return temp;
}

void criar_aresta(Grafo *graph, int vert1, int vert2)
{
    Vertice *temp = graph->vert[vert1];

    while ( temp != NULL ){
        if ( temp->dado == vert2 ) return;
        temp = temp->adj;
    }

    Vertice *novo = criar_vertice(graph, vert2);
    if ( novo == NULL ) return;

    graph->vert[vert1]->adj = novo;
    graph->vert[vert1] = novo;


    graph->num_aresta++;
}

void show(Vertice *vert)
{
    Vertice *temp = vert->adj;
    while ( temp != NULL ){
        printf("%i --> %i\n", vert->dado, temp->dado);
        temp = temp->adj;
    }
}
