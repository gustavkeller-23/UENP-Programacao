/*Fa ̧ca um programa que leia uma matriz de ordem 3 x 5 e calcule a soma dos elementos de
cada coluna da matriz, armazenando os resultados em um vetor. Depois, o programa deve
exibir o vetor resultante.*/

#include <stdio.h>

int main() {
    int matriz[3][5], coluna=0;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            printf("Digite um valor: ");    
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int j = 0; j < 5; j++){
        coluna = 0;
        for(int i = 0; i < 3; i++)
            coluna = coluna + matriz[i][j];
        printf("Coluna %d: %d \n", (j+1), coluna);   
    }

    return 0;
}