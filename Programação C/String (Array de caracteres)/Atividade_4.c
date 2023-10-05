
// 4. Fa ̧ca um programa que leia duas strings quaisquer e mostre se as duas s ̃ao iguais ou
// diferentes no conte ́udo e se possuem o mesmo tamanho. Lembre-se que as strings podem
// conter letras mai ́usculas e/ou min ́usculas.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){

    int iguais = 0, diferente = 0;
    char pal_1[15], pal_2[15];

    printf("Digite 2 palavras: ");
    fgets(pal_1, 15, stdin);
    fgets(pal_2, 15, stdin);

    for (int i = 0; pal_1[i] != '\0'; i++){
        if (tolower(pal_1[i]) == tolower(pal_2[i])){
            if (pal_1[i] == pal_2[i]){
                iguais++;       
            }
        }else{
            diferente++;
        }
    }
    
    if (diferente != 0){
        printf("As duas strings nao tem o mesmo conteudo.");
    } else {
        if ((int)iguais == (int)strlen(pal_1)){
            printf("As duas strings tem o mesmo conteudo.");
        } else {
            printf("As duas strings tem o mesmo conteudo, porem de tamanhos diferentes.");
        }
    }
    
    return 0;
} 