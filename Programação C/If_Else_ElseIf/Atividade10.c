#include <stdio.h>

int main () 
{
    int quesito1, quesito2, quesito3, quesito4, quesito5;
    printf ("O aluno compriu tal requisito?\n --> Interface Grafica <--\n 0 = nao    1 = sim\n");
    scanf ("%d", &quesito1);
    printf ("O aluno compriu tal requisito?\n --> Inteligencia Artificial <--\n 0 = nao    1 = sim\n");
    scanf ("%d", &quesito2);
    printf ("O aluno compriu tal requisito?\n --> Encapsulamento <--\n 0 = nao    1 = sim\n");
    scanf ("%d", &quesito3);
    printf ("O aluno compriu tal requisito?\n --> Indentacao <--\n 0 = nao    1 = sim\n");
    scanf ("%d", &quesito4);
    printf ("O aluno compriu tal requisito?\n --> Structs <--\n 0 = nao    1 = sim\n");
    scanf ("%d", &quesito5);
    if (quesito1 > 1 || quesito2 > 1 || quesito3 > 1 || quesito4 > 1 || quesito5 > 1 || quesito1 < 0 || quesito2 < 0 || quesito3 < 0 || quesito4 < 0 || quesito5 < 0) {
        printf ("Alguma das perguntas nao esta respondida corretamente\n");
    } else if (quesito1 == 1 || quesito2 == 1) {
        printf ("O primeiro requesito sera avaliado\n");
        if (quesito3 == 1 && quesito4 == 1) {
            printf ("O segundo requesito sera avaliado\n");
            if (quesito5 == 1) {
                printf ("O terceiro requesito sera avaliado\n");
                printf ("Todos os quesitos foram cumpridos agora seu trabalho sera avaliado.");
            } else {
                printf ("O aluno nao cumpriu o terceiro requisito, recebera nota 0");
            }
        } else {
            printf ("O aluno nao cumpriu o segundo requisito, recebera nota 0");
        }
    } else {
        printf ("O aluno nao cumpriu o primeiro requisito, recebera nota 0");
    }
    return 0;
}