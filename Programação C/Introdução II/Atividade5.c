#include <stdio.h>

int main ()
{
    int A, B, C, D, diferenca;
    printf ("De os valores de A, B, C e D: ");
    scanf ("%d%d%d%d", &A, &B, &C, &D);
    diferenca = (A * B) - (C * D);
    printf ("A diferenca e de %d", diferenca);
    return 0;
}