/*Fa ̧ca um programa que leia uma matriz 3 X 7 com valores inteiros, calcule e mostre quantos
elementos dessa matriz est ̃ao no intervalo entre 10 e 50, desconsiderando os extremos. Em
seguida, gere uma segunda matriz com os elementos diferentes de 10 e 50, completando a
matriz com zero no lugar desses n ́umeros.*/

#include <stdio.h>

int main() {
    
    int matriz[3][7], total=0;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 7; j++){
            printf("Digite um valor: ");    
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 7; j++){
            if (matriz[i][j] > 10 && matriz[i][j] < 50){
                matriz[i][j] = 0;
                total++;
            }
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 7; j++){
            printf("%d ", matriz[i][j]);       
        }
        printf("\n");
    }

    return 0;
}