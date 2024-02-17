
/*Implemente um programa que leia uma matriz de inteiros alocada dinamicamente com
dimens ̃oes definidas pelo usu ́ario. Em seguida, implemente uma fun ̧c ̃ao respons ́avel por
buscar um n ́umero n na matriz. A fun ̧c ̃ao deve retornar 1, caso encontre n na matriz ou 0,
caso contr ́ario. O prot ́otipo da fun ̧c ̃ao  ́e a seguinte:
int buscaNumero(int numero, int **array, int linha, int coluna) {..}*/


#include <stdio.h>
#include <stdlib.h>

int buscaNumero(int numero, int **array, int linha, int coluna) {
    for(int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            if (*(*(array+i)+j) == numero){
                    return 1;
            }
        }
    }
    return 0;
}

int main(){

    int lin, col;
    int **matriz, num;

    printf("Quantas linhas e colunas terao as matrizes?\n");
    scanf("%d %d", &lin, &col);

    matriz = (int **) malloc(lin*sizeof(int *));
    for (int i = 0; i < lin; i++){
        matriz[i] = (int *) malloc(col*sizeof(int));
    }

    if (matriz == NULL){
        printf("Memoria insuficiente!");
        exit(1);
    }
    
    for(int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            printf("Insira um valor: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Insira um numero para ver se ele está na matriz\n");
    scanf("%d", &num);

    printf("A resposta da funcao e: %d", buscaNumero(num, matriz, lin, col));

    return 0;
}