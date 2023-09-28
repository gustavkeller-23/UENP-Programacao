#include <stdio.h>

int main () {

	int idade = 1, menores = 0, maiores = 0;

	while (idade != 0) {
		printf("Digite a idade da pessoa\n");
		scanf ("%d", &idade);

		if (idade > 30){
			maiores++;
        }
		if (idade < 18 && idade > 0){
			menores++;
		}
	}

	printf ("Existem %d pessoas menores de 18 anos\n", menores);
	printf ("Existem %d pessoas maiores de 30 anos\n", maiores);

	return 0;
}