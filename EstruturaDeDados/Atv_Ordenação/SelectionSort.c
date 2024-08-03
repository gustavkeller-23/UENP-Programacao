#include <stdio.h>
#include <stdlib.h>

void FuncaoOrdena(int *v, int sizeVetor){

    for (int i = 0; i < sizeVetor-1; i++){
        int min = v[i];
        for(int j = i; j < sizeVetor; j++){
            if (v[min] > v[j]){
                min = j;
            }
        }
        int aux = v[i];
        v[i] = v[min];
        v[min] = aux;
    }

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

    FuncaoOrdena(vetor, sizeVetor);    
    
    for (int i = 0; i < sizeVetor; i++){
        printf("%d - ", vetor[i]);
    }

    free(vetor);

    return 0;
}