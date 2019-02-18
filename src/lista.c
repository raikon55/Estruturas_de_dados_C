#include "lista.h"

void inicializar_lista(lista *l)
{
    l->inicio = (dupla*)malloc(sizeof(dupla));

    l->fim = l->inicio;                // Inicio e fim apontam para o mesmo lugar
    l->inicio->prox = l->inicio->ant = NULL; // Prox e ant vazias

    l->tam = 0;
}

bool vazia_lista(lista *l)
{
    if(l->inicio == l->fim) return true;
    else return false;
}

int tamanho_lista(lista l)
{
    return l.tam;
}

bool inserir_lista(lista *l, TIPO dado)
{
    dupla *nova = (dupla*)malloc( sizeof(dupla) );
    if(nova == NULL) return false;

    nova->dado = dado;
    nova->prox = nova->ant = NULL;

    if( vazia_lista(l) ){   // Se estiver vazia, insira no fim da lista
        l->fim->prox = nova;
        l->fim = nova;
        l->fim->ant = nova->ant;
    }else{                  // Senão, insira na  primeira posição livre
        dupla *temp = l->inicio;

        while( temp->prox != NULL ) temp = temp->prox;

        nova->prox = temp->prox;
        nova->ant = temp;

        if(temp->prox == NULL){
            l->fim->prox = nova;
            l->fim = nova;
        }else if(temp->ant == NULL){
            dupla *ant = l->inicio->prox;
            nova->prox = ant;
            l->inicio->prox = nova;
            l->inicio->ant = nova->ant;
        }else{
            temp->prox->ant = nova;
            temp->prox = nova;
        }
    }

    l->tam++;

    return true;
}

bool remover_lista(lista *l, int pos)
{
    if( (pos < 1) || (pos > l->tam) || (vazia_lista(l)) )
        return false;

    dupla *removida = l->inicio;

    if(pos == 1){   // Caso seja a primeira posição
        l->inicio = l->inicio->prox;

        if(l->inicio->prox == NULL) l->fim->prox = NULL;
        else l->inicio->ant = NULL;

    }else if(pos == l->tam){    // Caso seja a última posição
        removida = l->fim;
        l->fim->ant->prox = NULL;
        l->fim = l->fim->ant;
    }else{
        dupla *cel_ant = l->inicio->prox;

        for(int c = 0; c < pos-1; c++) cel_ant = cel_ant->prox;

        removida = cel_ant;
        cel_ant->prox->ant = removida->ant;
        cel_ant->ant->prox = removida->prox;
    }

    free(removida);
    l->tam--;

    return true;
}

TIPO pesquisar_lista(lista *l, TIPO chave)
{
    dupla *temp = l->inicio;

    while(!vazia_lista(l) && chave != temp->dado) temp = temp->prox;

    if(temp != NULL) return temp->dado;
    else return -1;
}

void limpar_lista(lista *l)
{
    while(!vazia_lista(l)) remover_lista(l, tamanho_lista(*l));

    free(l->inicio);
}
