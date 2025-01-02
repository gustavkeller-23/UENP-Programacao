
/*Defina uma estrutura adequada para armazenar os dados de um livro, contendo: c ́odigo,
t ́ıtulo, autor e assunto. Com base nessa estrutura, fa ̧ca o cadastro de livros usando a
aloca ̧c ̃ao dinˆamica de memoria e depois mostre esses dados na tela. Por fim, implemente
uma fun ̧cao que possibilite a busca de um determinado livro por meio de seu c ́odigo. A
busca deve retorna 1 caso o livro seja encontrado e 0, caso contr ́ario.*/

#include <stdio.h>
#include <stdlib.h>

struct Livros{
    int codigo;
    char titulo[20];
    char autor[20];
    char descricao[100];
};

int procurarLivro(struct Livros *livro, int tam){
    int codigoLivro;

    printf("Insira o codigo do livro que deseja procurar: ");
    scanf("%d", &codigoLivro);
    
    for (int i = 0; i < tam; i++) {
        if (codigoLivro == livro[i].codigo)
            return 1;
    }
    return 0;
}

int main(){
    int cadastrar = 1;
    struct Livros *livro;
    livro = (struct Livros *) malloc (30*sizeof(struct Livros));
    
    for (int i = 0; i < 30 && cadastrar!=0; i++){
        printf("Insira o codigo do livro: ");
        setbuf(stdin, NULL);
        scanf("%d", &livro[i].codigo);

        printf("Insira o titulo do livro: ");
        setbuf(stdin, NULL);
        fgets(livro[i].titulo, 20, stdin);

        printf("Insira o nome do autor do livro: ");
        setbuf(stdin, NULL);
        fgets(livro[i].autor, 20, stdin);

        printf("Insira uma descricao do livro: ");
        setbuf(stdin, NULL);
        fgets(livro[i].descricao, 100, stdin);

        printf("Caso nao deseje mais cadastrar livros digite 0\n");
        scanf("%d", &cadastrar);
    }

    (procurarLivro(livro, 30)) ? printf("Nao temos esse livro!") : printf("Temos esse livro!");

    return 0;
}