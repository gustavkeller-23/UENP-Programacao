/*Uma m ́aquina autom ́atica de caf ́e s ́o funciona com notas de R$ 5 e nunca d ́a o troco. O
caf ́e custa R$ 7. Assim, se o cliente pedir apenas um caf ́e, ele vai perder R$ 3, pois ter ́a
que dar R$ 10, e a m ́aquina n ̃ao devolver ́a o troco. E poss ́ıvel comprar mais de um caf ́e  ́
em uma s ́o compra. Logo, se o cliente colocou R$ 15, significa que ele vai obter dois caf ́es e
perder ́a R$ 1. Fa ̧ca um programa que leia o valor que o cliente colocou na m ́aquina (sempre
m ́ultiplo de 5) e imprima quanto o cliente ir ́a perder no troco.*/

#include <stdio.h>

int main () {
    int dinheiro, cafes ,troco;
    printf ("Quantos reais vao ser inseridos? \n");
    scanf ("%d", &dinheiro);

    troco = dinheiro % 7;
    cafes = dinheiro / 7;
    
    printf ("O troco perdido sera de R$%d\n", troco);
    printf ("O numero de cafes recebidos sera de %d\n", cafes);
    return 0;
}