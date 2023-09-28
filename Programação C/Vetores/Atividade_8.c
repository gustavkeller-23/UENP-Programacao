#include <stdio.h>

int main() {

    int n=0;
    int menorIdade=0, maiorIdade=0;

    printf("Quantas idades voce deseja imprimir?\n");
    scanf("%d", &n);

    int idade[n];

    for (int i = 0; i < n; i++){

        printf("Qual a idade?\n");
        scanf("%d", &idade[n]);

        if(idade[n] <= 18){
            menorIdade++;
        }
        if (idade[n] >= 30){
            maiorIdade++;
        }
    }
    
    printf("Existem %d pessoas menores de 18 anos\n", menorIdade);
    printf("Existem %d pessoas maiores de 30 anos\n", maiorIdade);

    return 0;
}