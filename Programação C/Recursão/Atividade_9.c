
// 9. Implemente uma fun ̧c ̃ao recursiva que mostre o maior elemento de um array de inteiros. O
// prot ́otipo da fun ̧c ̃ao recursiva  ́e a seguinte:
// • int maiorElemento(int *vet, int tam) {...}

#include <stdio.h>
#include <stdlib.h>

int maiorElemento(int *vet, int tam, int maior, int count){
    if (count < tam){
        if (vet[count] > maior)
            maior = vet[count];
        maior = maiorElemento(vet, tam, maior, count+1);
    }
    return maior;
}

int main(){
    int vet[10] = {2, 3, 4, 5, 2, 7, 14, 3, 5, 10};
    int maior = 0, count = 0;

    printf("%d", maiorElemento(vet, 10, maior, count));

    return 0;
}