
/*Faça um programa que receba um vetor de 20 elementos inteiros, em seguida, percorra o
vetor através do ponteiro ptr-início – a partir do início do vetor e outro ponteiro ptr-fim a partir do final do vetor, 
até os dois ponteiros se encontrarem no meio do vetor.*/

#include <stdio.h>

int main(){
    int vet[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int *ptr_inicio, *ptr_fim;

    for (int i = 0; i < 10; i++){
        ptr_inicio = (vet+i);
        printf("%d \n", *ptr_inicio);
    }
    for (int i = 19; i >= 10; i--){
        ptr_fim = (vet+i);
        printf("%d \n", *ptr_fim);
    }

    printf("O prt-inicio esta na posicao vet[%d] e o prt-fim esta na posicao vet[%d]", *ptr_inicio, *ptr_fim);

    return 0;
}