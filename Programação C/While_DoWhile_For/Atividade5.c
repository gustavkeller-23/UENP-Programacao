#include <stdio.h>

int main () {
	int quant, num;
	float media;

	printf ("Quantos numeros voce ira digitar?\n");
	scanf ("%d", &quant);

	for (int i = 1; i <= quant; i++) {
		printf("Digite um valor:\n");
		scanf("%d", &num);
		media = media + num; 
	}
	printf("A media desses numeros e %f", (media/quant));
	
	return 0;
}