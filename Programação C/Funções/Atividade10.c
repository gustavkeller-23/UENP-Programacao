#include <stdio.h>
#include <ctype.h>

int vogal (int letter){
    if (letter == 'a' || letter == 'e' || letter == 'i' ||letter == 'o' ||letter == 'u')
        return 1;
    return 0;
}

int main () {
    char letra;

    printf("Digite uma letra: \n");
    scanf("%c", &letra);
    
    letra = tolower(letra);
    
    (vogal(letra)) ? printf("A letra '%c' e vogal.", letra) : printf("A letra '%c' e consoante.", letra);
    
	return 0;
}