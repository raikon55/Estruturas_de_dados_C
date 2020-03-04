#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED

#include "lista.h"

/*
 * Função que cria a hash, recebe um número qualquer e um primo
 * para gerar a hash
 */
int hash(int num, const int mod);

/*
 * Iniciar o vetor de listas, usadas para tratar colisões
 */
void inicializar_hash(Lista *tabela[], const int mod);

/*
 * Inserir um elemento na tabela hash
 */
void inserir_hash(Lista *tabela[], int dado, const int mod);

/*
 * Pesquisa sequencial na na tabela hash
 */
int pesquisar_hash(Lista *tabela[], int chave, const int mod);

#endif
