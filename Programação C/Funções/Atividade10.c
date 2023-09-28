#include <stdio.h>
#include <ctype.h>

int vogal (int letter){
    if (letter == 'a' || letter == 'e' || letter == 'i' ||letter == 'o' ||letter == 'u') {
        printf("A letra '%c' e vogal.", letter);
        return 0;
    } 
    printf("A letra '%c' e consoante.", letter);
    return 0;
}

int main () {

    char letra;

    printf("Digite uma letra: \n");
    scanf("%c", &letra);
    
    letra = tolower(letra);
    
    vogal(letra);
    
	return 0;
}