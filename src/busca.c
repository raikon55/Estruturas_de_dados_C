#include "busca.h"

int pesquisa_seq(int dado[], int chave, unsigned int tam)
{
    int resul = -1;

    for(unsigned c = 0; c < tam; c++){
        if(dado[c] == chave){
            resul = dado[c];
            return resul;
        }
    }

    return resul;
}

int pesquisa_bin(int dado[], int chave, unsigned int inicio, unsigned int fim)
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
