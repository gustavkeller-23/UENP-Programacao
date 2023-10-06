
// 8. Fa ̧ca um programa que leia uma matriz de 5 strings e imprima cada uma delas. Depois,
// pe ̧ca para o usu ́ario digitar mais uma string e verifique se ela est ́a na matriz, caso esteja
// indique em que linha ela se encontra. (SEM USAR STRING.H)

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    int count = 0, linha = -1;
    char palavra[15];
    char matriz[5][100];

    for (int i = 0; i < 5; i++) {
        printf("Digite a string %d: ", i + 1);
        fgets(matriz[i], sizeof(matriz[i]), stdin);
    }
    printf("Strings digitadas:\n");
    for (int i = 0; i < 5; i++) {
        printf("string %d: %s", i + 1, matriz[i]);
    }

    printf("Digite uma palavra: ");
    fgets(palavra, 15, stdin);

    for(int i = 0; i < 5; i++){
        count = 0;
        for (int j = 0; j < (int)strlen(palavra); j++){
            if (matriz[i][j] == palavra[j]){
                count++;
                if(count == (int)strlen(palavra)){
                    linha = i;
                    printf("A palavra esta na linha %d", linha+1);
                }
            }
        }
    }

    if (linha == -1){
        printf("A palavra nao existe na matriz");
    }
    
    return 0;
}