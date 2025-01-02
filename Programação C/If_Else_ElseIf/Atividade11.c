#include <stdio.h>

int main () {
    float altura;
    int idade, quantBrinquedos = 0;
    printf("Indique a sua idade e sua altura:\n");
    scanf("%d %f", &idade, &altura);

    if (idade >= 12 && altura >= 1.5)
        quantBrinquedos++;
    if (idade >= 14 && altura >= 1.4)
        quantBrinquedos++;
    if (idade >= 16 && altura >= 1.7)
        quantBrinquedos++;
    
    printf ("A pessoa pode andar em %d brinquedos", quantBrinquedos);
    return 0;
}