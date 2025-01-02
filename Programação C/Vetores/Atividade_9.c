/*Fa ̧ca um programa que receba do usu ́ario um vetor de “n” n ́umeros reais e ordene-os em
ordem crescente. Ao final, o programa deve mostrar o vetor ordenado.*/

#include <stdio.h>

int maior(int x, int y){
    return (x > y) ? x : y;
}

int main() {
    int n, maior_valor=0;

    printf("Quantos numeros voce quer digitar?\n");
    scanf("%d", &n);

    int vet[n];

    for (int i = 0; i < n; i++){
        printf("digite um numero: ");
        scanf("%d", &vet[i]);

        maior_valor = maior(vet[i], maior_valor);
    }
    
    for (int i=0; i <= maior_valor; i++){
        for (int j=0; j < n; j++){
            if(vet[j] == i)
                printf("%d, ", vet[j]);
        }
    }
    printf("acabou");
    
    return 0;
}