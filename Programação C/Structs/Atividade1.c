
/*Dada a estrutura a seguir representando as coordenadas de um ponto no sistema cartesiano.
Implemente uma fun ̧c ̃ao que, dado dois pontos fornecidos pelo usu ́ario, calcule a distˆancia
entre eles.
struct Ponto {
float x ;
float y ;
} ;
O c ́alculo da distˆancia entre dois pontos  ́e dado por:
distancia = raiz((x1 - x2)^2 + (y1 - y2)^2)*/

#include <stdio.h>
#include <math.h>

struct Ponto{
	float x;
	float y;
};

void calculoDistancia(struct Ponto p1, struct Ponto p2) {
	float dist = sqrt(((p1.x - p2.x)*(p1.x - p2.x)) + ((p1.y - p2.y)*(p1.y - p2.y)));
	printf("\nA distancia entre esses dois pontos e: \n *--  %.2f  --*", dist);
}

void armazenarValores(struct Ponto *p1, struct Ponto *p2){
	printf("Defina o x e y do ponto 1: ");
	scanf("%f %f", &p1->x, &p1->y);

	printf("\nDefina o x do ponto 2: ");
	scanf("%f %f", &p2->x, &p2->y);
}

int main(){

	struct Ponto ponto1, ponto2;

	printf("\n*-- VAMOS ENCONTRAR A DIFERENCA ENTRE 2 PONTOS --*\n\n");

	armazenarValores(&ponto1, &ponto2);

	calculoDistancia(ponto1, ponto2);

	return 0;
}