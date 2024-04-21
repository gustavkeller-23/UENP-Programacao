/*Faça um programa utilizando calloc e struct que irá receber as notas de 3
avaliações de n pessoas, armazene em um vetor e calcule a média final de cada prova 
e apresente a maior nota. Use malloc*/

#include <stdio.h>
#include <stdlib.h>

typedef struct AvaliacaoPessoa{
    float Nota1;
    float Nota2;
    float Nota3;
} AvaliacaoPessoa;


int main(){

    int num_pessoas;
    float mediaNota1=0, mediaNota2=0, mediaNota3=0;
    
    printf("Qual o numero de pessoas que deseja saber as notas?\n");
    scanf("%d", &num_pessoas);

    AvaliacaoPessoa *pessoa = (AvaliacaoPessoa *) malloc (num_pessoas * sizeof(AvaliacaoPessoa));

    for (int i = 0; i < num_pessoas; i++){
        printf("Qual a primeira nota da pessoa %d?\n", i+1);
        scanf("%f", &pessoa[i].Nota1);
        printf("Qual a segunda nota da pessoa %d?\n", i+1);
        scanf("%f", &pessoa[i].Nota2);
        printf("Qual a terceira nota da pessoa %d?\n", i+1);
        scanf("%f", &pessoa[i].Nota3);

        mediaNota1 += pessoa[i].Nota1;
        mediaNota2 += pessoa[i].Nota2;
        mediaNota3 += pessoa[i].Nota3;
    }
    
    mediaNota1 = mediaNota1 / num_pessoas;
    mediaNota2 = mediaNota2 / num_pessoas;
    mediaNota3 = mediaNota3 / num_pessoas;

    float maiorNota1, maiorNota2, maiorNota3;

    for (int i = 0; i < num_pessoas; i++){
        if (maiorNota1 < pessoa[i].Nota1){
            maiorNota1 = pessoa[i].Nota1;
        }

        if (maiorNota2 < pessoa[i].Nota2){
            maiorNota2 = pessoa[i].Nota2;
        }

        if (maiorNota3 < pessoa[i].Nota3){
            maiorNota3 = pessoa[i].Nota3;
        }
    }
    printf("A maior nota da prova 1 foi: %.2f\n", maiorNota1);
    printf("A maior nota da prova 2 foi: %.2f\n", maiorNota2);
    printf("A maior nota da prova 3 foi: %.2f\n", maiorNota3);

    free(pessoa);

    return 0;
}