#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED

#include "lista.h"

/*
 * Header com a implementação da tabela hash em C
 * Deve ser modificado para cada tipo de dado
 * Buscando maneiras de evitar esse trabalho extra
 */

typedef int TIPO;

/*
 * Função que cria a hash, recebe um número qualquer e um primo
 * para gerar a hash
 */
int hash(int num, int mod);

/*
 * Iniciar o vetor de listas, usadas para tratar colisões
 */
void inicializar_hash(Lista *tabela[], int mod);

/*
 * Inserir um elemento na tabela hash
 */
void inserir_hash(Lista *tabela[], TIPO dado, int mod);

/*
 * Pesquisa sequencial na na tabela hash
 */
TIPO pesquisar_hash(Lista *tabela[], int chave, int mod);

#endif
