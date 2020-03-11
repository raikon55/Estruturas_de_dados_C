#include "lista_adjacente.h"

void inicializar_grafo(grafo_t* graph, int total_vert)
{
    graph->vert = (aresta_t**) calloc(total_vert, sizeof(aresta_t*));
    if ( graph->vert == NULL || graph == NULL){
        puts("Erro na alocação");
        exit(1);
    }

    for ( int i = 0; i < total_vert; i++){
        graph->vert[i] = (aresta_t*) malloc(sizeof(aresta_t));
        graph->vert[i]->prox = NULL;
    }

    graph->num_vertice = total_vert;
    graph->num_aresta = 0;
}

void criar_aresta(grafo_t* graph, int vert_out, int vert_in, unsigned int peso)
{
    aresta_t* temp_out = graph->vert[vert_in]->prox,
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

void adicionar_aresta(aresta_t* vert_in, int vert_out, unsigned int peso)
{
    aresta_t* temp = vert_in->prox;

    while (temp->prox != NULL) temp = temp->prox;

    temp->dado = vert_out;
    temp->peso = peso;
    temp->prox = NULL;
}

void finalizar_aresta(aresta_t* arestas)
{
    while (arestas->prox != NULL) {
        aresta_t* temp = arestas->prox;
        arestas = arestas->prox;
        free(temp);
    }
}

void finalizar_grafo(grafo_t* graph)
{
    for (int i = 0; i < graph->num_vertice; i++){
        finalizar_aresta(graph->vert[i]);
    }

    free(graph);
}
