#include <stdio.h>

int main () {

	int num, count = 0;
	float media;
	
	do {
	printf("Digite 1 número.\n");
	scanf("%d", &num);	
	
		if (num%7 == 0 && num >= 10 && num<=50) {
			count++;
			media = media + num;
		}
	} while (num != 0);
	printf("A media e de %.2f\n", (media/count));
	return 0;
}
