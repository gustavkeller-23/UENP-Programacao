
// 7. Implemente um programa que leia 50 n ́umeros e armazene-os em um arquivo bin ́ario.
// Depois, leia os n ́umeros gravados no arquivo e mostre na tela a soma desses n ́umeros.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int numeros[50]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
    int num = 0, soma = 0;

    FILE *fp = fopen("numeros2.txt", "wb");

    if(!fp){
        printf("SE FODEU!");
        exit(1);
    }

    for (int i = 0; i < 50; i++){
        fprintf(fp, "%d\n", numeros[i]);
    }

    fclose(fp);

    fp = fopen("numeros2.txt", "r");

    for (int i = 0; i < 50; i++){
        fscanf(fp, "%d\n", &num);

        soma += num;
    }

    fclose(fp);

    printf("%d", soma);

    return 0;
}