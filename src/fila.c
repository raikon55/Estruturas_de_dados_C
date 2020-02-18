#include "fila.h"

void inicializar_fila(Fila *f)
{
    f->inicio = (Celula*)malloc( sizeof(Celula) );
    f->inicio->prox = NULL;
    f->fim = f->inicio;
    f->tam = 0;
}

bool vazia_fila(Fila *f)
{
    if(f->inicio == f->fim) return true;
    else return false;
}

int tamanho_fila(Fila f)
{
    return f.tam;
}

bool enfileirar(Fila *f, int dado)
{
    f->fim->prox = (Celula*) malloc(sizeof(Celula));

    f->fim = f->fim->prox;
    f->fim->dado = dado;
    f->fim->prox = NULL;
    f->tam++;

    return true;
}

int desenfileirar(Fila *f)
{
    if (vazia_fila(f)) return 0;

    Celula *temp = f->inicio;
    f->inicio = f->inicio->prox;

    int dado = temp->dado;
    free(temp);
    f->tam--;

    return dado;
}

void limpar_fila(Fila *f)
{
    while(!vazia_fila(f)) desenfileirar(f);

    free(f->inicio);
}
