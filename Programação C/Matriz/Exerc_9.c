/*Fa ̧ca um programa que receba as dimens ̃oes e os elementos de uma matriz, gere e exiba a
sua transposta.*/

#include <stdio.h>

int main() {
    
    int tamanho_mat;
    
    printf("Qual o tamanho da matriz? \n");
    scanf("%d", &tamanho_mat);
    
    int matriz[tamanho_mat][tamanho_mat];
    
    for(int i = 0; i < tamanho_mat; i++){
        for(int j = 0; j < tamanho_mat; j++){
            printf("Digite um valor: ");    
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int j = 0; j < tamanho_mat; j++){
        for(int i = 0; i < tamanho_mat; i++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}