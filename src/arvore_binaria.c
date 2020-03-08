#include "arvore_binaria.h"

void inicializar_arvore(arv_bin_t *arvore)
{
    arvore->raiz = NULL;
    arvore->tam = 0;
}

bool inserir_arvore(arv_bin_t *arvore, int dado)
{
    node_t *temp = (node_t*)malloc(sizeof(node_t));
    temp->dado = dado;
    temp->pai = temp->esq = temp->dir = NULL;

    //Buscar o local onde inserir o novo nó
    if (arvore->raiz == NULL) {
        arvore->raiz = temp;
        arvore->tam++;
    } else {
        node_t *raiz = arvore->raiz;

        while (raiz!=NULL) {

            if (dado < raiz->dado) {

                if (raiz->esq == NULL) {
                    raiz->esq = temp;
                    temp->pai = raiz;
                    arvore->tam++;
                    return true;

                } else raiz = raiz->esq;

            } else if (dado > raiz->dado) {

                if (raiz->dir == NULL) {
                    raiz->dir = temp;
                    temp->pai = raiz;
                    arvore->tam++;
                    return true;

                } else raiz = raiz->dir;

            } else {
                free(temp);
                return false;
            }
        }
    }

    return true;
}

void in_ord(node_t *node)
{
    if(node != NULL){
        printf("%i ", node->dado);
        in_ord(node->esq);
        in_ord(node->dir);
    }
}

void pre_ord(node_t *node)
{
    if(node != NULL){
        pre_ord(node->esq);
        printf("%i ", node->dado);
        pre_ord(node->dir);
    }
}

void pos_ord(node_t *node)
{
    if(node != NULL){
        pos_ord(node->dir);
        printf("%i ", node->dado);
        pos_ord(node->esq);

    }
}

int pesquisar_arvore(arv_bin_t *arvore, int chave)
{
    node_t *temp = arvore->raiz;
    while(temp!=NULL){

        if(temp->dado == chave){
            return temp->dado;
        }else{
            if(chave < temp->dado) temp = temp->esq;
            else temp = temp->dir;
        }
    }
    return -1;
}

int antecessor_Node(node_t *node)
{

    if(node->dir == NULL) return node->dado;

    return antecessor_Node(node->dir);
}

bool remover_arvore(arv_bin_t *arvore, int chave)
{
    node_t *temp = arvore->raiz;

    // LOCALIZA O ELEMENTO A SER EXCLUIDO
    while(temp != NULL){
        if(temp->dado == chave){
            break;
        } else if(chave < temp->dado)
            temp = temp->esq;
        else
            temp = temp->dir;
    }

    if(temp == NULL){
        return false;
    }else{

        // CASO 1 - REMOVER FOLHA
        if(temp->esq == NULL && temp->dir == NULL){
            node_t *pai = temp->pai;

            if(pai == NULL)
                arvore->raiz = NULL;
            else
                if(chave < pai->dado)
                    pai->esq = NULL;
                else pai->dir = NULL;

            free(temp);
            arvore->tam--;
            return true;
        }else

        // CASO 2 - REMOVER Node COM UM FILHO
        if(temp->esq == NULL || temp->dir == NULL){

            node_t* pai = temp->pai;

            if(temp->esq!=NULL){
                if(pai == NULL){
                    arvore->raiz = temp->esq;
                    arvore->raiz->pai = NULL;
                }else
                if(chave < pai->dado){
                    pai->esq = temp->esq;
                    temp->esq->pai = pai;
                }else{
                    pai->dir = temp->esq;
                    temp->esq->pai = pai;
                }
                free(temp);
                arvore->tam--;
                return true;
            }else{

                if(pai == NULL){
                    arvore->raiz = temp->dir;
                    arvore->raiz->pai = NULL;

                }else
                if(chave < pai->dado){
                    pai->esq = temp->dir;
                    temp->dir->pai = pai;
                }else{
                    pai->dir = temp->dir;
                    temp->dir->pai = pai;
                }
                free(temp);
                arvore->tam--;
                return true;
            }

        }else{ // CASO 3 - Node COM 2 FILHOS

            int Ant = antecessor_Node(temp->esq);
            // REMOVER O ELEMENTO ANTECESSOR
            remover_arvore(arvore,Ant);
            temp->dado = Ant;

        }
    }
    return false;
}
