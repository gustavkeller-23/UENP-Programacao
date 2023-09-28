#include <stdio.h>

int main() {

    int vet[20];

    for (int i = 0; i < 20; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    for (int i = 10; i < 20; i++){
        printf("%d, ", vet[i]);
    }
    for (int i = 0; i < 10; i++){
        printf("%d, ", vet[i]);
    }
    printf("acabou");
        
    return 0;
}