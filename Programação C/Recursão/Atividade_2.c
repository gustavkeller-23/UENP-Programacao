
// 2. Altere a fun ̧c ̃ao recursiva do exerc ́ıcio 1 de modo que o programa imprima todos os n ́umeros
// pares de 0 at ́e n em ordem crescente.

#include <stdio.h>
#include <stdlib.h>

int imprimirPares(int num_inicio, int num_limite){
    if (num_limite > num_inicio){
        printf("%d ", num_inicio);
        return imprimirPares(num_inicio+2, num_limite);
    }
    printf("%d", num_inicio);
    return 0;
}

int main(){

    int num_limite;
    int num_inicio = 0;

    printf("Digite um numero: ");
    scanf("%d", &num_limite);

    imprimirPares(num_inicio, num_limite);

    return 0;
}
