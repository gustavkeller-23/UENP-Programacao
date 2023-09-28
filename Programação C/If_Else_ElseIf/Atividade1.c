#include <stdio.h>
#include <ctype.h>

int main ()
{
    char letra, character;
    printf ("Digite uma letra: ");
    scanf ("%c", &character);
    letra = tolower (character);
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf ("A letra e uma vogal");
    } else {
        printf ("A letra e uma consoante");
    }
    return 0;
}