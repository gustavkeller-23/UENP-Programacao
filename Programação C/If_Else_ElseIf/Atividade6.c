#include <stdio.h>

int main ()
{
    float item1 = 5.3, item2 = 6.0, item3 = 3.2, item4 = 2.5, valor;
    int produto, quantidade;
    char pergunta, questao;    
    printf ("Defina o numero do produto e a quantidade que ira comprar: ");
    scanf ("%d %d", &produto, &quantidade);
    switch (produto)
    {
        case (1):
            valor = item1 * quantidade;
            if (valor > 15){
                valor = valor - (valor / 100 * 15);
                printf ("O valor e de %.2f", valor); break;
            }
            printf ("O valor sera de %.2f", valor); break;
        case (2):
            valor = item2 * quantidade;
            if (valor > 15){
                valor = valor - (valor / 100 * 15);
                printf ("O valor e de %.2f", valor); break;
            }
            printf ("O valor sera de %.2f", valor); break;
        case (3):
            valor = item3 * quantidade;
            if (valor > 15){
                valor = valor - (valor / 100 * 15);
                printf ("O valor e de %.2f", valor); break;
            }
            printf ("O valor sera de %.2f", valor); break;
        case (4):
            valor = item4 * quantidade;
            if (valor > 15){
                valor = valor - (valor / 100 * 15);
                printf ("O valor e de %.2f", valor); break;
            }
            printf ("O valor sera de %.2f", valor); break;
        default:
            printf ("Esse produto nao esta na lista."); break;
    }
    return 0;
}