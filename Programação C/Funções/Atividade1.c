#include <stdio.h>

int area(int x, int y){
	return y * x;
}

int main (){
	
	int n, lado1, lado2;

	printf("Quantas areas voce pretende calcular?\n");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
		printf("Digite os lados da area: ");
		scanf("%d%d", &lado1, &lado2);

		printf("A area e %d\n", area(lado1, lado2));
	}
	return 0;
}