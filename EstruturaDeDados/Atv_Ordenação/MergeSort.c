#include <stdio.h>
#include <stdlib.h>

void FuncaoMerge(int *v, int inicio, int fim){
    if (inicio < fim) {
        int mid = (inicio+fim)/2;
        FuncaoMerge(v, inicio, mid);
        FuncaoMerge(v, mid+1, fim);
        Merge(v, inicio, mid, fim);
    }
}

void Merge(int *v, int inicio, int mid, int fim){
    int com1 = inicio, com2 = mid+1, comAux = 0, vetAux[fim-inicio+1];
    while(com1<=mid && com2<=fim){
        if(v[com1] <= v[com2]){
            vetAux[comAux] = v[com1];
            com1++;
        }else{
            vetAux[comAux] = v[com2];
            com2++; 
        }
        comAux++; 
    }

    while(com1<=mid){ //Caso ainda haja elementos na primeira metade
        vetAux[comAux] = v[com1];
        comAux++;
        com1++; 
    }
    
    while(com2<=fim){ //Caso ainda haja elementos na segunda metade
        vetAux[comAux] = v[com2];
        comAux++;
        com2++; 
    }

    for(comAux=inicio;comAux<=fim;comAux++){ //Move os elementos de volta para o vetor original
        v[comAux] = vetAux[comAux-inicio];
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

    FuncaoMerge(vetor, 0, sizeVetor);    
    
    for (int i = 0; i < sizeVetor; i++){
        printf("%d - ", vetor[i]);
    }

    free(vetor);

    return 0;
}