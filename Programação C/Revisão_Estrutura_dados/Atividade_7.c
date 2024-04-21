/*Faça um programa que leia uma matriz quadrada de dimensão n de distâncias
e determine a maior e menor distância. Use calloc.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int tamanhoMatriz;

    printf("Qual o tamanho da sua matriz?\n");
    scanf("%d", &tamanhoMatriz);

    float **distancias = (float **) calloc (tamanhoMatriz, sizeof(float));
    for (int i = 0; i < tamanhoMatriz; i++){
        distancias[i] = (float *) calloc (tamanhoMatriz, sizeof(float));
    }

    for (int i = 0; i < tamanhoMatriz; i++){
        for (int j = 0; j < tamanhoMatriz; j++){
            printf("Digite uma distancia: ");
            scanf("%f", &distancias[i][j]);
        }
    }

    float maiorValor=0, menorValor = 1000; 
    for (int i = 0; i < tamanhoMatriz; i++){
        for (int j = 0; j < tamanhoMatriz; j++){
            if (distancias[i][j] < menorValor){
                menorValor = distancias[i][j];
            }
            if (distancias[i][j] > maiorValor){
                maiorValor = distancias[i][j];
            }
        }
    }
    
    for (int i = 0; i < tamanhoMatriz; i++){
        free(distancias[i]);
    }
    free(distancias);

    printf("Menor distancia: %f\nMaior distancia: %f", menorValor, maiorValor);

    return 0;
}