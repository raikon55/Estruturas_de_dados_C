#include "pilha.h"

void inicializar_pilha(pilha_t *p)
{
    p->tam = 0;
    p->topo = NULL;
}

bool vazia_pilha(pilha_t *p) { return (p->tam == 0); }

int tamanho_pilha(pilha_t p) { return p.tam; }

pilha_t* empilhar(pilha_t *p, int dado)
{
    celula_t* nova = (celula_t*) malloc(sizeof(celula_t));
    nova->dado = dado;

    nova->prox = p->topo;
    p->topo = nova;
    p->tam++;

    return p;
}

int desempilhar(pilha_t *p)
{
    if(vazia_pilha(p)) return -1;

    celula_t* temp = p->topo;
    int dado = temp->dado;
    p->topo = temp->prox;
    free(temp);

    return dado;
}

void limpar_pilha(pilha_t *p) { while(!vazia_pilha(p)) desempilhar(p); }
