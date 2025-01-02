#include <stdio.h>

int main (){
    float lado1, lado2, lado3;
    printf ("Indique a medida dos 3 lados do triangulo: ");
    scanf ("%f %f %f", &lado1, &lado2, &lado3);
    
    if (lado1 > lado2 + lado3 || lado2 > lado1 + lado3 || lado3 > lado1 + lado2){
        printf ("Isso nao e um triangulo");
    } else {
        if (lado1 == lado2 && lado1 == lado3 && lado2 == lado3)
            printf ("Esse triangulo e Equilatero");
        else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
            printf ("Esse triangulo e escaleno");
        else
            printf ("Esse triangulo e isosceles");
    }
    return 0;
}