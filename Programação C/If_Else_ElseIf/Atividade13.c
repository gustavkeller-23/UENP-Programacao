#include <stdio.h>

int main () 
{
    float saldoMedio, credito;
    printf ("Indique seu saldo medio do ultimo ano: ");
    scanf ("%f", &saldoMedio);
    if (saldoMedio <= 200) {
        credito = (saldoMedio / 100) * 10;
        printf ("Essa pessoa recebera %.2f de credito", credito);
    } else if (saldoMedio <= 300) {
        credito = (saldoMedio / 100) * 20;
        printf ("Essa pessoa recebera %.2f de credito", credito);
    } else if (saldoMedio <= 400) {
        credito = (saldoMedio / 100) * 25;
        printf ("Essa pessoa recebera %.2f de credito", credito);
    } else {
        credito = (saldoMedio / 100) * 30;
        printf ("Essa pessoa recebera %.2f de credito", credito);
    }
    return 0;
}