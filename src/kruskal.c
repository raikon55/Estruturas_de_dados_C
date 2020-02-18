#include "kruskal.h"

int buscar(int subconj[], int pos)
{
    if (subconj[pos] == -1) return pos;
    else return buscar(subconj, subconj[pos]);
}

void unir(int subconj[], int v1, int v2)
{
    int v1_conj = buscar(subconj, v1);
    int v2_conj = buscar(subconj, v2);
    subconj[v1_conj] = v2_conj;
}

void ordenar(Aresta aresta[], int tot_aresta)
{
    for (int i = 0; i < tot_aresta; i++){
        for (int j = i+1; j < tot_aresta; j++){
            if (aresta[j].peso < aresta[i].peso){
                Aresta temp = aresta[i];
                aresta[i] = aresta[j];
                aresta[j] = temp;
            }
        }
    }
}

void kruskal(Grafo graph, Aresta* arvore)
{
    int tot_vertices = graph.num_vertices,
        tot_arestas = graph.num_arestas,
        subset[tot_vertices],
        aux = 0;

    memset(subset, -1, sizeof(int) * tot_vertices);

    Aresta* aresta = (Aresta*) calloc(tot_arestas, sizeof(Aresta)),
          * temp = graph.arestas;

    while ( temp != NULL ){
        aresta[aux].peso = temp->peso;
        aresta[aux].vertice_in = temp->vertice_in;
        aresta[aux].vertice_out = temp->vertice_out;
        aresta[aux++].prox = NULL;
        temp = temp->prox;
    }

    ordenar(aresta, tot_arestas);
    aux = 0;

    for (int i = 0; i < tot_vertices; i++){
        int v1 = buscar(subset, aresta[i].vertice_in);
        int v2 = buscar(subset, aresta[i].vertice_out);

        if (v1 != v2){
            arvore[aux++] = aresta[i];
            unir(subset, v1, v2);
        }
    }
}
