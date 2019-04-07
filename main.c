//#include "src/fila.h"
//#include "src/pilha.h"
//#include "src/search.h"
//#include "src/lista_adjacente.h"

/*
void exemplo_fila(void)
{
    // Declarar a fila e inicializar
    fila exemplo;
    inicializar_fila(&exemplo);

    // Checar se está vazia e o tamanho
    bool vazia = vazia_fila(&exemplo);
    printf("Vazia? %i\nTamanho -> %i\n", vazia, tamanho_fila(exemplo));

    // Inserir dados na fila
    inserir_fila(&exemplo, 0);
    inserir_fila(&exemplo, 1);
    inserir_fila(&exemplo, 2);
    inserir_fila(&exemplo, 3);

    // Checar se os dados foram inseridos corretamente
    vazia = vazia_fila(&exemplo);
    printf("Vazia? %i\nTamanho -> %i\n", vazia, tamanho_fila(exemplo));

    // Mostrar os dados e limpar a fila
    while(tamanho_fila(exemplo) != 0) { TIPO dado = remover_fila(&exemplo); printf("Removido %i\n", dado); }
    vazia = vazia_fila(&exemplo);
    printf("Vazia? %i\n", vazia);
    limpar_fila(&exemplo);
}
*/

/*
void exemplo_pilha(void)
{
    // Declarar e inicializar pilha
    pilha exemplo;
    inicializar_pilha(&exemplo);

    // Checar se está vazia e o tamanho
    bool vazia = vazia_pilha(&exemplo);
    printf("Vazia? %i\nTamanho -> %i\n", vazia, tamanho_pilha(exemplo));

    // Inserir dados na pilha
    empilhar(&exemplo, 0);
    empilhar(&exemplo, 1);
    empilhar(&exemplo, 2);
    empilhar(&exemplo, 3);

    // Checar se está vazia e o tamanho
    vazia = vazia_pilha(&exemplo);
    printf("Vazia? %i\nTamanho -> %i\n", vazia, tamanho_pilha(exemplo));

    // Mostrar os dados e limpar a pilha
    while(tamanho_pilha(exemplo) != 0) printf("Removido %i\n", desempilhar(&exemplo));
    limpar_pilha(&exemplo);
}
*/

/*
void exemplo_pesquisa(void)
{
    TIPO exemplo[10];
    for(int i = 0; i < 10; i++) exemplo[i] = i;
    printf("Binaria -> %i\n", pesquisa_bin(exemplo, 5, 10));
    printf("Sequencial -> %i\n", pesquisa_seq(exemplo, 5, 10));
}
*/

/*
void exemplo_lista(void)
{
    lista exemplo;
    inicializar_lista(&exemplo);
    bool vazia = vazia_lista(&exemplo);
    printf("Vazia? %i\nTamanho -> %i\n", vazia, tamanho_lista(exemplo));

    for(int i = 0; i < 4; i++) inserir_lista(&exemplo, i);

    TIPO tmp = pesquisar_lista(&exemplo, 5);
    if(tmp == -1) puts("Elemento não encontrado");
    printf("Elemento -> %i\n", tmp);
    printf("Vazia? %i\nTamanho -> %i\n", vazia, tamanho_lista(exemplo));

    limpar_lista(&exemplo);
}
*/

/*
void exemplo_hash(void)
{
    const int mod = 7;

    Lista *temp[mod];
    inicializar_hash(temp, mod);

    inserir_hash(temp, 1, mod);
    inserir_hash(temp, 13, mod);
    inserir_hash(temp, 14, mod);
    inserir_hash(temp, 21, mod);

    printf("%i\n", pesquisar_hash(temp, 1, mod));
    printf("%i\n", pesquisar_hash(temp, 13, mod));
    printf("%i\n", pesquisar_hash(temp, 14, mod));
    printf("%i\n", pesquisar_hash(temp, 21, mod));
    printf("%i\n", pesquisar_hash(temp, 15, mod));
}
*/

/*
void exemplo_lista_adjacente(void)
{
    Grafo *graph = NULL;

    graph = iniciar_grafo(7);
    criar_aresta(graph, 1, 3);
    criar_aresta(graph, 3, 1);
    criar_aresta(graph, 2, 3);
    criar_aresta(graph, 6, 4);
    criar_aresta(graph, 6, 3);
    criar_aresta(graph, 6, 2);
    criar_aresta(graph, 6, 1);

    show(graph);
}
*/

int main(void)
{
    //exemplo_lista_adjacente();
    //exemplo_hash();
    //exemplo_fila();
    //exemplo_pilha();
    //exemplo_pesquisa();
    //exemplo_lista();
    return 0;
}
