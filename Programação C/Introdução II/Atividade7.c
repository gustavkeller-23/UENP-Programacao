#include <stdio.h>

int main (){
    float dias, kilometros, valorAluguel;
    printf ("Indique o numero de dias queo carro foi alugado e quantos kilometros foi rodado: ");
    scanf ("%f%f", &dias, &kilometros);
    
    valorAluguel = ((dias * 30) + (kilometros * 0.01)) / 100 * 90;
    
    printf ("O valor a ser pago no aluguel e de %0.2f", valorAluguel);
    return 0;
}