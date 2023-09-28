/*Fa ̧ca um programa que leia uma matriz quadrada com dimens ̃ao definida pelo usu ́ario. Em
seguida, implemente uma fun ̧c ̃ao que calcule e mostre a soma dos elementos que est ̃ao acima
da diagonal principal.*/

#include <stdio.h>

int soma(int x, int y){
    return x+y;
}

int main() {
    
    int tamanho_mat;
    
    printf("Qual o tamanho da matriz? \n");
    scanf("%d", &tamanho_mat);
    
    int total = 0, matriz[tamanho_mat][tamanho_mat];
    
    for(int i = 0; i < tamanho_mat; i++){
        for(int j = 0; j < tamanho_mat; j++){
            printf("Digite um valor: ");    
            scanf("%d", &matriz[i][j]);
        }
    }
    
    
    for(int i = 0; i < tamanho_mat; i++){
        for(int j = 0; j < tamanho_mat; j++){
            if(j == i+1){
                total = soma(total,matriz[i][j]);
            }
        }
    }
    
    printf("A soma dos valores e: %d", total);

    return 0;
}