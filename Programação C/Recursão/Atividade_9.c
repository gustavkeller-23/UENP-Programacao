
// 9. Implemente uma fun ̧c ̃ao recursiva que mostre o maior elemento de um array de inteiros. O
// prot ́otipo da fun ̧c ̃ao recursiva  ́e a seguinte:
// • int maiorElemento(int *vet, int tam) {...}

#include <stdio.h>
#include <stdlib.h>

int maiorElemento(int *vet, int tam, int maior, int i){
    if (i < tam){
        if (vet[i] > maior){
            maior = vet[i];
        }
        maiorElemento(vet, tam, maior, i+1);
    }
    if (i == tam){
        printf("%d", maior);
    }
    return 0;
}

int main(){

    int vet[10] = {2, 3, 4, 5, 2, 7, 14, 3, 5, 10};
    int maior = 0, i = 0;

    maiorElemento(vet, 10, maior, i);

    return 0;
}