#include <stdio.h>
#include <math.h>

int main ()
{
    float a, b, c, conta1, conta2, conta3, conta4, multi;
    printf("De o valor de a, b e c: ");
    scanf ("%f%f%f", &a, &b, &c);
    conta1 = (a * b) / c;
    conta2 = pow(a,2) + b + (c * 5);
    multi = a * b * c;
    conta3 = multi + b + (c / 3 * 5) - 1;
    conta4 = pow(multi,3) / 2;
    printf ("O valor da conta 1 e: %.2f, conta 2: %.2f, conta 3: %.2f, conta 4: %.2f", conta1, conta2, conta3, conta4);
    return 0;
}