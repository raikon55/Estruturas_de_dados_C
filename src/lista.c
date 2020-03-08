#include "lista.h"

void inicializar_lista(lista_t* l)
{
    l->inicio = (dupla_t*)malloc(sizeof(dupla_t));

    l->fim = l->inicio;
    l->inicio->prox = l->inicio->ant = NULL;

    l->tam = 0;
}

bool vazia_lista(lista_t* l)
{
    if(l->inicio == l->fim) return true;
    else return false;
}

int tamanho_lista(lista_t l) { return l.tam; }

bool inserir_lista(lista_t* l, int dado)
{
    dupla_t *nova = (dupla_t*)malloc( sizeof(dupla_t) );
    if(nova == NULL) return false;

    nova->dado = dado;
    nova->prox = nova->ant = NULL;

    nova->ant = l->fim;
    l->fim->prox = nova;
    l->fim = nova;

    l->tam++;

    return true;
}

bool remover_lista(lista_t* l, int pos)
{
    if( (pos < 1) || (pos > l->tam) || (vazia_lista(l)) )
        return false;

    dupla_t *removida = l->inicio;

    if(pos == 1){
        l->inicio = l->inicio->prox;

        if(l->inicio->prox == NULL) l->fim->prox = NULL;
        else l->inicio->ant = NULL;

    }else if(pos == l->tam){
        removida = l->fim;
        l->fim->ant->prox = NULL;
        l->fim = l->fim->ant;
    }else{
        dupla_t *cel_ant = l->inicio->prox;

        for(int c = 0; c < pos-1; c++) cel_ant = cel_ant->prox;

        removida = cel_ant;
        cel_ant->prox->ant = removida->ant;
        cel_ant->ant->prox = removida->prox;
    }

    free(removida);
    l->tam--;

    return true;
}

int pesquisar_lista(lista_t* l, int chave)
{
    dupla_t *temp = l->inicio;

    while(!vazia_lista(l) && temp != NULL && chave != temp->dado) temp = temp->prox;

    if(temp != NULL) return temp->dado;
    else return -1;
}

void limpar_lista(lista_t* l)
{
    while(!vazia_lista(l)) remover_lista(l, tamanho_lista(*l));

    free(l->inicio);
}
