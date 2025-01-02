
// 7. Modifique o exerc ́ıcio 1 de modo que a fun ̧c ̃ao recursiva calcule a soma dos elementos do
// array come ̧cando do  ́ultimo elemento at ́e o primeiro.

#include <stdio.h>
#include <stdlib.h>

int somarNumeros(int count, int *vet, int soma){
    if (count <= 4)
        return vet[count] + somarNumeros(count+1, vet, soma);
    return vet[count];
}

int main(){

    int vet[5] = {3, 5, 10, 23, 1};
    int soma = 0, count = 0;

    printf("%d", somarNumeros(count, vet, soma));

    return 0;
}