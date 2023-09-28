#include <stdio.h>
        //1 real = 0,20 dolar
        //1 real = 0,18 euro 
int main () 
{
    float valorproduto, valordolar, valoreuro;
    printf("o valor do produto e R$");
    scanf ("%f", &valorproduto);
    valordolar = valorproduto * 0.2;
    valoreuro = valorproduto * 0.18;
    printf ("o valor em dolar e: %.2f\n", valordolar);
    printf ("o valor em euro e: %.2f\n", valoreuro);
    return 0;
}