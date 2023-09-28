#include <stdio.h>

int main () {
    float diaria, valordesconto, ocupacao, valornormal;
    printf ("Quanto e a diaria?\n");
    scanf ("%f", &diaria);
    valordesconto = diaria * 0.7;
    ocupacao = valordesconto * (45 * 0.7); //se 45 = 35% então 70% = 90
    valornormal = diaria * (45 * 0.35);
    printf ("O valor com desconto e de: %0.2f\n", valordesconto);
    printf ("O valor arrecadado com o dobro de ocupacao e desconto e de: %0.2f\n", ocupacao);
    printf ("O valor arrecadado normalmente e de: %0.2f\n", valornormal);
    return 0;
}