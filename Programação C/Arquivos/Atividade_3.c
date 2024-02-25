
// 3. Implemente um programa que leia um vetor de inteiros A de 20 elementos e guarde tais
// valores em um arquivo, um por linha. Depois, reabra o arquivo e leia os elementos para o
// vetor B, verificando se os valores foram gravados corretamente.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetorA[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int vetorB[20];

    FILE *fp = fopen("numeros.txt", "w");

    if(!fp){
        printf("SE FODEU!");
        exit(1);
    }

    for (int i = 0; i < 20; i++){
        fprintf(fp, "%d\n", vetorA[i]);
    }

    fclose(fp);

    fp = fopen("numeros.txt", "r");

    for (int i = 0; i < 20; i++){
        fscanf(fp, "%d\n", &vetorB[i]);

        printf("%d\n", vetorB[i]);
    }

    fclose(fp);

    return 0;
}