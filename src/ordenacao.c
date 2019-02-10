void bolha(int* a, int tamanho)
{
    int tmp;

    for(int i = 0; i < tamanho; i++){

        for(int j = i+1; j < tamanho; j++){

            if(a[j].room_id < a[i].room_id){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

void insercao(int* a, int tamanho)
{
    int tmp;

    for(int i = 1; i < tamanho; i++){
        tmp = a[i];

        for(int j = i-1; j >= 0 && tmp.room_id < a[j].room_id; j--)
            a[j+1] = a[j];

        a[j+1] = tmp;
    }
}

void quick(int* a, int esquerda, int direita)
{
    int i, j, pivo, temp;

    i = esquerda;
    j = direita;
    pivo = a[(esquerda + direita) / 2];

    while(i <= j) {
        while(a[i].room_id < pivo.room_id && i < direita) {
            i++;
        }

        while(a[j].room_id > pivo.room_id && j > esquerda) {
            j--;
        }

        if(i <= j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }

    if(j > esquerda) {
        quick(a, esquerda, j);
    }

    if(i < direita) {
        quick(a, i, direita);
    }

}

void selecao(int n, int* a)
{
   int i, j, min, x;

    for (i = 0; i < n-1; i++) {
        min = i;

        for (j = i+1; j < n; j++)
            if (a[j].room_id < a[min].room_id)
                min = j;

        x = a[i];
        a[i] = a[min];
        a[min] = x;
    }

}

void  merge(int* a, int inicio, int fim)
{
    if(inicio < fim){
        int meio = (inicio + fim) / 2;
        merge(a, inicio, meio);
        merge(a, meio + 1, fim);
        merging(a, inicio, meio, fim);
    }
}

void merging(int* a, int inicio, int meio, int fim)
{
    int n1, n2, i, j, k;
    n1 = meio - inicio + 1;
    n2 = fim - meio;

    int *vet1 = (int*)calloc( n1+1, sizeof(int) );
    int *vet2 = (int*)calloc( n2+1, sizeof(int) );

    for(i = 0; i < n1; i++)
        vet1[i] = a[inicio+i];
    for(j=0; j < n2; j++)
        vet2[j] = a[meio+j+1];

    vet1[i].room_id = INT_MAX;
    vet2[j].room_id = INT_MAX;

    i = 0;
    j = 0;

    for(k = inicio; k <= fim; k++){
        if(vet1[i].room_id <= vet2[j].room_id)
            a[k] = vet1[i++];
        else
            a[k] = vet2[j++];
    }

    free(vet1);
    free(vet2);
}