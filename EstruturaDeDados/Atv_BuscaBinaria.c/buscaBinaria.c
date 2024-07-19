#include <stdio.h>
#include <stdlib.h>

int FuncaoBusca(int *v, int sizeVetor, int val){
    int init = 0, end = sizeVetor-1, mid;
    while(init < end){
        mid = (init + end)/2;
        if (val == v[mid]){
            return mid;
        } else if (val < v[mid]){
            end = mid - 1;
        } else {
            init = mid + 1;
        }
    }
    return -1;
}

int main(){

    int *vetor, sizeVetor = 100, iteracoes, val = 15;
        
    vetor = (int *) malloc (sizeVetor * sizeof(int));
    for(int i = 0; i < sizeVetor; i++){
        vetor[i] = i;
    }

    iteracoes = FuncaoBusca(vetor, sizeVetor, val);    
    
    free(vetor);
    
    printf("Posicao do vetor: %d", iteracoes);

    return 0;
}