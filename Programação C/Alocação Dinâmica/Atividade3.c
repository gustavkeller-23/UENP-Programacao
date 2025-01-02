
/*Implemente um programa que leia uma matriz de inteiros alocada dinamicamente, em que
o n ́umero de linhas e o n ́umero de colunas s ̃ao determinados pelo usu ́ario. Verifique quais
elementos da matriz s ̃ao  ́ımpares e m ́ultiplos de 7. Na sequˆencia, armazene os elementos
identificados em vetor, tamb ́em alocado dinamicamente, e mostre-os na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int linhas, colunas, count = 0, num = 0;
    int *vetMult7, *matriz;

    printf("Digite o numero de linhas e colunas da matriz");
    scanf("%d %d", &linhas, &colunas);

    matriz = (int *) malloc((linhas*colunas)*sizeof(int));

    for (int i = 0; i < linhas*colunas; i++) {
        printf("Digite um valor pra matriz: ");
        scanf("%d", &matriz[i]);
        if (matriz[i]%7 == 0)
            count++;
    }
    vetMult7 = (int *) malloc(count*sizeof(int));

    for (int i = 0; i < linhas*colunas; i++) {
        if (matriz[i]%7 == 0) {
            vetMult7[num] = matriz[i];
            num++;
        }
    } 

    printf("O valores sao: ");
    for (int i = 0; i < num; i++)
        printf("%d ", vetMult7[i]);
    
    return 0;
}