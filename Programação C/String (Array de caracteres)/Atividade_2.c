
// 2. Fa ̧ca um programa para criptografar uma string qualquer informada pelo usu ́ario, substituindo
// cada letra da string pela letra do alfabeto em sua respectiva posi ̧c ̃ao, mas de tr ́as para frente.
// Por exemplo, se a string digitada for adoro programar em c a sa ́ıda deve ser zwlil kiltiznzi
// vn x.
// OBS. Considere apenas letras min ́usculas e desconsidere caracteres especiais (*, #, @, etc.).

#include <stdio.h>
#include <ctype.h>

int main() {

    char str[30];
    char letra_convertida;

    printf("Digite uma frase: \n");
    fgets(str, 30, stdin);

    for(int i = 0; i < 30; i++){
        if(str[i] == 'a'){
            letra_convertida = 'z';
            printf("%c", letra_convertida);
        } else if(str[i] == 'b') {
            letra_convertida = 'y';
            printf("%c", letra_convertida);
        } else if(str[i] == 'c') {
            letra_convertida = 'x';
            printf("%c", letra_convertida);
        } else if(str[i] == 'd') {
            letra_convertida = 'w';
            printf("%c", letra_convertida);
        } else if(str[i] == 'e') {
            letra_convertida = 'v';
            printf("%c", letra_convertida);
        } else if(str[i] == 'f') {
            letra_convertida = 'u';
            printf("%c", letra_convertida);
        } else if(str[i] == 'g') {
            letra_convertida = 't';
            printf("%c", letra_convertida);
        } else if(str[i] == 'h') {
            letra_convertida = 's';
            printf("%c", letra_convertida);
        } else if(str[i] == 'i') {
            letra_convertida = 'r';
            printf("%c", letra_convertida);
        } else if(str[i] == 'j') {
            letra_convertida = 'q';
            printf("%c", letra_convertida);
        } else if(str[i] == 'k') {
            letra_convertida = 'p';
            printf("%c", letra_convertida);
        } else if(str[i] == 'l') {
            letra_convertida = 'o';
            printf("%c", letra_convertida);
        } else if(str[i] == 'm') {
            letra_convertida = 'n';
            printf("%c", letra_convertida);
        } else if(str[i] == 'n') {
            letra_convertida = 'm';
            printf("%c", letra_convertida);
        } else if(str[i] == 'o') {
            letra_convertida = 'l';
            printf("%c", letra_convertida);
        } else if(str[i] == 'p') {
            letra_convertida = 'k';
            printf("%c", letra_convertida);
        } else if(str[i] == 'q') {
            letra_convertida = 'j';
            printf("%c", letra_convertida);
        } else if(str[i] == 'r') {
            letra_convertida = 'i';
            printf("%c", letra_convertida);
        } else if(str[i] == 's') {
            letra_convertida = 'h';
            printf("%c", letra_convertida);
        } else if(str[i] == 't') {
            letra_convertida = 'g';
            printf("%c", letra_convertida);
        } else if(str[i] == 'u') {
            letra_convertida = 'f';
            printf("%c", letra_convertida);
        } else if(str[i] == 'v') {
            letra_convertida = 'e';
            printf("%c", letra_convertida);
        } else if(str[i] == 'w') {
            letra_convertida = 'd';
            printf("%c", letra_convertida);
        } else if(str[i] == 'x') {
            letra_convertida = 'c';
            printf("%c", letra_convertida);
        } else if(str[i] == 'y') {
            letra_convertida = 'b';
            printf("%c", letra_convertida);
        } else if (str[i] == 'z'){
            letra_convertida = 'a';
            printf("%c", letra_convertida);
        } else if (str[i] == ' '){
            letra_convertida = ' ';
            printf("%c", letra_convertida);
        }
    }
    return 0;
}