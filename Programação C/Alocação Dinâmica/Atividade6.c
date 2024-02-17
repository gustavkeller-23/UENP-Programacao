
/*Implemente uma fun ̧c ̃ao que receba como parˆametro um valor n e retorne o ponteiro para
uma matriz alocada dinamicamente contendo n linhas e n colunas. Preencha a matriz com
o valor 1 na diagonal secund ́aria e 0 nas demais posi ̧c ̃oes.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    int **matriz;

    printf("Qual o numero de linhas e colunas: ");
    scanf("%d", &n);

    matriz = (int **) malloc(n*sizeof(int*));
    for (int i = 0; i < n; i++){
        matriz[i] = (int *) malloc(n*sizeof(int));
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j || n-j-1 == i){
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}