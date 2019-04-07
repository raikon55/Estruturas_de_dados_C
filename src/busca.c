#include "busca.h"

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

TIPO pesquisa_bin(TIPO dado[], int chave, unsigned int inicio, unsigned int fim)
{
    int meio = (inicio + fim) / 2;

    while ( inicio <= fim ){
        if(dado[meio] == chave)
            return dado[meio];
        else if(dado[meio] > chave)
            return pesquisa_bin(dado, chave, inicio, meio-1);
        else if(dado[meio] < chave)
            return pesquisa_bin(dado, chave, meio+1, fim);
    }

    return -1;
}
