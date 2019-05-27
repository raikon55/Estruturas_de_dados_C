#include "kruskal.h"

int buscar(Subset subconj[], int i)
{
    if (subconj[i].pai == -1) return i;
    else return buscar(subconj, subconj[i].pai);
}

void unir(Subset subconj[], int x, int y)
{
    int x_conj = buscar(subconj, x);
    int y_conj = buscar(subconj, y);
    subconj[x_conj].pai = y_conj;
}

void ordenar(Aresta aresta[], int tot_aresta)
{
	for (unsigned i = 0; i < tot_aresta; i++){
		for (unsigned j = i; j < tot_aresta; j++){
			if (aresta[i].peso < aresta[j].peso){
				Aresta temp = aresta[i];
				aresta[i] = aresta[j];
				aresta[j] = temp;
			}
		}
	}
}

Subset* kruskal(Grafo graph)
{
    int tot_vertices = graph.num_vertices;
    int tot_arestas = graph.num_arestas;
    Subset* subset = (Subset*) calloc(tot_vertices-1, sizeof(Subset));

    Aresta* aresta =(Aresta*) calloc(tot_arestas, sizeof(Aresta));
    for (unsigned i = 0; i < tot_arestas; i++){
    	aresta[i] = graph.vertices[i].arestas;
    }

    ordenar(aresta, tot_arestas);
//    Aresta* mst = (Aresta*) malloc(sizeof(Aresta));

    for (unsigned i = 0; i < tot_vertices; i++){
        subset[i].pai = i;
        subset[i].value = 0;
    }

    for (unsigned i = 0; i < (tot_vertices - 1); i++){
        int v1 = buscar(subset, aresta[i].vertice_in);
        int v2 = buscar(subset, aresta[i].vertice_out);

        if (v1 != v2){
        	unir(subset, v1, v2);
        }
    }

    return subset;
}
