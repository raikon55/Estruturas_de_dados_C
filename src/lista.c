#include "Lista.h"

void inicializar_lista(Lista *l)
{
    l->inicio = (Dupla*)malloc(sizeof(Dupla));

    l->fim = l->inicio;                // Inicio e fim apontam para o mesmo lugar
    l->inicio->prox = l->inicio->ant = NULL; // Prox e ant vazias

    l->tam = 0;
}

bool vazia_lista(Lista *l)
{
    if(l->inicio == l->fim) return true;
    else return false;
}

int tamanho_lista(Lista l)
{
    return l.tam;
}

bool inserir_lista(Lista *l, TIPO dado)
{
    Dupla *nova = (Dupla*)malloc( sizeof(Dupla) );
    if(nova == NULL) return false;

    nova->dado = dado;
    nova->prox = nova->ant = NULL;

    nova->ant = l->fim;
    l->fim->prox = nova;
    l->fim = nova;

    l->tam++;

    return true;
}

bool remover_lista(Lista *l, int pos)
{
    if( (pos < 1) || (pos > l->tam) || (vazia_lista(l)) )
        return false;

    Dupla *removida = l->inicio;

    if(pos == 1){   // Caso seja a primeira posição
        l->inicio = l->inicio->prox;

        if(l->inicio->prox == NULL) l->fim->prox = NULL;
        else l->inicio->ant = NULL;

    }else if(pos == l->tam){    // Caso seja a última posição
        removida = l->fim;
        l->fim->ant->prox = NULL;
        l->fim = l->fim->ant;
    }else{
        Dupla *cel_ant = l->inicio->prox;

        for(int c = 0; c < pos-1; c++) cel_ant = cel_ant->prox;

        removida = cel_ant;
        cel_ant->prox->ant = removida->ant;
        cel_ant->ant->prox = removida->prox;
    }

    free(removida);
    l->tam--;

    return true;
}

TIPO pesquisar_lista(Lista *l, TIPO chave)
{
    Dupla *temp = l->inicio;

    while(!vazia_lista(l) && chave != temp->dado) temp = temp->prox;

    if(temp != NULL) return temp->dado;
    else return -1;
}

void limpar_lista(Lista *l)
{
    while(!vazia_lista(l)) remover_lista(l, tamanho_lista(*l));

    free(l->inicio);
}
