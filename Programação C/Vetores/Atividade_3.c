#include <stdio.h>

int main() {
    int numeros[10];
    int j=0, k=0;
    int par[j], impar[k];

    for (int i=0; i<10; i++){
        printf("Digite um numero: \n");
        scanf("%d", &numeros[i]);

        if (numeros[i]%2 == 0){
            par[j] = numeros[i];
            j++;
        } else {
            impar[k] = numeros[i];
            k++;
        }
    }
    
    printf("Os numeros pares sao:\n");
    for (int i=0; i<j; i++){
        printf("%d ", par[i]);
    }
    printf("\nOs numeros impares sao:\n");
    for (int i=0; i<k; i++){
        printf("%d ", impar[i]);
    }
    return 0;
}