
/*Utilizando aritmética de ponteiros, mostre como exibir a frase “não gosto de programar em C” como “gosto de programar em C”.*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[35] = "não gosto de programar em C";
    char *ptr_letra;

    for (int i = 0; i < strlen(str); i++){
        ptr_letra = (str+i);
        printf("%c", *ptr_letra);
    }

    printf("\n");

    for (int i = 0; i < strlen(str); i++){
        ptr_letra = (str+5+i);
        printf("%c", *ptr_letra);
    }

    return 0;
}