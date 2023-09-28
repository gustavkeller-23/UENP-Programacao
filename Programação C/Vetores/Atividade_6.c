#include <stdio.h>

int mult(int x){
    if (x%7 == 0){
        return x;
    }
    return 0;
}

int main() {

    int quant;

    printf("Quantos numeros voce quer digitar?");
    scanf("%d", &quant);

    int vet[quant];

    for (int i = 0; i < quant; i++){
        printf("digite um numero: ");
        scanf("%d", &vet[i]);
    }
    
    for (int i = 0; i < quant; i++){
        if (mult(vet[i]) != 0){
            printf("O numero %d e multiplo de 7\n", vet[i]);
        }
    }

    return 0;
}