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
    for (unsigned i = 0; i < tot_aresta; i++){
        for (unsigned j = i; j < tot_aresta; j++){
            if (aresta[i].peso > aresta[j].peso){
                Aresta temp = aresta[i];
                aresta[i] = aresta[j];
                aresta[j] = temp;
            }
        }
    }
}

void kruskal(Grafo graph, int subset[])
{
    int tot_vertices = graph.num_vertices,
        tot_arestas = graph.num_arestas,
        aux = 0;

    memset(subset, -1, sizeof(int) * tot_vertices);

    Aresta* aresta = (Aresta*) calloc(tot_arestas, sizeof(Aresta)),
          * temp = graph.arestas;

    while ( temp != NULL ){
        aresta[aux++] = *temp;
        temp = temp->prox;
    }

    ordenar(aresta, tot_arestas);

    for (unsigned i = 0; i < tot_vertices; i++){
        int v1 = buscar(subset, aresta[i].vertice_out);
        int v2 = buscar(subset, aresta[i].vertice_in);

        if (v1 != v2){
            unir(subset, v1, v2);
        }
    }
}
