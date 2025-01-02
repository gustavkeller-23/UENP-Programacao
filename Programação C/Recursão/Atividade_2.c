
// 2. Altere a fun ̧c ̃ao recursiva do exerc ́ıcio 1 de modo que o programa imprima todos os n ́umeros
// pares de 0 at ́e n em ordem crescente.

#include <stdio.h>
#include <stdlib.h>

void imprimirPares(int num_escolhido){
    if (num_escolhido != 0){
        imprimirPares(num_escolhido-2);
        printf("%d ", num_escolhido);
        return;
    }
    printf("0 ");
    return;
}

int main(){
    int num_escolhido = 0;

    printf("Digite um numero: ");
    scanf("%d", &num_escolhido);

    imprimirPares(num_escolhido);

    return 0;
}
