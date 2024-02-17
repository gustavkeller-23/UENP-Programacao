
/*Dada a estrutura a seguir representando os dados do aluno de uma disciplina.
struct cadastro {
int matricula ;
char nome [ 5 0 ] ;
float nota ;
} ;
Implemente fun ̧c ̃oes para:
a. Ler os dados de no m ́aximo 50 alunos e amarzene em um vetor de estrutura.
b. Exibir os dados dos alunos, informando os alunos aprovados (nota ≥ 7.0), de exame
(4.0 ≤ nota < 7.0) e reprovados (nota < 4.0).
c. Mostrar qual  ́e a m ́edia geral da turma.
d. Exibir o nome do aluno com a maior nota da turma.*/

#include <stdio.h>

#define MAX_ALUNOS 50
int numAlunosCadastrados = 1;

struct cadastro {
    int matricula;
    char nome[50];
    float nota;
};

void cadastrarAlunos(struct cadastro alunos[MAX_ALUNOS]){
    int cadastrarMais = 0;
    for (int i = 0; i < MAX_ALUNOS; i++){
        printf("Num de matricula: ");
        scanf("%d", &alunos[i].matricula);
        setbuf(stdin, NULL);

        printf("Qual o nome do aluno: ");
        fgets(alunos[i].nome, 50, stdin);
        setbuf(stdin, NULL);

        printf("Qual a nota do aluno: ");
        scanf("%f", &alunos[i].nota);
        setbuf(stdin, NULL);

        printf("Deseja cadastrar mais algum aluno?\n   0 - nao\t 1 - sim\n");
        scanf("%d", &cadastrarMais);
        setbuf(stdin, NULL);
        if (cadastrarMais == 0){
            break;
        }
        numAlunosCadastrados++;
    }
}

void verificarEstadoAluno(struct cadastro alunos[numAlunosCadastrados]){
    for (int i = 0; i < numAlunosCadastrados; i++){
        printf("Num de matricula: %d\n", alunos[i].matricula);
        printf("Qual o nome do aluno: %s", alunos[i].nome);
        printf("Qual a nota do aluno: %.2f\n", alunos[i].nota);
        if (alunos[i].nota >= 7)
            printf("APROVADO!\n");
        else if (alunos[i].nota >= 4)
            printf("DE EXAME!\n");
        else
            printf("REPROVADO!\n");
    }
}

void mediaDaClasse(struct cadastro alunos[numAlunosCadastrados]){
    int media = 0;
    for (int i = 0; i < numAlunosCadastrados; i++)
        media += alunos[i].nota;
    printf("A media da turma e de: %.2f \n", (float)media/numAlunosCadastrados);
}

void maiorNotaAluno(struct cadastro alunos[numAlunosCadastrados]){
    int alunoMaiorNota = 0;
    int maiorNota = 0;
    for (int i = 0; i < numAlunosCadastrados; i++){
        if (alunos[i].nota > maiorNota) {
            maiorNota = alunos[i].nota;
            alunoMaiorNota = i;
        }
    }
    printf("A maior nota foi %.2f, do aluno: %s", alunos[alunoMaiorNota].nota, alunos[alunoMaiorNota].nome);
}

int main(){

    struct cadastro alunos[MAX_ALUNOS];

    cadastrarAlunos(alunos);

    verificarEstadoAluno(alunos);

    mediaDaClasse(alunos);

    maiorNotaAluno(alunos);
    
    return 0;
}