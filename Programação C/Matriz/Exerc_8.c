/*Fa ̧ca um programa que leia uma matriz quadrada de tamanho qualquer, calcule e mostre
por meio de uma fun ̧c ̃ao, a soma dos elementos que n ̃ao pertencem a nenhuma das diagonais
– principal e secund ́aria.*/

#include <stdio.h>

int main() {
    int tamanho_mat, soma=0;
    
    printf("Qual o tamanho da matriz? \n");
    scanf("%d", &tamanho_mat);
    
    int matriz[tamanho_mat][tamanho_mat];
    
    for(int i = 0; i < tamanho_mat; i++){
        for(int j = 0; j < tamanho_mat; j++){
            printf("Digite um valor: ");    
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int i = 0; i < tamanho_mat; i++){
        for(int j = 0; j < tamanho_mat; j++){
            if (j!=i && j+i+1 != tamanho_mat)
                soma = soma + matriz[i][j];
        }
    }

    printf("A soma total e de: %d", soma);

    return 0;
}