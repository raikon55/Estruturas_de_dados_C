#include "Pilha.h"

void inicializar_pilha(Pilha *p)
{
    p->topo = NULL;     // Sentinela
    p->tam = 0;
}

bool vazia_pilha(Pilha *p)
{
    if(p->topo == NULL) return true;
    else return false;
}

int tamanho_pilha(Pilha p)
{
    return p.tam;
}

bool empilhar(Pilha *p, TIPO dado)
{
    Celula *temp = (Celula*)malloc(sizeof(Celula)); // Novo sentinela
    if(temp == NULL) return false;

    temp->dado = dado;
    temp->prox = p->topo;

    p->topo = temp;     // Atualiza o topo e a sentinela
    p->tam++;

    return true;
}

TIPO desempilhar(Pilha *p)
{
    if(vazia_pilha(p)) return -1;    // Se estiver vazia, retorne

    TIPO dado = p->topo->dado;  // Remove o dado no topo

    Celula *temp = p->topo;     // Ponteiro para o topo
    p->topo = p->topo->prox;    // Atualiza a proxima celula como topo
    free(temp);                 // Libera o antigo topo

    p->tam--;
    return dado;
}

void limpar_pilha(Pilha *p)
{
    // Esvazia a Pilha
    while(!vazia_pilha(p)) desempilhar(p);
}
