#include <stdio.h>

int main (){
    float altura, peso, IMC;
    printf ("Informe sua massa e sua altura, respectivamente: ");
    scanf ("%f%f", &peso, &altura);
    
    IMC = peso / (altura * altura);
    printf ("Seu IMC e de %.2f", IMC);
    return 0;
}