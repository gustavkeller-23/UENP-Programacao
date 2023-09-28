/*Fa ̧ca um programa que leia uma matriz de ordem 5 x 5, calcule e mostre a m ́edia dos
elementos da diagonal principal.*/

#include <stdio.h>

int main() {
    
    int total = 0, matriz[5][5];
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("Digite um valor: ");    
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int j=0;
    for(int i = 0; i < 5; i++){
        total = total + matriz[i][j];
        j++;
    }
    
    printf("A media da diagonal e: %d", (total/5));
    
    return 0;
}
