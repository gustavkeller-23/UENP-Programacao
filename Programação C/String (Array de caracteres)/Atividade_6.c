
// 6. Fa ̧ca um programa que leia uma string e um caractere qualquer e, em seguida, implemente
// uma fun ̧c ̃ao que contabilize e retorne o total de ocorrˆencias desse caractere na string.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int caracter_repetido(char letra_frase, char letra_escolhida){
    if (tolower(letra_frase) == tolower(letra_escolhida)){
        return 1;
    }
    return 0;
}

int main(){

    int count = 0;
    char frase[255], carac;

    printf("Digite uma frase: ");
    fgets(frase, 255, stdin);
    printf("Digite um caracter: ");
    scanf("%c", &carac);

    for (int i = 0; i < (int)strlen(frase); i++){
        count += caracter_repetido(frase[i], carac);
    }
    
    printf("O caracter se repete %d vezes", count);

    return 0;
}