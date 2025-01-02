#include <stdio.h>

int main () {
    int x, y, z;
    printf ("Escreva 3 valores inteiros: ");
    scanf ("%d %d %d", &x, &y, &z);
    
    if (x < y && x < z)
        printf ("o menor numero = %d", x);
    else if (y < z)
        printf ("o menor numero = %d", y);
    else
        printf ("o menor numero = %d", z);

    return 0;
}