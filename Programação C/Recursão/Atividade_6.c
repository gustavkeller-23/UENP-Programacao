
// 6. Implemente uma fun ̧c ̃ao recursiva para calcular a soma dos elementos de um array. Por
// exemplo, se o array dado for:
// • int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
// a resposta deve ser 55

#include <stdio.h>
#include <stdlib.h>

int somarNumeros(int i, int *vet, int soma){
    if (i < 5){
        soma += vet[i];
        return somarNumeros(i+1, vet, soma);
    }
    printf("%d", soma);
    return 0;
}

int main(){
    int vet[5] = {3, 5, 10, 23, 1};
    int soma = 0, i = 0;

    somarNumeros(i, vet, soma);

    return 0;
}