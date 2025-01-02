/*Fa ̧ca um programa que receba uma matriz de inteiros de ordem 5 x 3 e verifique quais os
elementos da matriz s ̃ao m ́ultiplos de 3, armazenando esses elementos em um vetor. Depois,
o programa deve exibir o vetor resultante.*/

#include <stdio.h>

int main() {
    
    int x =0, matriz[5][3], mult[15];
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite um valor: ");    
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            if(matriz[i][j]%3 == 0){
                mult[x] = matriz[i][j];
                x++;
            }
        }
    }
    
    printf("Os Multiplos de 3 sao: \n");
    for(int y = 0; y < x; y++)
        printf("%d, ", mult[y]);
    
    return 0;
}
