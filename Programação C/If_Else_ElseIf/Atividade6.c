#include <stdio.h>

int main (){
    float precoItem1 = 5.3, precoItem2 = 6.0, precoItem3 = 3.2, precoItem4 = 2.5, valorTotal = 0;
    int produto, quantidade;
    printf ("Defina o numero do produto e a quantidade que ira comprar: ");
    scanf ("%d %d", &produto, &quantidade);
    
    switch (produto){
        case (1):
            valorTotal = precoItem1 * quantidade; break;
        case (2):
            valorTotal = precoItem2 * quantidade; break;
        case (3):
            valorTotal = precoItem3 * quantidade; break;
        case (4):
            valorTotal = precoItem4 * quantidade; break;
        default:
            printf ("Esse produto nao esta na lista."); break;
    }

    if(valorTotal > 15)
        valorTotal = valorTotal - (valorTotal / 100 * 15);
    printf ("O valor e de %.2f", valorTotal);

    return 0;
}