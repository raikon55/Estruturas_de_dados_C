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

Grafo* iniciar_grafo(int vert)
{
    Grafo *graph = (Grafo*) malloc(sizeof(Grafo));

    graph->vertice = vert;
    graph->aresta = 0;
    graph->matriz = iniciar_matriz(vert);

    if (graph->matriz != NULL) return graph;
    else return NULL;
}

void criar_aresta(Grafo *graph, int vert1, int vert2)
{
    if (graph->matriz[vert1][vert2] == 0){
        graph->matriz[vert1][vert2] = 1;
        graph->aresta++;
    }else{
        puts("Erro na criação da aresta");
    }
}

void remove_aresta(Grafo *graph, int vert1, int vert2)
{
    if (graph->matriz[vert1][vert2] == 1){
        graph->matriz[vert1][vert2] = 0;
        graph->aresta--;
    }else{
        puts("Erro na remoção da aresta");
    }
}

void show(Grafo *graph)
{
    printf("   ");
    for (int i = 0; i < graph->vertice; i++)
        printf("%i: ", i);
    puts("");

    for (int i = 0; i < graph->vertice; i++){
        printf("%i: ", i);
        for (int j = 0; j < graph->vertice; j++){
            printf("%i  ", graph->matriz[i][j]);
        }
        puts("");
    }
}

void finalizar_grafo(Grafo *graph)
{
    for (int i = 0; i < graph->vertice; i++)
        free(graph->matriz[i]);

    free(graph->matriz);
    free(graph);
}
