#include <stdio.h>

int main () 
{
    int x, y, z;
    printf ("Indique 3 numeros inteiros: ");
    scanf ("%d %d %d", &x, &y, &z);
    if (x > y && x > z) { 
        if (y > z) {
            printf ("A ordem decrescente e %d, %d e %d", x, y, z);
        } else {
            printf ("A ordem decrescente e %d, %d e %d", x, z, y);
        }
    } else {
        if (y > z) {
            if (x > z) {
                printf ("A ordem decrescente e %d, %d e %d", y, x, z);
            } else {
                printf ("A ordem decrescente e %d, %d e %d", y, z, x);
            }
        } else {
            if (x > y) {
                printf ("A ordem decrescente e %d, %d e %d", z, x, y);
            } else {
                printf ("A ordem decrescente e %d, %d e %d", z, y, x);
            }
        }
    }

    return 0;
}
