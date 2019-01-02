#include "pilha.h"

void inicializar_pilha(pilha *p)
{
    p->topo = NULL;     // Sentinela
    p->tam = 0;
}

bool vazia_pilha(pilha *p)
{
    if(p->topo == NULL) return true;
    else return false;
}

int tamanho_pilha(pilha p)
{
    return p.tam;
}

bool empilhar(pilha *p, TIPO dado)
{
    celula *temp = (celula*)malloc(sizeof(celula)); // Novo sentinela
    if(temp == NULL) return false;

    temp->dado = dado;
    temp->prox = p->topo;

    p->topo = temp;     // Atualiza o topo e a sentinela
    p->tam++;

    return true;
}

TIPO desempilhar(pilha *p)
{
    if(vazia_pilha(p)) return -1;    // Se estiver vazia, retorne

    TIPO dado = p->topo->dado;  // Remove o dado no topo

    celula *temp = p->topo;     // Ponteiro para o topo
    p->topo = p->topo->prox;    // Atualiza a proxima celula como topo
    free(temp);                 // Libera o antigo topo

    p->tam--;
    return dado;
}

void limpar_pilha(pilha *p)
{
    // Esvazia a pilha
    while(!vazia_pilha(p)) desempilhar(p);
}
