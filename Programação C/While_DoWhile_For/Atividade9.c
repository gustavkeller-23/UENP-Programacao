#include <stdio.h>

int main () {
	int num, count=0;
	
	printf ("Digite um número\n");	
	scanf ("%d", &num);

	for(int i = num; i > 0 ; i--){
		if (num % i == 0)
			count++;
	}

	printf("O numero %d ", num);
	(count == 2) ? printf("e primo.") : printf("nao e primo.");
	
	return 0;
}