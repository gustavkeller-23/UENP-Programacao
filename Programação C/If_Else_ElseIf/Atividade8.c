#include <stdio.h>

int main ()
{
    float x, y, valor;
    int op;
    printf ("Indique os valores de x e y: ");
    scanf ("%f %f", &x, &y);
    printf ("Escolha qual das operacoes vc quer realizar:\n 1. Media aritmetica entre x e y\n 2. Diferenca do maior pelo menor numero\n 3. Produto entre x e y\n 4. Divisao entre x e y\n");
    scanf ("%d", &op);
    switch (op)
    {
        case (1):
            valor = (x + y) / 2;
            printf ("O resultado dessa operacao e %.2f", valor);
            break;
        case (2):
            if (x < y) {
            valor = (y - x);
            printf ("O resultado dessa operacao e %.2f", valor);    
            } else {
            valor = (x - y);
            printf ("O resultado dessa operacao e %.2f", valor);
            }
            break;
        case (3):
            valor = (x * y);
            printf ("O resultado dessa operacao e %.2f", valor);
            break;
        case (4):
            if (y == 0) {
                printf ("Essa operacao nao pode ser realizada, nao se pode dividir por 0");
            } else {
                valor = (x / y);
                printf ("O resultado dessa operacao e %.2f", valor);
            }
            break;
        default:
            printf ("Essa operacao nao esta na lista");
            break;
    }
    return 0;
}