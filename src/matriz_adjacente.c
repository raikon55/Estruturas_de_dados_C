#include "matriz_adjacente.h"

int** iniciar_matriz(int dimensao)
{
    int **matriz = (int**) calloc(dimensao, sizeof(int*));
    if ( matriz == NULL ){
        puts("Erro na alocação da matriz");
        return (int**)NULL;
    }

    for (int i = 0; i < dimensao; i++){
        matriz[i] = (int*) calloc(dimensao, sizeof(int));
        if ( matriz[i] == NULL ){
            printf("Erro na alocação da matriz[%i]", i);
            return (int**)NULL;
        }
    }

    for (int i = 0; i < dimensao; i++)
        for(int j = 0; j < dimensao; j++)
            matriz[i][j] = 0;

    return matriz;
}

grafo_t* iniciar_matriz_adjacente(int vertices)
{
    grafo_t *graph = (grafo_t*) malloc(sizeof(grafo_t));

    graph->vertice = vertices;
    graph->aresta = 0;
    graph->matriz = iniciar_matriz(vertices);

    if (graph->matriz != NULL) return graph;
    else return NULL;
}

int obter_aresta(grafo_t* grafo, int vert1, int vert2)
{
    return grafo->matriz[vert1][vert2];
}

void remove_aresta_matriz(grafo_t *graph, int vert1, int vert2)
{
    if (graph->matriz[vert1][vert2] == 1){
        graph->matriz[vert1][vert2] = 0;
        graph->matriz[vert2][vert1] = 0;
        graph->aresta--;
    }else{
        puts("Erro na remoção da aresta");
    }
}

void finalizar_matriz_adjacente(grafo_t *graph)
{
    for (int i = 0; i < graph->vertice; i++)
        free(graph->matriz[i]);

    free(graph->matriz);
    free(graph);
}
