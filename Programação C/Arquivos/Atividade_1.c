
// 1. Implemente um programa que (a) escreva em um arquivo um conjunto de dados formatados
// sobre livros, como por exemplo, o t ́ıtulo do livro, o n ́umero de registro e o pre ̧co do livro. Em
// seguida, implemente outro programa que (b) leia os dados do arquivo criado anteriormente
// e mostre os dados lidos na tela.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Livros{
    char titulo[30];
    int num_reg;
    double preco;
}Livros;

int main(){

    int continuar = 0;
    Livros libroTemp;

    FILE *fp = fopen("estoque.txt", "a");

    if(!fp){
        printf("SE FODEU!");
        exit(1);
    }

    while(1){
        setbuf(stdin, NULL);
        printf("Digite o titulo do livro: ");
        fgets(libroTemp.titulo, 30, stdin);
        printf("Digite o Numero de registro do livro: ");
        scanf("%d", &libroTemp.num_reg);
        printf("Digite o preco do livro: ");
        scanf("%lf", &libroTemp.preco);
        
        printf("Deseja guardar mais um livro? \n 0 - Nao    1 - Sim \n");
        scanf("%d", &continuar);

        fprintf(fp, "Nome: %s\n", libroTemp.titulo);
        fprintf(fp, "Numero do registro: %d\n", libroTemp.num_reg);
        fprintf(fp, "Preco: %lf\n", libroTemp.preco);

        if(!continuar){
            break;
        }
    }

    fclose(fp);

    fp = fopen("estoque.txt", "r");

    while(!feof(fp)){
        fscanf(fp, "Nome: %s\n", libroTemp.titulo);
        fscanf(fp, "Numero do registro: %d\n", &libroTemp.num_reg);
        fscanf(fp, "Preco: %lf\n", &libroTemp.preco);

        printf("Nome: %s \n", libroTemp.titulo);
        printf("Nome: %d \n", libroTemp.num_reg);
        printf("Nome: %lf \n", libroTemp.preco);
    }

    fclose(fp);

    return 0;
}