#include <stdio.h>

int maior(int x, int y){
    if (x > y){
        return x;
    }
    return y;
}

int main() {
    
    int n, maior_valor =0;

    printf("Quantos numeros voce quer digitar?\n");
    scanf("%d", &n);

    int vet[n];

    for (int i = 0; i < n; i++){
        printf("digite um numero: ");
        scanf("%d", &vet[i]);

        maior_valor = maior(vet[i], maior_valor);
    }
    
    printf("O maior valor e %d", maior_valor);

    return 0;
}