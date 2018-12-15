#include "bynary_tree.h"

void inicializar_arvore(ArvBin *arvore){
    arvore->raiz = NULL;
    arvore->tam = 0;
}

void inserir_arvore(ArvBin *arvore, int dado){

    node *temp = (node*)malloc(sizeof(node)); // Criar um novo nó
    temp->dado = dado;
    temp->pai = temp->esq = temp->dir = NULL;

    //Buscar o local onde inserir o novo nó
    if(arvore->raiz == NULL){
        arvore->raiz = temp;
        arvore->tam++;
    }else{
        node *raiz = arvore->raiz;

        while(raiz!=NULL){

            if(dado < raiz->dado){
                if(raiz->esq == NULL){
                    raiz->esq = temp;
                    temp->pai = raiz;
                    arvore->tam++;
                    return true;
                }else
                    raiz = raiz->esq;
            }
            else if(dado > raiz->dado){
                if(raiz->dir == NULL){
                    raiz->dir = temp;
                    temp->pai = raiz;
                    arvore->tam++;
                    return true;
                }else
                    raiz = raiz->dir;
            }
            else{
                free(temp);
                return false;
            }
        }
    }
}

void in_ord(node *node){
    if(node != NULL){
        printf("%i ", node->dado);
        ImprimirEmOrdem(node->esq);
        ImprimirEmOrdem(node->dir);
    }
}

void pre_ord(node *node){
    if(node != NULL){
        ImprimirPreOrdem(node->esq);
        printf("%i ", node->dado);
        ImprimirPreOrdem(node->dir);
    }
}

void pos_ord(node *node){
    if(node != NULL){
        ImprimirPosOrdem(node->dir);
        printf("%i ", node->dado);
        ImprimirPosOrdem(node->esq);

    }
}

int pesquisar_arvore(ArvBin *arvore, int chave,
              int &cont){
    cont = 0;
    node *temp = arvore->raiz;
    while(temp!=NULL){

        cont++;

        if(temp->dado == chave){
            return temp->dado;
        }else{

            if(chave < temp->dado)
                temp = temp->esq;
            else
                temp = temp->dir;
        }
    }
    return -1;
}

int altura_arvore(node *node){

    if(node == NULL)
        return 0;

    return 1 + std::max(Altura(node->esq),
                        Altura(node->dir));
}

int antecessor_node(node *node){

    if(node->dir == NULL)
        return node->dado;

    return Antecessor(node->dir);
}

bool remover_arvore(ArvBin *arvore, int chave){

    node *temp = arvore->raiz;

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
            node *pai = temp->pai;

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

        // CASO 2 - REMOVER node COM UM FILHO
        if(temp->esq == NULL || temp->dir == NULL){

            node* pai = temp->pai;

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

        }else{ // CASO 3 - node COM 2 FILHOS

            int Ant = Antecessor(temp->esq);
            // REMOVER O ELEMENTO ANTECESSOR
            Remover(arvore,Ant);
            temp->dado = Ant;

        }
    }
}
