#include <stdio.h>

int main() {

    int vet[21];

    for(int i=0; i<21; i++){
        printf("Digite 1 numero: ");
        scanf("%d", &vet[i]);
    }

    for(int i=0; i<20; i++){
        if(vet[i] == vet[20]){
            printf("O numero %d se repete na posicao %d\n", vet[20], i);
        }
    } 

    return 0;
}