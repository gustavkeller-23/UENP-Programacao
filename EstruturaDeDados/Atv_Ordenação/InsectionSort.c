#include <stdio.h>
#include <stdlib.h>

void FuncaoOrdena(int *v, int sizeVetor){

    for (int i = 1; i < sizeVetor; i++){
        for(int j = i; j > 0; j--){
            if (v[j] < v[j-1]){
                int aux = v[j];
                v[j] = v[j-1];
                v[j-1] = aux;
            }
        }
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

    FuncaoOrdena(vetor, sizeVetor);    
    
    for (int i = 0; i < sizeVetor; i++){
        printf("%d - ", vetor[i]);
    }

    free(vetor);

    return 0;
}