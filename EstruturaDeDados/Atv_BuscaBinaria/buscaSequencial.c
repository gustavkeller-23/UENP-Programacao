#include <stdio.h>
#include <stdlib.h>

int FuncaoBusca(int *v, int sizeVetor, int val){
    for(int i = 0; i < sizeVetor; i++){
        if(v[i] == val){
            return i;
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