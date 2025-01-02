#include <stdio.h>

int ocorrencia(int x, int y){
    return (x == y) ? 1 : 0;
}

int main() {
    int numeros, i;
    int resul=0;

    printf("Quantos numeros voce quer digitar: \n");
    scanf("%d", &numeros);

    int var[numeros];

    for (i = 0; i < numeros; i++){
        printf("Digite um numero: \n");
        scanf("%d", &var[i]);
    }

    for (i = 0; i < numeros-1; i++)
        resul = resul + ocorrencia(var[numeros-1],var[i]);
    
    printf("Existem %d numeros iguais ao numero %d", resul, var[numeros-1]);

    return 0;
}