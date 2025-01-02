
// 2. Fa ̧ca um programa para criptografar uma string qualquer informada pelo usu ́ario, substituindo
// cada letra da string pela letra do alfabeto em sua respectiva posi ̧c ̃ao, mas de tr ́as para frente.
// Por exemplo, se a string digitada for adoro programar em c a sa ́ıda deve ser zwlil kiltiznzi
// vn x.
// OBS. Considere apenas letras min ́usculas e desconsidere caracteres especiais (*, #, @, etc.).

#include <stdio.h>
#include <ctype.h>

int main() {

    char str[30];
    char alfabeto[27] ="abcdefghijklmnopqrstuvwxyz"; 

    printf("Digite uma frase: \n");
    fgets(str, 30, stdin);

    for(int i = 0; i < 30 && str[i] != '\0'; i++){
        int indexOfLetter = ' ';

        if (str[i] == ' ')
            printf("  ");
        else {
            for (int j = 0; j < 27; j++){
                if (str[i] == alfabeto[j])
                    indexOfLetter = j;
            }
            printf("%c", alfabeto[25 - indexOfLetter]);
        }
    }
    return 0;
}