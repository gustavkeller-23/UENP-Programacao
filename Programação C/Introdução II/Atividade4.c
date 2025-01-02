#include <stdio.h>

int main (){
    float gasto, valorPagamento;
    printf ("Quanto e o valor gasto ");
    scanf ("%f", &gasto);
    
    valorPagamento = gasto + (gasto / 100 * 10);
    
    printf ("Valor a ser pago e de %.2f", valorPagamento);
    return 0;
}