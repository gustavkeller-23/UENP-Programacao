#include <stdio.h>

int main () 
{
    float x, y;
    printf ("escreva os valores de x e y: ");
    scanf ("%f %f", &x, &y);
    if (x > 0 && y > 0) {
        printf ("O ponto esta no primeiro quadrante");
    } else if (x > 0 && y < 0) {
        printf ("O ponto esta no terceiro quadrante");
    } else if (x < 0 && y > 0) {
        printf ("O ponto esta no segundo quadrante");
    } else if (x < 0 && y < 0) {
        printf ("O ponto esta no quarto quadrante");
    } else if (x == 0 && y != 0) {
        printf ("O ponto esta no eixo x");
    } else if (x != 0 && y == 0) {
        printf ("O ponto esta no eixo y");
    } else {
        printf ("O ponto esta na origem");
    }
    return 0;
}