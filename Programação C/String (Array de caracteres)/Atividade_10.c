
// 10. Fa ̧ca um programa que leia o nome e o valor de determinada mercadoria de uma loja.
// Sabendo que o desconto para pagamento `a vista  ́e de 10% sobre o valor total, calcule o
// valor a ser pago `a vista. Escreva o nome da mercadoria, o valor total, o valor do desconto
// e o valor a ser pago `a vista.

#include <stdio.h>

int main(){
    float valor, desconto;
    char produto[20];

    printf("Digite o nome do produto: ");
    fgets(produto, 20, stdin);
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    desconto = valor * 0.1;

    printf("O produto: %svalor: R$%.2f \ndesconto: R$%.2f \nvalor a ser pago: R$%.2f", produto, valor, desconto, valor-desconto);

    return 0;
}