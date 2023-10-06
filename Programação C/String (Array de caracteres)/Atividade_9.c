
// 9. Fa ̧ca um progrma que leia uma string de tamanho qualquer, em seguida, leia um caractere
// e mostre as posi ̧c ̃oes ( ́ındices) de onde ocorre o caractere na string. Caso n ̃ao haja nenhuma
// ocorrˆencia do caractere na string, deve ser impresso o valor -1.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){

    int count = 0;
    char frase[250], carac;

    printf("Digite uma frase: ");
    fgets(frase, 250, stdin);
    printf("Digite uma letra: ");
    scanf("%c", &carac);

    printf("a letra aparece nas posicoes: ");
    for (int i = 0; i < (int)strlen(frase); i++){
        if(tolower(frase[i]) == tolower(carac)){
            printf("%d ", i+1);
            count++;
        }
    }
    if(count == 0){
        printf("-1");
    }

    return 0;
}