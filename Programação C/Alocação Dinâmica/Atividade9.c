
/*Implemente um programa que leia uma string alocada dinamicamente e inverta seu conte ́udo.
Por exemplo, se a string for “alocacao dinamica em c” ent ̃ao dever ́a ser impresso “c me
acimanid oacacola”.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char *palavra;

    palavra = (char *) calloc(255,sizeof(char));

    printf("Digite uma frase: ");
    setbuf(stdin, NULL);
    fgets(palavra, 255, stdin);

    for (int i = 255; i >= 0; i--){
        printf("%c", palavra[i]);
    }
    

    return 0;
}