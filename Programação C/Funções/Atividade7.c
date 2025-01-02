#include <stdio.h>

void tabuada (int numero){
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", numero, i, (numero*i));
}

int main () {
    int numero;

    printf ("Qual numero vc deseja fazer a tabuada?\n");
    scanf ("%d", &numero);

    tabuada(numero);

    return 0;
}