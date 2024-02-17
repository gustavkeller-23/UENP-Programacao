
// 1. Implemente uma fun ̧c ̃ao recursiva que receba um n ́umero inteiro positivo par n e imprima
// todos os n ́umeros pares de 0 at ́e n em ordem decrescente.

#include <stdio.h>
#include <stdlib.h>

int imprimirPares(int numEscolhido){
    if (numEscolhido > 0){
        printf("%d ", numEscolhido);
        return imprimirPares(numEscolhido-2);
    }
    printf("0");
    return 0;
}

int main(){

    int num_escolhido;

    printf("Digite um numero: ");
    scanf("%d", &num_escolhido);

    imprimirPares(num_escolhido);

    return 0;
}