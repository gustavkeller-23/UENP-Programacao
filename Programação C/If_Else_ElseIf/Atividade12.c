#include <stdio.h>

int main (){
    int x, y, z;
    printf ("Indique 3 numeros inteiros: ");
    scanf ("%d %d %d", &x, &y, &z);
    
    if (x < y){
        int temp = x;
        x = y;
        y = temp;
        if(x < z){
            temp = x;
            x = z;
            z = y;
            y = temp;
        } else if(y < z){
            temp = y;
            y = z;
            z = temp;
        }
    } else if(y < z){
        int temp = y;
        y = z;
        z = temp;
    }

    printf ("A ordem decrescente e %d, %d e %d", z, y, x);
    return 0;
}
