#include "search.h"

TIPO pesquisa_seq(TIPO dado[], int chave, unsigned int tam)
{
    TIPO resul = -1;

    for(int c = 0; c < tam; c++){
        if(dado[c] == chave){
            resul = dado[c];
            return resul;
        }
    }

    return resul;
}

TIPO pesquisa_bin(TIPO dado[], int chave, unsigned int tam)
{
    int inicio = 0, fim = (tam - 1), meio;
    TIPO resul = -1;

    while(inicio <= fim){
        meio = (inicio + fim) / 2;

        if(dado[meio] == chave)
            return dado[meio];
        else if(dado[meio] > chave)
            fim = meio - 1;
        else if(dado[meio] < chave)
            inicio = meio + 1;
    }

    return resul;
}
