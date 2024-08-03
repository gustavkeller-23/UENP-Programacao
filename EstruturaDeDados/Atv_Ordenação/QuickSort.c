#include <stdio.h>
#include <stdlib.h>

void FuncaoQuick(int *v, int inicio, int fim){
    if(inicio < fim){
        // função particionar retorna o índice do pivô
        int pivo_indice = particiona(v, inicio, fim);

        // chamadas recursivas quick_sort
        FuncaoQuick(v, inicio, pivo_indice - 1);
        FuncaoQuick(v, pivo_indice + 1, fim);

    }
}


// particiona e retorna o índice do pivô
int particiona(int vet[], int inicio, int fim){
    int pivo, pivo_indice, i;
    pivo = vet[fim]; // o pivô é sempre o último elemento
    pivo_indice = inicio;
    for(i = inicio; i < fim; i++){
        // verifica se o elemento é <= ao pivô
        if(vet[i] <= pivo){
            troca(vet, i, pivo_indice); // realiza a troca
            pivo_indice++; // incrementa o pivo_indice
        }
    }
    troca(vet, pivo_indice, fim); // troca o pivô
    return pivo_indice; // retorna o índice do pivô
}

int main(){

    int *vetor, sizeVetor = 10, iteracoes, val = 15;
        
    vetor = (int *) malloc (sizeVetor * sizeof(int));
    int count = 0;
    for(int i = sizeVetor-1; i >= 0; i--, count++){
        vetor[count] = i;
    }

    for (int i = 0; i < sizeVetor; i++){
        printf("%d - ", vetor[i]);
    }
    printf("\n");

    FuncaoQuick(vetor, 0, sizeVetor);    
    
    for (int i = 0; i < sizeVetor; i++){
        printf("%d - ", vetor[i]);
    }

    free(vetor);

    return 0;
}