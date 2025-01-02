
/*Faça um programa que leia uma matriz quadrada de ordem 4 X 4 de números inteiros.
Depois, leia um número x e verifique quantas vezes x aparece na matriz.*/

#include <stdio.h>

int main(){
    int matriz[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int *ptr, num, count = 0;

    printf("Digite um número: ");
    scanf("%d", &num);
    ptr = &num;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (*ptr == matriz[i][j])
                count++;
        }
    }

    printf("O valor %d aparece %d vezes na matriz", *ptr, count);

    return 0;
}

