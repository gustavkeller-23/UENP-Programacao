#include <stdio.h>

int main () {
	int num;
	float soma = 0;

	do {	
	printf("Digite um número\n");
	scanf("%d", &num);
	} while (num <= 0);

	for(int i = 1; i <= num; i++) {
	    soma = soma + ((float)1/i);
	}

	printf("A soma da %f", soma);
	return 0;
}