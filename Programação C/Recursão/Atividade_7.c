
// 7. Modifique o exerc ́ıcio 1 de modo que a fun ̧c ̃ao recursiva calcule a soma dos elementos do
// array come ̧cando do  ́ultimo elemento at ́e o primeiro.

#include <stdio.h>
#include <stdlib.h>

int somarNumeros(int i, int *vet, int soma){
    if (i >= 0){
        soma += vet[i];
        return somarNumeros(i-1, vet, soma);
    }
    printf("%d", soma);
    return 0;
}

int main(){

    int vet[5] = {3, 5, 10, 23, 1};
    int soma = 0, i = 4;

    somarNumeros(i, vet, soma);

    return 0;
}