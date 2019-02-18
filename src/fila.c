#include "fila.h"

void inicializar_fila(fila *f)
{
    f->inicio = (celula*)malloc( sizeof(celula) );
    f->inicio->prox = NULL;
    f->fim = f->inicio;
    f->tam = 0;
}

bool vazia_fila(fila *f)
{
    if(f->inicio == f->fim) return true;
    else return false;
}

int tamanho_fila(fila f)
{
    return f.tam;
}

bool inserir_fila(fila *f, TIPO dado)
{
    f->fim->prox = (celula*) malloc(sizeof(celula));

    f->fim = f->fim->prox;
    f->fim->dado = dado;
    f->fim->prox = NULL;
    f->tam++;

    return true;
}

TIPO remover_fila(fila *f)
{
    if (vazia_fila(f)) return (TIPO)NULL;

    celula *temp = f->inicio;
    f->inicio = f->inicio->prox;

    TIPO dado = temp->dado;
    free(temp);
    f->tam--;

    return dado;
}

void limpar_fila(fila *f)
{
    while(!vazia_fila(f)) remover_fila(f);

    free(f->inicio);
}
