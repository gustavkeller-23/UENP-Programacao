
// 4. A multiplica ̧c ̃ao de dois n ́umeros inteiros pode ser feita atrav ́es de somas sucessivas. Implemente
// uma fun ̧c ̃ao recursiva que calcule a multiplica ̧c ̃ao de dois inteiros usando essa ideia.

#include <stdio.h>
#include <stdlib.h>

int multiplicacao(int numero1, int numero2, int contador){
    contador += 1;
    if(contador <= numero2)
        return numero1 + multiplicacao(numero1, numero2, contador);
    return numero1;
}

int main(){

    int num1, num2, count = 1;

    printf("Digite 2 numeros: ");
    scanf(" %d %d", &num1, &num2);

    printf("A multiplicacao deu %d", multiplicacao(num1, num2, count));

    return 0;
}