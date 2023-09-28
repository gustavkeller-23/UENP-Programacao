/*Fa ̧ca um algoritmo que recebe o sal ́ario-base de um funcion ́ario, calcule e mostre seu sal ́ario
a receber, sabendo-se que ele tem gratifica ̧c ̃ao de R$ 50,00 e paga imposto de 12% sobre o
sal ́ario-base.*/

#include <stdio.h>

int main () {
    float salariobase, salariofinal;
    printf ("Quanto e seu salario-base?\n");
    scanf ("%f", &salariobase);
    salariofinal = salariobase - ((salariobase / 100) * 12) + 50;
    printf("seu salario e de %0.2f\n", salariofinal);
    return 0;
}