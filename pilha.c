#include "pilha.h"

void inicializar_pilha(pilha *p){
    p->topo = NULL;     // Sentinela
    p->tam = 0;
}

short vazia_pilha(pilha *p){
    if(p->topo == NULL) return true;
    else return false;
}

void empilhar(pilha *p, TIPO dado){

    celula *temp = (celula*)malloc(sizeof(celula)); // Novo sentinela
    strcpy(temp->word, dado);
    temp->prox = p->topo;

    p->topo = temp;     // Atualiza o topo e a sentinela
    p->tam++;
}

TIPO desempilhar(pilha *p){

    if(Vazia(p))    // Se estiver vazia, returne
        return '\0';

    TIPO dado = p->topo->word;  // Remove o dado no topo

    celula *temp = p->topo;     // Ponteiro para o topo
    p->topo = p->topo->prox;    // Atualiza a proxima celula como topo
    free(temp);                 // Libera o antigo topo

    p->tam--;
    return dado;
}


short pesquisar_pilha(pilha *p, TIPO dado){
    for(celula *temp = p->topo; temp != NULL; temp=temp->prox){
        if(strstr(temp->word, word)){
            return true;
        }
    }

    return false;
}

void limpar_pilha(pilha *p){
    // Esvazia a pilha
    while(!Vazia(p))
        Desempilhar(p);
}
