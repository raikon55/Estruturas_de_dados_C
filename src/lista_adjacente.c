#include "lista_adjacente.h"

void inicializar_grafo(Grafo* graph, int total_vert)
{
    graph->vert = (Aresta**) calloc(total_vert, sizeof(Aresta*));
    if ( graph->vert == NULL || graph == NULL){
        puts("Erro na alocação");
        exit(1);
    }

    for ( int i = 0; i < total_vert; i++){
        graph->vert[i] = (Aresta*) malloc(sizeof(Aresta));
        graph->vert[i]->prox = NULL;
    }

    graph->num_vertice = total_vert;
    graph->num_aresta = 0;
}

void criar_aresta(Grafo* graph, int vert_out, int vert_in, unsigned int peso)
{
    Aresta* temp_out = graph->vert[vert_in]->prox,
         * temp_in = graph->vert[vert_out]->prox;

    while ( temp_out != NULL ){
        if ( temp_out->dado == vert_out ) return;
        temp_out = temp_out->prox;
    }
    
    while ( temp_in != NULL ){
        if ( temp_in->dado == vert_in ) return;
        temp_in = temp_in->prox;
    }

    adicionar_aresta(graph->vert[vert_in], vert_out, peso);
    adicionar_aresta(graph->vert[vert_out], vert_in, peso);

    graph->num_aresta++;
}

void adicionar_aresta(Aresta* vert_in, int vert_out, unsigned int peso)
{
    Aresta* temp = vert_in->prox;

    while (temp->prox != NULL) temp = temp->prox;

    temp->dado = vert_out;
    temp->peso = peso;
    temp->prox = NULL;
}

void finalizar_aresta(Aresta* arestas)
{
    while (arestas->prox != NULL) {
        Aresta* temp = arestas->prox;
        arestas = arestas->prox;
        free(temp);
    }
}

void finalizar_grafo(Grafo* graph)
{
    for (int i = 0; i < graph->num_vertice; i++){
        finalizar_aresta(graph->vert[i]);
    }

    free(graph);
}
