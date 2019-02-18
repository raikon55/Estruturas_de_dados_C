#include <stdio.h>
#include "matriz_adjacente.h"

#define MAX_VERT 6

int main (void)
{
    Grafo *graph = iniciar_grafo(MAX_VERT);
    if ( graph == NULL ) return -1;

    criar_aresta(graph, 0, 1);
    criar_aresta(graph, 0, 5);
    criar_aresta(graph, 1, 0);
    criar_aresta(graph, 1, 5);
    criar_aresta(graph, 2, 4);
    criar_aresta(graph, 3, 1);
    criar_aresta(graph, 5, 3);

    show(graph);

    remove_aresta(graph, 0, 1);
    remove_aresta(graph, 0, 5);
    remove_aresta(graph, 1, 0);
    remove_aresta(graph, 1, 5);
    remove_aresta(graph, 2, 4);
    remove_aresta(graph, 3, 1);
    remove_aresta(graph, 5, 3);

    show(graph);
    finalizar_grafo(graph);

    return 0;
}
