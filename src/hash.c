#include "hash.h"

int hash(int num, const int mod)
{
    return num % mod;
}

void inicializar_hash(Lista *tabela[], const int mod)
{
    for(int i = 0; i < mod; i++){
        tabela[i] = (Lista*)malloc( sizeof(Lista) );
        inicializar_lista(tabela[i]);
    }
}

void inserir_hash(Lista *tabela[], TIPO dado, const int mod)
{
    int pos = hash(dado, mod);
    inserir_lista(tabela[pos], dado);
}

TIPO pesquisar_hash(Lista *tabela[], int chave, const int mod)
{
    int pos = hash(chave, mod);
    TIPO consulta = pesquisar_lista(tabela[pos], chave);

    return consulta;
}
