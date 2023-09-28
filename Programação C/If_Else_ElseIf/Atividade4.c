#include <stdio.h>
#include <math.h>

int main ()
{
    float a, b, c, delta;
    float raiz1, raiz2;
    printf ("Indique os valores a,b e c respectivamente: ");
    scanf ("%f %f %f", &a, &b, &c);
    if (a == 0) {
        printf ("A equacao nao e de segundo grau.");
    } else {
        delta = (b*b) + (-4*a*c);
        if (delta < 0) {
            printf ("A equacao nao tem raizes reais\n");
        } else {
            raiz1 = ((-1*b) + sqrt(delta)) / (2 * a);
            raiz2 = ((-1*b) - sqrt(delta)) / (2 * a);
            printf ("As duas raizes sao %.2f e %.2f", raiz1, raiz2);
        }
    }
    return 0;
}