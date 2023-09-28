#include <stdio.h>

int main () {
	
	int num, count=0;
	
	printf ("Digite um número\n");	
	scanf ("%d", &num);

	for(int i = num; i > 0 ; i--){
		if (num % i == 0) {
			count++;
		}
	}
	if (count == 2) {
		printf("O numero %d e primo.", num);
	} else {
		printf("O numero %d nao e primo.", num);
	}

	return 0;
}