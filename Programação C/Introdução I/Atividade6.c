/*Fa ̧ca um programa que leia dois valores x e y e permute o conte ́udo das duas vari ́aveis,
ou seja, o valor de x ser armazenado em y e vice-versa. Ao final, mostre o conte ́udo das
vari ́aveis.*/

#include <stdio.h>

int main () {
    float x, y, temp;
    printf ("Digite o valor de x: ");
    scanf ("%f", &x);

    printf ("Digite o valor de y: ");
    scanf ("%f", &y);
    
    temp = x;
    x = y;
    y = temp;
    
    printf ("variavel x: %.2f, e a variavel y: %.2f", x, y);
    return 0;
}