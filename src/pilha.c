#include "pilha.h"

void inicializar_pilha(pilha_t *p)
{
    p->tam = 0;
    p->prox = NULL;
}

bool vazia_pilha(pilha_t *p)
{
    return (p->tam == 0);
}

int tamanho_pilha(pilha_t p)
{
    return p.tam;
}

bool empilhar(pilha_t *p, int dado)
{
    pilha_t *temp = (pilha_t*) malloc(sizeof(pilha_t)); // Novo sentinela
    if(temp == NULL) return false;

    temp->dado = dado;
    temp->tam = p->tam+1;
    temp->prox = p;

    p = temp;   // Atualiza o topo

    return true;
}

int desempilhar(pilha_t *p)
{
    if(vazia_pilha(p)) return -1;    // Se estiver vazia, retorne

    int dado = p->dado;  // Remove o dado no topo

    pilha_t *temp = p;     // Ponteiro para o topo
    p = p->prox;    // Atualiza a proxima celula como topo
    free(temp);                 // Libera o antigo topo

    return dado;
}

void limpar_pilha(pilha_t *p)
{
    // Esvazia a Pilha
    while(!vazia_pilha(p)) desempilhar(p);
}
