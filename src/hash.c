#include "hash.h"

int hash(int num, int mod)
{
    return num % mod;
}

void inicializar_hash(lista *tabela[], int mod)
{
    for(int i = 0; i < mod; i++){
        tabela[i] = (lista*)malloc( sizeof(lista) );
        inicializar_lista(tabela[i]);
    }
}

void inserir_hash(lista *tabela[], TIPO dado, int mod)
{
    int pos = hash(dado, mod);
    inserir_lista(tabela[pos], dado);
}

airbnb pesquisar_hash(lista *tabela[], int chave, int mod, int *acesso)
{
    int pos = hash(chave, mod);
    TIPO consulta = pesquisar_lista(tabela[pos], chave, acesso);

    if(consulta != -1) return consulta;
    else return -1;
}
