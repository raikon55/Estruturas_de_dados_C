#include "lista_adjacente.h"

Grafo* iniciar_grafo(int verts)
{
    Grafo *graph = (Grafo*) malloc(sizeof(Grafo));
    if ( graph == NULL ){
        puts("Erro na alocação");
    }

    graph->vert = (Lista**) calloc(verts, sizeof(Lista*));
    if ( graph->vert == NULL){
        puts("Erro na alocação");
    }

    for ( int i = 0; i < verts; i++){
        graph->vert[i] = (Lista*) malloc(sizeof(Lista));
        inicializar_lista(graph->vert[i]);
    }

    graph->num_vertice = verts;
    graph->num_aresta = 0;

    return graph;
}

void criar_aresta(Grafo *graph, int vert1, int vert2)
{
    Dupla *temp = graph->vert[vert1]->inicio;

    while ( temp != NULL ){
        if ( temp->dado == vert2 ){
            return;
        }
        temp = temp->prox;
    }

    inserir_lista(graph->vert[vert1], vert2);
    inserir_lista(graph->vert[vert2], vert1);

    graph->num_aresta++;
}

void show(Grafo *graph)
{
    for(unsigned short i = 0; i < graph->num_vertice; i++){
        Dupla *temp = graph->vert[i]->inicio;
        printf("%i ", i);
        while ( temp != NULL ){
            printf(" --> %i ", temp->dado);
            temp = temp->prox;
        }
        puts("");
    }
}
