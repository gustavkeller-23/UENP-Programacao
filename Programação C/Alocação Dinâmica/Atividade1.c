
/*Implemente uma fun ̧c ̃ao que receba como parˆametro dois vetores vetX e vetY de tamanho n.
A fun ̧c ̃ao deve retornar o ponteiro para um vetor soma de tamanho n alocado dinamicamente,
em que soma = vetX + vetY.*/

#include <stdio.h>
#include <stdlib.h>

int funcao(int vetX, int vetY){
    return vetX + vetY;
}

int main(){

    int n;

    printf("Quantos numeros voce quer no vetor?\n");
    scanf("%d", &n);

    int vetX[n], vetY[n], *soma;
    soma = (int *) malloc(n*sizeof(int));

    for (int i = 0; i < n; i++){
        printf("Coloque os valores de vetX e vetY na casa %d \n", i+1);
        //setbuf(stdin, NULL);
        scanf("%d%d", &vetX[i], &vetY[i]);
    }

    for (int i = 0; i < n; i++){
        soma[i] = funcao(vetX[i], vetY[i]);
        printf("%d \n", soma[i]);
    }

    return 0;
}