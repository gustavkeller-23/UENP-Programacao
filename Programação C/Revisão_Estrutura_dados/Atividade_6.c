/*Faça um programa utilizando struct que leia a informação de idade, peso e altura(cm) de n pessoas,
calcule o IMC e determine o maior valor. Use calloc. IMC = peso/altura² */

#include <stdio.h>
#include <stdlib.h>

typedef struct Pessoa{
    int idade;
    float peso;
    float altura;
    float IMC;
} Pessoa;

int main(){

    int num_pessoas;
    float maiorIMC = -1;

    printf("Quantas pessoas voce deseja calcular o IMC?");
    scanf("%d", &num_pessoas);

    Pessoa *pessoas = (Pessoa *) calloc (num_pessoas, sizeof(Pessoa));

    for (int i = 0; i < num_pessoas; i++){
        printf("Qual a idade da pessoa %d: ", i+1);
        scanf("%d", &pessoas[i].idade);
        printf("Qual o peso da pessoa %d: ", i+1);
        scanf("%f", &pessoas[i].peso);
        printf("Qual a altura da pessoa %d: ", i+1);
        scanf("%f", &pessoas[i].altura);

        pessoas[i].IMC = pessoas[i].peso / (pessoas[i].altura * pessoas[i].altura);
    }

    for (int i = 0; i < num_pessoas; i++){
        if(maiorIMC < pessoas[i].IMC){
            maiorIMC = pessoas[i].IMC;
        }
    }
    printf("O maior IMC e: %f", maiorIMC);

    free(pessoas);

    return 0;
}