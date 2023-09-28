/*Fa ̧ca um programa que leia uma matriz 4 x 5, determine e mostre atrav ́es de uma fun ̧c ̃ao
o menor elemento dessa matriz.*/

#include <stdio.h>

int menor(int x, int y){
    if (x < y){
        return x;
    }
    return y;
}

int main() {
    
    int menor_val = 10000, matriz[4][5];
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            printf("Digite um valor: ");    
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            menor_val = menor(menor_val, matriz[i][j]);
        }
    }
    
    printf("O menor valor é: %d", menor_val);
    
    return 0;
}