
// 5. Implemente uma fun ̧c ̃ao recursiva que receba dois n ́umeros inteiros x e n e calcule o valor
// de x^n.

#include <stdio.h>
#include <stdlib.h>

int potencia(int numero1, int numero2, int contador){
    contador += 1;
    if(contador <= numero2)
        return numero1 * potencia(numero1, numero2, contador);
    return numero1;
}

int main(){
    int num1, num2, count = 1;

    printf("Digite 2 numeros: ");
    scanf(" %d %d", &num1, &num2);

    printf("A potencia de %d^%d deu %d", num1, num2, potencia(num1, num2, count));

    return 0;
}
