#include <stdio.h>

int main ()
{
    float x, y, z, media;
    int maiores=0;
    printf ("Escreva 3 numeros: ");
    scanf ("%f %f %f", &x, &y, &z);
    media = (x + y + z) / 3;
    if (media < x){
        maiores++;
    } if (media < y) {
        maiores++;
    } if (media < z) {
        maiores++;
    }
    printf ("A quantidade de numeros acima da media e de %d", maiores);
    return 0;
}