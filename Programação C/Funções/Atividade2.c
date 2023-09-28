#include <stdio.h>

int primo (int x){	
	int count = 0;
	for (int i = 1; i <= x; i++){
		if (x%i == 0) {
			count++;
		}
	} 
	if (count == 2){
		return 1;
	}
	return 0;			
}

int main () {
	int num;

	printf("Qual número voce deseja analisar?\n");
	scanf("%d", &num);
	
	if (primo(num) == 1) {
		printf("o numero %d e primo", num);
	} else {
		printf("o numero %d nao e primo", num);
	}
	return 0;
}