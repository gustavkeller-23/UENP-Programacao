
// 1. Fa ̧ca um programa que inverta uma string lida. Por exemplo, se a string digitada for
// programar em linguagem C, o resultado deve ser C megaugnil me ramargorp.

#include <stdio.h>
#include <string.h>

int main(){
    char frase[30];
    int i, tamanho_da_frase;

    printf("Digite uma frase: \n");
    gets(frase);

    tamanho_da_frase = strlen(frase);

    printf("A frase foi %s, e agora e: ", frase);
    for (i = tamanho_da_frase-1; i >= 0; i--)
        printf("%c", frase[i]);

    return 0;
}