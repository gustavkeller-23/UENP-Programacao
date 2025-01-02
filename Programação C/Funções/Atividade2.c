#include <stdio.h>

int primo (int numero){	
	int count = 0;
	for (int i = 1; i <= numero; i++){
		if (numero%i == 0)
			count++;
		if (count > 2)
			return 0;
	} 
	if (count == 2)
		return 1;
	return 0;			
}

int main () {
	int num;

	printf("Qual número voce deseja analisar?\n");
	scanf("%d", &num);
	
	(primo(num)) ? printf("o numero %d e primo", num) : printf("o numero %d nao e primo", num);
	return 0;
}