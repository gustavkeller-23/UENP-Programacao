#include <stdio.h>
        //1 real = 0,20 dolar
        //1 real = 0,18 euro 
int main () {
    float valorProduto, valorDolar, valorEuro;
    printf("o valor do produto e: \n");
    scanf ("%f", &valorProduto);

    valorDolar = valorProduto * 0.2;
    valorEuro = valorProduto * 0.18;

    printf ("o valor em dolar e: %.2f\n", valorDolar);
    printf ("o valor em euro e: %.2f\n", valorEuro);
    return 0;
}