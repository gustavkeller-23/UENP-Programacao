
// 2. Suponha que agora foi definida uma estrutura para representar os dados dos livros, conforme
// exemplo abaixo. Com base nesta estrutura, implemente um programa para (a) gravar os
// dados dos livros em um arquivo. Em seguida, implemente outro programa para (b) ler os
// dados do arquivo e mostrar os dados lidos na tela.
// 1 struct l i v r o {
// 2 char t i t u l o [ 3 0 ] ;
// 3 int numRegistro ;
// 4 double p re c o ;
// 5 } ;

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