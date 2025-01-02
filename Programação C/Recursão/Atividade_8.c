
// 8. Implemente uma fun ̧c ̃ao recursiva que retorne verdadeiro quando a string dada  ́e um
// pal ́ındromo. Pal ́ındromo  ́e uma palavra que  ́e idˆentica quando a lemos de frente para tr ́as
// e tamb ́em de tr ́as para frente. Por exemplo, a palavra “arara”  ́e um pal ́ındromo. J ́a a
// palavra “casa” n ̃ao  ́e um pal ́ındromo.

#include <stdio.h>
#include <stdlib.h>

int palindromo(char *palavra, int tam, int val_init){
    if(palavra[val_init] == palavra[tam]){
        if (tam < val_init || val_init == tam)
            return 1;
        return palindromo(palavra, tam-1, val_init+1);;
    }
    return 0;
}

int main(){

    char palavra[20];
    int tam = 0, base = 0;

    printf("Digite uma palavra: ");
    setbuf(stdin, NULL);
    fgets(palavra, 20, stdin);

    for (int i = 0; i < 20; i++){
        if(palavra[i] != '\0')
            tam++;
        if(palavra[i] == '\0')
            break;
    }

    (palindromo(palavra, tam-2, base)) ? printf("Essa palavra e um palindromo\n") : printf("Essa palavra nao e um palindromo\n");

    return 0;
}