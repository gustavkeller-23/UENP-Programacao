/*Faça um programa que leia n pontos (x, y), e calcule o ponto médio (xm, ym)
e apresente a distância do ponto mais próximo do ponto médio.
Use struct e calloc*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Ponto{
    float x;
    float y;
} Ponto;

int main(){

    int num_pontos, pontoMenorDistancia;
    float pontoMedioX=0, pontoMedioY=0, distanciaPontos, menorDistancia=1000;

    printf("Qual o numero de pontos a marcar?\n");
    scanf("%d", &num_pontos);

    Ponto *pontos = (Ponto *) calloc (num_pontos, sizeof(Ponto));

    for (int i = 0; i < num_pontos; i++){
        printf("Diga o valor x do ponto: ");
        scanf("%f", &pontos[i].x);
        printf("Diga o valor y do ponto: ");
        scanf("%f", &pontos[i].y);

        pontoMedioX += pontos[i].x;
        pontoMedioY += pontos[i].y;
    }
    
    pontoMedioX = pontoMedioX / num_pontos;
    pontoMedioY = pontoMedioY / num_pontos;
    
    for (int i = 0; i < num_pontos; i++){
        
        distanciaPontos = sqrt( pow((pontoMedioX - pontos[i].x), 2) + pow((pontoMedioY - pontos[i].y), 2));

        if (menorDistancia > distanciaPontos){
            menorDistancia = distanciaPontos;
            pontoMenorDistancia = i;
        }
    }

    printf("O ponto medio e (%.2f, %.2f)\n O ponto de menor distancia e (%.2f, %.2f)\n Com uma distancia de: %.2f", pontoMedioX, pontoMedioY, pontos[pontoMenorDistancia].x, pontos[pontoMenorDistancia].y, menorDistancia);

    free(pontos);

    return 0;
}