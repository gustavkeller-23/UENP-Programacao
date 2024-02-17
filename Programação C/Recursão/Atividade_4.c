
// 4. A multiplica ̧c ̃ao de dois n ́umeros inteiros pode ser feita atrav ́es de somas sucessivas. Implemente
// uma fun ̧c ̃ao recursiva que calcule a multiplica ̧c ̃ao de dois inteiros usando essa ideia.

#include <stdio.h>
#include <stdlib.h>

int multiplicacao(int numero1, int numero2, int contador, int total){
    if(contador <= numero2){
        contador += 1;
        total = total + numero1;
        total = multiplicacao(numero1, numero2, contador, total);
    }
    return total;
}

int main(){

    int num1, num2, count = 1, val = 0;

    printf("Digite 2 numeros: ");
    scanf(" %d %d", &num1, &num2);

    val = multiplicacao(num1, num2, count, val);

    printf("A multiplicacao deu %d", val);

    return 0;
}