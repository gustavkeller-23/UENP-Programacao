
// 1. Fa ̧ca um programa que inverta uma string lida. Por exemplo, se a string digitada for
// programar em linguagem C, o resultado deve ser C megaugnil me ramargorp.

#include <stdio.h>
#include <string.h>

int main(){
    char frase[30];
    char frase_invertida[30];
    int i, tamanho_da_frase, j=0;

    printf("Digite uma frase: \n");
    gets(frase);

    tamanho_da_frase = strlen(frase);

    for (i = tamanho_da_frase-1; i > 0; i--){
        frase_invertida[j] = frase[i];
        j++;
    }
    
    printf("A frase foi %s, e agora e: %s", frase, frase_invertida);

    return 0;
}

// scanf("%[^\n]%*c", str);
// fgets(str, MAX_LIMIT, stdin);
// gets(str);