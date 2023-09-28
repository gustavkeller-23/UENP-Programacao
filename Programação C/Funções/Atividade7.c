#include <stdio.h>

int tabuada (int n){
    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, (n*i));
    }
    return 0;
}

int main () {

    int numero;

    printf ("Qual numero vc deseja fazer a tabuada?\n");
    scanf ("%d", &numero);

    tabuada(numero);

    return 0;
}