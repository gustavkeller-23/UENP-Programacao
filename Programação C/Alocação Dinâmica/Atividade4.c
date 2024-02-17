
/*Implemente um programa que leia duas matrizes de inteiros m1 e m2 de ordem M x N e
preencha uma terceira matriz soma que  ́e resultado da soma de m1 e m2. As matrizes devem
ser alocadas dinamicamente. N ̃ao esque ̧ca de verificar se  ́e poss ́ıvel fazer a aloca ̧c ̃ao de
mem ́oria.*/

#include <stdio.h>
#include <stdlib.h>

int soma(int m1, int m2){
    return m1 + m2;
}

int main(){

    int lin, col;
    int *m1, *m2, *mSoma;

    printf("Quantas linhas e colunas terao as matrizes?\n");
    scanf("%d %d", &lin, &col);

    m1 = (int *) malloc((lin*col)*sizeof(int));
    m2 = (int *) malloc((lin*col)*sizeof(int));
    mSoma = (int *) malloc((lin*col)*sizeof(int));

    if (m1 == NULL || m2 == NULL || mSoma == NULL) {
        printf("As matrizes sao muito grandes");
        exit(1);
    }

    for (int i = 0; i < (lin*col); i++) {
        printf("Defina o valor para m1 e m2 na casa %d\n", i);
        scanf("%d %d", &m1[i], &m2[i]);

        mSoma[i] = soma(m1[i], m2[i]);
    }

    for (int i = 0; i < (lin*col); i++){
        printf("%d \n", mSoma[i]);
    }
    
    
    

    return 0;
}