
// 5. Implemente uma fun ̧c ̃ao recursiva que receba dois n ́umeros inteiros x e n e calcule o valor
// de x^n.

#include <stdio.h>
#include <stdlib.h>

int potencia(int numero1, int numero2, int contador, int total){
    contador += 1;
    if(contador <= numero2){
        total = total * numero1;
        total = potencia(numero1, numero2, contador, total);
    }
    return total;
}

int main(){

    int num1, num2, count = 1, val = 0;

    printf("Digite 2 numeros: ");
    scanf(" %d %d", &num1, &num2);

    val = num1;

    val = potencia(num1, num2, count, val);

    printf("A potencia de %d^%d deu %d", num1, num2, val);

    return 0;
}
