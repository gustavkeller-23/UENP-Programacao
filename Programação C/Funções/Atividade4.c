#include <stdio.h>

int potencia(int numero, int potencia){
	int resultado = 1;
	for(int i = 1; i <= potencia; i++){
		resultado = resultado * numero;
	}
	return resultado;
}

int main () {
	int numero, numero_elev;

	printf("Digite um numero: \n");
	scanf("%d", &numero);
	printf("Por qual numero voce deseja eleva-lo: \n");
	scanf("%d", &numero_elev);

	printf("O numero %d elevado a %d é igual a %d.\n", numero, numero_elev, potencia(numero, numero_elev));	

	return 0;
}