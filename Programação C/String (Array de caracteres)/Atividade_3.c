
// 3. Fa ̧ca um programa que leia uma string informada pelo usu ́ario e, em seguida, implemente
// uma fun ̧c ̃ao que contabilize a quantidade de espa ̧cos em branco existente na string lida.

#include <stdio.h>

int main(){

    int count=0;
    char frase[250];

    printf("Digite uma frase: ");
    fgets(frase, 255, stdin);

    for (int i = 0; i < 250; i++){
        if (frase[i] == ' ')
            count++;
    }
    
    printf("Existem %d espacos nessa frase", count);

    return 0;
}