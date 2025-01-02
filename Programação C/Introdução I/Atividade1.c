#include <stdio.h>

#define PI 3.14

int main(){
	float raio, area, perimetro;
	
	printf ("Indique a medida do raio ");
	scanf ("%f", &raio);
	
	area = PI * (raio*raio);
	perimetro = 2 * PI * raio;
	
	printf("A area e %.2f e o perimetro e %.2f\n", area, perimetro);
	
	return 0;
}

