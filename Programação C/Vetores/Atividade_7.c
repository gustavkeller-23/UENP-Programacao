#include <stdio.h>

int maior(int x[], int y){
    int i, maiorval = 0;
    for (i = 0; i < y; i++){
        if (x[i] > maiorval){
            maiorval = x[i];
        }
    }
    return maiorval;
}

int main() {
    
    int n;

    printf("Quantos numeros voce quer digitar?\n");
    scanf("%d", &n);

    int vet[n];

    for (int i = 0; i < n; i++){
        printf("digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("O maior valor e %d", maior(vet, n));

    return 0;
}