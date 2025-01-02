#include <stdio.h>

void divisores (int numero){
    int count = 0;
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0){
            printf ("O numero %d e divisivel por %d\n", numero, i);
            count++;
        }
    }
    printf ("Existem %d numeros pelo qual o numero %d e divisivel.", count, numero);
}

int main () {
    int numero;

    printf("Qual numero voce deseja ver por quais numeros ele e divisivel?\n");
    scanf("%d", &numero);
    
    divisores(numero);
    
	return 0;
}