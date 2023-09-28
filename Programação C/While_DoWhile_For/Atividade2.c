#include <stdio.h>

int main () {

	int x = 0, y = 0;

	do {
	printf("Digite 2 números, onde o primeiro é menor que o segundo. \n");
	scanf("%d%d", &x , &y);
	} while (x > y);

	for (int i = x; i <= y; i++) {
		if (i%5 == 2 || i%5 == 3) {
			printf("O numero %d \n", i);
		}
	}	

	return 0;
}