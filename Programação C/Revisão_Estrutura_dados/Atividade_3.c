/*Faça um programa utilizando o malloc, que leia o peso de n pessoas,
armazene em um vetor e encontre a pessoa com o peso mais distante da média*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num_pessoas, pessoaMediaDistante;
    float *pessoas, mediaPesos=0, diferencaPesos=0;

    printf("Qual o numero de pessoas que deseja saber o peso?\n");
    scanf("%d", &num_pessoas);

    pessoas = (float *) malloc (num_pessoas * sizeof(float));

    for (int i = 0; i < num_pessoas; i++){
        printf("Insira o peso da pessoa %d: ", i+1);
        scanf("%f", &pessoas[i]);

        mediaPesos += pessoas[i];
    }
    
    mediaPesos = mediaPesos / num_pessoas;

    for (int i = 0; i < num_pessoas; i++){

        float calculaDiferencaPesos = abs(pessoas[i] - mediaPesos);

        if(calculaDiferencaPesos > diferencaPesos){
            diferencaPesos = calculaDiferencaPesos;
            pessoaMediaDistante = i;
        }
    }

    printf("A media dos pesos e: %.2f\n O peso mais distante e: %.2f", mediaPesos, pessoas[pessoaMediaDistante]);

    free(pessoas);

    return 0;
}