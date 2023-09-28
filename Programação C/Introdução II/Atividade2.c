#include <stdio.h>

int main ()
{
    float base, altura, area;
    printf ("Digite a base e a atura do triangulo, repectivamente: ");
    scanf ("%f%f", &base, &altura);
    area = (base * altura) / 2;
    printf ("A area do triangulo e %.2f", area);
    return 0;
}