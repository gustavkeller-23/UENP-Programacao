#include <stdio.h>

int main () {
	int n = 1;
	float soma = 0;	

	for(int i = 1; i <= 99; i++){
		soma = soma + ((float)n/i);
		n += 2;
	}
	printf ("%.2f", soma);

	return 0;
}