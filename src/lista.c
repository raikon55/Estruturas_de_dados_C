#include "lista.h"

void inicializar_lista(lista *l)
{
    l->inicio = (dupla*)malloc(sizeof(dupla));

    l->inicio->prox = l->inicio->ant = NULL;        // Prox e ant vazias
    l->fim = l->inicio;                             // Inicio e fim apontam para o mesmo lugar

    l->tam = 0;
}

bool vazia_lista(lista *l)
{
    return (l->inicio == l->fim);
}

unsigned int tamanho_lista(lista l)
{
    return (l.tam);
}

bool inserir_lista(lista *l, TIPO registro)
{
    dupla *temp = (dupla*) malloc(sizeof(dupla));
    if(temp == NULL) return false;

    temp->registro = registro;
    temp->prox = NULL;

    l->fim->prox = temp;
    l->fim = temp;

    l->tam++;

    return true;
}

bool remover_lista(lista *l, int pos)
{

    if(pos < 1 || pos > l->tam)
        return false;

    dupla *CelAnt = l->inicio;

    for(int i = 0; i < pos-1; i++) CelAnt=CelAnt->prox;

    dupla *temp = CelAnt->prox;

    CelAnt->prox = temp->prox;

    free(temp);

    l->tam--;

    return true;
}

TIPO pesquisar_lista(lista l, TIPO chave)
{
    dupla *temp = l.inicio->prox;

    while(!vazia_lista(&l) && chave != temp->dado)
        temp = temp->prox;

    if(temp != NULL) return temp->dado;
    else return -1;

}

void limpar_lista(lista *l)
{
    while(tamanho_lista(*l) != 0)
        remover_lista(l, 1);
}

void deletar_lista(lista *l)
{
    while( tamanho_lista(*l) != 0)
        remover_lista(l, tamanho_lista(*l));

    free(l->inicio);
    free(l->fim);
}
