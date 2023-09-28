#include <stdio.h>

int main ()
{
    float gasto, valorpagamento;
    printf ("Quanto e o valor gasto ");
    scanf ("%f", &gasto);
    valorpagamento = gasto + (gasto / 100 * 10);
    printf ("Valor a ser pago e de %.2f", valorpagamento);
    return 0;
}