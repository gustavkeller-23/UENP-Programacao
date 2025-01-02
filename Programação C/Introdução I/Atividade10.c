#include <stdio.h>

int main () {
    float gasolina, distancia, consumomedio;
    
    printf ("Qual a distancia percorrida em Km?\n");
    scanf ("%f", &distancia);
    
    printf ("Quanto de gasolina foi gasta em Litro?\n");
    scanf ("%f", &gasolina);
    
    consumomedio = gasolina / distancia;
    printf ("O veiculo consome %0.2f L/Km", consumomedio);
    return 0;
}