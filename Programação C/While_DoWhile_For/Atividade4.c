#include <stdio.h>

int main () {

	int n = 1, i =1;
	float soma = 0;	

	for(i; i <= 99; i++){
		soma = soma + ((float)n/i);
		n+=2;
	}
	
	printf ("%f", soma);

	return 0;
}