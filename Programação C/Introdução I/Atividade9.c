#include <stdio.h>

int main () {
    float diaria, valorDesconto, ocupacao, valorNormal;

    printf ("Quanto e a diaria?\n");
    scanf ("%f", &diaria);
    
    valorDesconto = diaria * 0.7;
    ocupacao = valorDesconto * (45 * 0.7); //se 45 = 35% então 70% = 90
    valorNormal = diaria * (45 * 0.35);
    printf ("O valor com desconto e de: %0.2f\n", valorDesconto);
    printf ("O valor arrecadado com o dobro de ocupacao e desconto e de: %0.2f\n", ocupacao);
    printf ("O valor arrecadado normalmente e de: %0.2f\n", valorNormal);
    return 0;
}