#include <stdio.h>

float aritmetica(float x, float y){
	return (x + y)/2;
}
float ponderada(float x, float y){
	return 6*(x/10) + 4*(y/10);
}
float harmonica(float x, float y){
	return 2/((1/x)+(1/y));
}

int main () {
	
	float nota1, nota2;	
	char select;

	printf("Digite as duas notas: \n");
	scanf("%f%f", &nota1, &nota2);
	
	printf("Escolha o modo da média: \n 1. 'a' Média Aritmética\n 2. 'p' Média Ponderada\n 3. 'h' Média Harmonica\n");
	scanf(" %c", &select);

	if (select == 'a'){
		printf ("A media aritmetica e de %.2f", aritmetica(nota1,nota2));
	}
	if (select == 'p'){
		printf ("A media ponderada e de %.2f", ponderada(nota1,nota2));	
	}
	if (select == 'h'){
		printf ("A media harmonica e de %.2f", harmonica(nota1,nota2));	
	} 
	
	return 0;
}