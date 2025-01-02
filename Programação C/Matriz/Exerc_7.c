/*Fa ̧ca um programa que leia uma matriz quadrada com valores inteiros com dimens ̃ao
definida pelo usu ́ario, leia uma constante x e, atrav ́es de uma fun ̧c ̃ao, multiplique os
elementos da diagonal secund ́aria da matriz com essa constante. Ao final, o programa
deve exibir a matriz resultante.*/

#include <stdio.h>

int main() {
    const int x = 10;
    int tamanho_mat;
    
    printf("Qual o tamanho da matriz? \n");
    scanf("%d", &tamanho_mat);
    
    int total=0, matriz[tamanho_mat][tamanho_mat];
    
    for(int i = 0; i < tamanho_mat; i++){
        for(int j = 0; j < tamanho_mat; j++){
            printf("Digite um valor: ");    
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int j = tamanho_mat-1;
    for(int i = 0; i < tamanho_mat; i++){
        matriz[i][j] = matriz[i][j] * x;
        j--;
    }
    
    for(int i = 0; i < tamanho_mat; i++){
        for(int j = 0; j < tamanho_mat; j++)
            printf("%d ", matriz[i][j]);    
        printf("\n");
    }

    return 0;
}