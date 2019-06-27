#include "lista_adjacente.h"

void inicializar_grafo(Grafo* graph, int total_vert)
{
    graph->vert = (Lista**) calloc(total_vert, sizeof(Lista*));
    if ( graph->vert == NULL || graph == NULL){
        puts("Erro na alocação");
        exit(1);
    }

    for ( int i = 0; i < total_vert; i++){
        graph->vert[i] = (Lista*) malloc(sizeof(Lista));
        inicializar_lista(graph->vert[i]);
    }

    graph->num_vertice = total_vert;
    graph->num_aresta = 0;
}

void criar_aresta(Grafo* graph, int vert_out, int vert_in, unsigned int peso)
{
    Dupla* temp_out = graph->vert[vert_in]->inicio,
         * temp_in = graph->vert[vert_out]->inicio;

    while ( temp_out != NULL ){
        if ( temp_out->dado == vert_out ) return;
        temp_out = temp_out->prox;
    }
    
    while ( temp_in != NULL ){
        if ( temp_in->dado == vert_in ) return;
        temp_in = temp_in->prox;
    }

    inserir_lista(graph->vert[vert_in], vert_out);
    inserir_lista(graph->vert[vert_out], vert_in);

    graph->num_aresta++;
}

void finalizar_grafo(Grafo* graph)
{
    for (unsigned i = 0; i < graph->num_vertice; i++){
        limpar_lista(graph->vert[i]);
    }

    free(graph);
}