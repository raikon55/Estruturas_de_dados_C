#include "pilha.h"

void inicializar_pilha(pilha_t *p)
{
    p->tam = 0;
    p->prox = NULL;
}

bool vazia_pilha(pilha_t *p) { return (p->tam == 0); }

int tamanho_pilha(pilha_t p) { return p.tam; }

pilha_t* empilhar(pilha_t *p, int dado)
{
    pilha_t *temp = (pilha_t*) malloc(sizeof(pilha_t));
    if(temp == NULL) return false;

    temp->dado = dado;
    temp->tam = p->tam+1;
    temp->prox = p;

    return temp;
}

int desempilhar(pilha_t *p)
{
    if(vazia_pilha(p)) return -1;

    int dado = p->dado;

    pilha_t *temp = p;
    p = p->prox;
    free(temp);

    return dado;
}

void limpar_pilha(pilha_t *p) { while(!vazia_pilha(p)) desempilhar(p); }
