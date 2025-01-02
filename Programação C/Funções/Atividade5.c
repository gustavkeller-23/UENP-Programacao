#include <stdio.h>

float aritmetica(float nota1, float nota2){
	return (nota1 + nota2)/2;
}

float ponderada(float nota1, float nota2){
	return 6*(nota1/10) + 4*(nota2/10);
}

float harmonica(float nota1, float nota2){
	return 2/((1/nota1)+(1/nota2));
}

int main () {
	float nota1, nota2;	
	char select;

	printf("Digite as duas notas: \n");
	scanf("%f%f", &nota1, &nota2);
	
	printf("Escolha o modo da média: \n 1. 'a' Média Aritmética\n 2. 'p' Média Ponderada\n 3. 'h' Média Harmonica\n");
	scanf(" %c", &select);

	switch (select){
		case 'a':
			printf ("A media aritmetica e de %.2f", aritmetica(nota1,nota2)); break;
		case 'p':
			printf ("A media ponderada e de %.2f", ponderada(nota1,nota2));	break;
		case 'h':
			printf ("A media harmonica e de %.2f", harmonica(nota1,nota2));	break;
		default:
			break;
	}
	
	return 0;
}