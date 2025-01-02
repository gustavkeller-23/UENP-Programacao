#include <stdio.h>

int main () {
	int num_start = 0, num_end = 0;

	do {
		printf("Digite 2 números, onde o primeiro é menor que o segundo. \n");
		scanf("%d%d", &num_start , &num_end);
	} while (num_start > num_end);

	for (int i = num_start; i <= num_end; i++) {
		if (i%2 == 1)
			printf("O numero %d e impar \n", i);
	}	

	return 0;
}