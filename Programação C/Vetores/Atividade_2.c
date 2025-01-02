/*Fa ̧ca um programa que receba do usuario um vetor de “n” numeros inteiros e, em seguida,
imprima o vetor na ordem inversa.*/

#include <stdio.h>

int main() {
    int numeros;

    printf("Quantos numeros vc vai digitar?\n");
    scanf("%d", &numeros);

    int var[numeros];

    for (int i = 0; i<numeros; i++){
        printf("Digite um numero:\n");
        scanf("%d", &var[i]);
    }

    printf("A ordem e: \n");
    for (int i = 0; i < numeros; i++)
        printf("%d ", var[i]);
    
    printf("\nA ordem invertida e: \n");
    for (int i = numeros-1; i>=0; i--)
        printf("%d ", var[i]);
    
    
    return 0;
}