#include "hash.h"

int hash(int num, int mod)
{
    return num % mod;
}

void inicializar_hash(Lista *tabela[], int mod)
{
    for(int i = 0; i < mod; i++){
        tabela[i] = (Lista*)malloc( sizeof(Lista) );
        inicializar_lista(tabela[i]);
    }
}

void inserir_hash(Lista *tabela[], TIPO dado, int mod)
{
    int pos = hash(dado, mod);
    inserir_lista(tabela[pos], dado);
}

TIPO pesquisar_hash(Lista *tabela[], int chave, int mod)
{
    int pos = hash(chave, mod);
    TIPO consulta = pesquisar_lista(tabela[pos], chave);

    if(consulta != -1) return consulta;
    else return -1;
}
