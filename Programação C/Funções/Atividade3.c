#include <stdio.h>
#include <math.h>

float delta (int x, int y, int z){
	int valor;
	valor = sqrt(pow(y,2) - (4*x*z));
	if (valor < 0)
		return 1;
	if (valor == 0)
	    return 0;
	return valor;
}

int main () {
	int a, b, c;

	do {
		printf("Digite as letras da equacao: \n");
		scanf("%d%d%d", &a, &b, &c);
		if (a == 0)
			printf ("Essa equacao nao e do segundo grau.\nDigite outra equacao.\n");	
	} while (a == 0);

    
	if (delta(a,b,c) == 1) {
		printf ("Essa equacao nao tem raizes reais.\n");
	} else {
		printf ("as duas raizes possiveis sao %.2f, %.2f", ((-b) + delta(a,b,c))/(2*a), ((-b) - delta(a,b,c))/(2*a));
	}
	return 0;
}