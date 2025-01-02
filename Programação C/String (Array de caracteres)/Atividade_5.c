
// 5. Fa ̧ca um programa que leia uma string e, em seguida, implemente uma fun ̧c ̃ao que contabiliza
// a quantidade de vogais contidas na string. Lembre-se que as vogais podem estar em
// mai ́usculas e/ou min ́usculas.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int contar_vogais(char letra){
    if (tolower(letra) == 'a' || tolower(letra) == 'e' || tolower(letra) == 'i' || tolower(letra) == 'o' || tolower(letra) == 'u')
        return 1;
    return 0;
}

int main(){

    int vogais = 0;
    char frase[255];

    printf("Digite uma frase: ");
    fgets(frase, 255, stdin);
    
    for (int i = 0; i < (int)strlen(frase); i++)
        vogais += contar_vogais(frase[i]);

    printf("Nessa frase existem %d vogais", vogais);

    return 0;
}