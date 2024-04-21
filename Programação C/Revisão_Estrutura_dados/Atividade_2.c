/* Crie um programa utilizando struct e calloc que leia a informação de peso(N) e
área da base (m2) de n objetos e calcule a pressão de cada objeto. Pressão =Força Peso(N)/Área(m2) */

#include <stdio.h>
#include <stdlib.h>

typedef struct Objeto{
    float peso;
    float areaDaBase;
    float pressao;
} Objeto;

int main(){

    int num_objetos;

    printf("Qual o numero de objetos?\n");
    scanf("%d", &num_objetos);

    Objeto *objetos = (Objeto *) calloc (num_objetos, sizeof(Objeto));

    for (int i = 0; i < num_objetos; i++){
        printf("Qual o peso do objeto?\n");
        scanf("%f", &objetos[i].peso);
        printf("Qual a area da base do objeto?\n");
        scanf("%f", &objetos[i].areaDaBase);

        objetos[i].pressao = objetos[i].peso / objetos[i].areaDaBase;
    }
    
    for (int i = 0; i < num_objetos; i++){
        printf(" --- Objeto %d --- \n   Peso: %.2f\n   Area da Base: %.2f\n   Pressao: %.2f \n\n", i+1, objetos[i].peso, objetos[i].areaDaBase, objetos[i].pressao);
    }

    free(objetos);

    return 0;
}