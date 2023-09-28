#include <stdio.h>

int potencia(int x, int n){
	int num = 1;
	for(int i = 1; i <= n; i++){
		num = num * x;
	}
	return num;
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