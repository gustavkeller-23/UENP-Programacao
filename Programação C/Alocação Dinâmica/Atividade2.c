
/*Implemente um programa que leia os c ́odigos de matr ́ıcula dos alunos de duas disciplinas
(progI e progII) e mostre os c ́odigos de matr ́ıculas dos alunos que est ̃ao cursando ambas as
disciplinas. O n ́umero de alunos de ambas as turmas  ́e informado pelo usu ́ario. O espa ̧co
de mem ́oria necess ́ario para armazenar os c ́odigos das matr ́ıculas nas disciplinas deve ser
criado dinamicamente, de acordo com esse n ́umero.*/

#include <stdio.h>
#include <stdlib.h>

struct Matricula{
    int numMatricula;
    int quantDisciplinas;
};

int main() {

    int quantAlunos;

    printf("A quantidade de alunos nas turmas: ");
    scanf("%d", &quantAlunos);

    struct Matricula *alunos;
    alunos = (struct Matricula *) malloc(quantAlunos*sizeof(struct Matricula));

    for (int i = 0; i < quantAlunos; i++){
        printf("Qual a matricula do aluno: ");
        scanf("%d", &alunos[i].numMatricula);
        printf("Quantas disciplinas o aluno tem: ");
        scanf("%d", &alunos[i].quantDisciplinas);
    }
    
    for (int i = 0; i < quantAlunos; i++){
        if (alunos[i].quantDisciplinas == 2){
            printf("O aluno: %d, esta nas duas disciplinas\n", alunos[i].numMatricula);    
        }
    }


    return 0;
}