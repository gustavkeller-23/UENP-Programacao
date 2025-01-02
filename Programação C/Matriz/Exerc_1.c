/*Fa ̧ca um programa que leia uma matriz de ordem 5 x 3, calcule e mostre a soma de cada
linha da matriz.*/

#include <stdio.h>

int main() {
    
    int matriz[5][3], linha=0;
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite um valor: ");    
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int i = 0; i < 5; i++){
        linha = 0;
        for(int j = 0; j < 3; j++)
            linha = linha + matriz[i][j];
        printf("Linha %d: %d \n", (i+1), linha);   
    }

    return 0;
}