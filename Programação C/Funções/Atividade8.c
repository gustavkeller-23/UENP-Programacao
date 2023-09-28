#include <stdio.h>

int divisores (int n){
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n%i == 0){
            printf ("O numero %d e divisivel por %d\n", n, i);
            count++;
        }
    }
    printf ("Existem %d numeros pelo qual o numero %d e divisivel.", count, n);
    return 0;
}

int main () {

    int numero;

    printf("Qual numero voce deseja ver por quais numeros ele e divisivel?\n");
    scanf("%d", &numero);
    
    divisores(numero);
    
	return 0;
}