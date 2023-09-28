#include <stdio.h>

int main() 
{
    int hora, minutos, segundos, totalsegundos;
    printf ("Qual a hora?\n");
    scanf ("%d", &hora);
    printf ("Quantos minutos?\n");
    scanf ("%d", &minutos);
    printf ("quantos segundos?\n");
    scanf ("%d", &segundos);
    totalsegundos = (hora*60*60) + (minutos*60) + segundos;
    printf ("o total de segundos e igual a %d\n", totalsegundos);
    return 0;
}
