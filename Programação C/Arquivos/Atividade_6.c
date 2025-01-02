
// 6. Fa ̧ca uma fun ̧c ̃ao que receba como parˆametros uma matriz de inteiros e seu tamanho e
// grave-a em um arquivo texto. Cada linha da matriz deve ser salva em uma linha do
// arquivo.

#include <stdio.h>
#include <stdlib.h>

void verMatriz(int col, int lin, int mat[lin][col]){
    FILE *fp = fopen("matriz.txt", "w");

    if(!fp){
        printf("SE FODEU!");
        exit(1);
    }

    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++)
            fprintf(fp, "%d ", mat[i][j]);
        fprintf(fp, "\n");
    }

    fclose(fp);
}

int main(){
    int linha = 4, coluna = 5, count = 0;
    int matriz[linha][coluna];

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            count++;
            matriz[i][j] = count;
        }
    }

    verMatriz(coluna, linha, matriz);

    return 0;
}