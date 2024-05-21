/* Faça um programa utilizando struct e malloc, que leia a informação do raio de n
círculos e calcule a circunferência e área. Circunferência = 2*pi*r , Área = pi*r */

#include <stdio.h>
#include <stdlib.h>

const float PI = 3.14;

typedef struct Circulos{
    float raio;
    float circunferencia;
    float area;
}Circulos;

int main(){

    int num_circulos;
    float raios;

    printf("Qual o numero de circulos?\n");
    scanf("%d", &num_circulos);

    Circulos *circulos;

    circulos = (Circulos *) malloc(num_circulos * sizeof(Circulos));

    for (int i = 0; i < num_circulos; i++){
        printf("Qual a medida do raio do circulo?\n");
        scanf("%f", &raios);
        
        circulos[i].raio = raios;
        circulos[i].circunferencia = 2*PI*raios;
        circulos[i].area = PI*(raios*raios);
    }
    
    for (int i = 0; i < num_circulos; i++){
        printf(" --- Circulo %d --- \n   Raio: %.2f\n   Circunferencia: %.2f\n    Area: %.2f \n\n", i+1, circulos[i].raio, circulos[i].circunferencia, circulos[i].area);
    }
    
    free(circulos);

    return 0;
}