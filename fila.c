#include "fila.h"

void inicializar_fila(fila *f)
{
    f->inicio = (celula*)malloc( sizeof(celula) );
    f->inicio->prox = NULL;
    f->fim = f->inicio;
    f->tam = 0;
}

short vazia_fila(fila *f)
{
    if(f->inicio == f->fim) return true;
    else return false;
}

int tamanho_fila(fila f)
{
    return f.tam;
}

void inserir_fila(fila *f, dados dado)
{
    celula *temp = (celula*)malloc( sizeof(celula) );
    if(temp == NULL) return;

    temp->dado = dado;
    temp->prox = NULL;

    f->fim->prox = temp;
    f->fim = temp;

    f->tam++;
}

void remover_fila(fila *f)
{
    if(vazia_fila(f)) return;

    celula *temp = f->inicio;
    f->inicio = f->inicio->prox;

    free(temp);
    f->tam--;
}

void limpar_fila(fila *f)
{
    while(!vazia_fila(f))
        remover_fila(f);

    free(f->inicio);
}
