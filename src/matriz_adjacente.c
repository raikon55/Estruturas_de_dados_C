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

Grafo* iniciar_matriz_adjacente(int vertices)
{
    Grafo *graph = (Grafo*) malloc(sizeof(Grafo));

    graph->vertice = vertices;
    graph->aresta = 0;
    graph->matriz = iniciar_matriz(vertices);

    if (graph->matriz != NULL) return graph;
    else return NULL;
}

void criar_aresta_matriz(Grafo *graph, int vert1, int vert2)
{
    if (graph->matriz[vert1][vert2] == 0){
        graph->matriz[vert1][vert2] = 1;
        graph->matriz[vert2][vert1] = 1;
        graph->aresta++;
    }else{
        puts("Erro na criação da aresta");
    }
}

void remove_aresta_matriz(Grafo *graph, int vert1, int vert2)
{
    if (graph->matriz[vert1][vert2] == 1){
        graph->matriz[vert1][vert2] = 0;
        graph->matriz[vert2][vert1] = 0;
        graph->aresta--;
    }else{
        puts("Erro na remoção da aresta");
    }
}

void finalizar_matriz_adjacente(Grafo *graph)
{
    for (int i = 0; i < graph->vertice; i++)
        free(graph->matriz[i]);

    free(graph->matriz);
    free(graph);
}