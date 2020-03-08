#include "fila.h"

void inicializar_fila(fila_t *f)
{
    f->inicio = (celula_t*)malloc( sizeof(celula_t) );
    f->inicio->prox = NULL;
    f->fim = f->inicio;
    f->tam = 0;
}

bool vazia_fila(fila_t *f)
{
    if(f->inicio == f->fim) return true;
    else return false;
}

int tamanho_fila(fila_t f)
{
    return f.tam;
}

bool enfileirar(fila_t *f, int dado)
{
    f->fim->prox = (celula_t*) malloc(sizeof(celula_t));

    f->fim = f->fim->prox;
    f->fim->dado = dado;
    f->fim->prox = NULL;
    f->tam++;

    return true;
}

int desenfileirar(fila_t *f)
{
    if (vazia_fila(f)) return 0;

    celula_t *temp = f->inicio;
    f->inicio = f->inicio->prox;

    int dado = temp->dado;
    free(temp);
    f->tam--;

    return dado;
}

void limpar_fila(fila_t *f)
{
    while(!vazia_fila(f)) desenfileirar(f);

    free(f->inicio);
}
