#include "ordenacao.h"

void bolha(int vet[], int tamanho)
{
    int tmp;

    for(int i = 0; i < tamanho; i++){

        for(int j = i+1; j < tamanho; j++){

            if(vet[j] < vet[i]){
                tmp = vet[i];
                vet[i] = vet[j];
                vet[j] = tmp;
            }
        }
    }
}

void insercao(int vet[], int tamanho)
{
    int i, j, tmp;

    for(i = 1; i < tamanho; i++){
        tmp = vet[i];

        for(j = i-1; j >= 0 && tmp < vet[j]; j--){}
            vet[j+1] = vet[j];

        vet[j+1] = tmp;
    }
}

void quick(int vet[], int esquerda, int direita)
{
    int i, j, pivo, temp;

    i = esquerda;
    j = direita;
    pivo = vet[(esquerda + direita) / 2];

    while(i <= j) {
        while(vet[i] < pivo && i < direita) {
            i++;
        }

        while(vet[j] > pivo && j > esquerda) {
            j--;
        }

        if(i <= j) {
            temp = vet[i];
            vet[i] = vet[j];
            vet[j] = temp;
            i++;
            j--;
        }
    }

    if(j > esquerda) {
        quick(vet, esquerda, j);
    }

    if(i < direita) {
        quick(vet, i, direita);
    }

}

void selecao(int vet[], int tamanho)
{
   int i, j, min, x;

    for (i = 0; i < tamanho-1; i++) {
        min = i;

        for (j = i+1; j < tamanho; j++)
            if (vet[j] < vet[min])
                min = j;

        x = vet[i];
        vet[i] = vet[min];
        vet[min] = x;
    }

}

void  merge(int vet[], int inicio, int fim)
{
    if(inicio < fim){
        int meio = (inicio + fim) / 2;
        merge(vet, inicio, meio);
        merge(vet, meio + 1, fim);
        merging(vet, inicio, meio, fim);
    }
}

void merging(int vet[], int inicio, int meio, int fim)
{
    int n1, n2, i, j, k;
    n1 = meio - inicio + 1;
    n2 = fim - meio;

    int *vet1 = (int*)calloc( n1+1, sizeof(int) );
    int *vet2 = (int*)calloc( n2+1, sizeof(int) );

    for(i = 0; i < n1; i++)
        vet1[i] = vet[inicio+i];
    
    for(j=0; j < n2; j++)
        vet2[j] = vet[meio+j+1];

    vet1[i] = INT_MAX;
    vet2[j] = INT_MAX;

    i = 0;
    j = 0;

    for(k = inicio; k <= fim; k++){
        if(vet1[i] <= vet2[j])
            vet[k] = vet1[i++];
        else
            vet[k] = vet2[j++];
    }

    free(vet1);
    free(vet2);
}
