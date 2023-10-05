
// 7. Fa ̧ca um programa para criptografar uma string qualquer informada pelo usu ́ario, substituindo
// as vogais encontradas na string pelo caractere especial asterisco (*).

#include <stdio.h>

int main(){

    char senha[20];

    printf("Digitte a senha para criptografa-la: ");
    fgets(senha, 20, stdin);

    for(int i = 0; i < 20; i++){
        if(senha[i] == 'a' || senha[i] == 'e' || senha[i] == 'i' || senha[i] == 'o' || senha[i] == 'u' || senha[i] == 'A' || senha[i] == 'E' || senha[i] == 'I' || senha[i] == 'O' || senha[i] == 'U'){
            senha[i] = '*';
        }
    }

    printf("%s", senha);

    return 0;
}
