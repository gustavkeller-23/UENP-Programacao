
/*Defina uma estrutura aluno contendo os campos nome, sobrenome e nota. O programa
deve ler esses dados e armazenar dinamicamente na mem ́oria. Depois, implemente uma
fun ̧c ̃ao para imprimir o nome e sobrenome do aluno que possui maior nota. O prot ́otipo
da fun ̧c ̃ao  ́e seguinte:
void alunoMaiorNota(struct aluno *vetAlunos, int tam) {..}*/

#include <stdio.h>
#include <stdlib.h>

struct aluno {
    char nome[20];
    char sobrenome[20];
    int nota;
};

void alunoMaiorNota(struct aluno *vetAlunos, int tam){
    int maiorNota=0, numMaiorAluno;
    for (int i = 0; i < tam; i++){
        if (vetAlunos[i].nota >= maiorNota){
            maiorNota = vetAlunos[i].nota;
            numMaiorAluno = i;
        }
    }
    
    printf("Maior nota: %d\nAluno: %s", maiorNota, vetAlunos[numMaiorAluno].nome);
}

int main(){

    int numAlunos;
    struct aluno *alunos;

    printf("Quantos alunos voce tem?");
    scanf("%d", &numAlunos);

    alunos = (struct aluno *) malloc(numAlunos*sizeof(struct aluno));

    for (int i = 0; i < numAlunos; i++){
        printf("Digite o nome do aluno: ");
        setbuf(stdin, NULL);
        fgets(alunos[i].nome, 20, stdin);
        printf("Digite o sobrenome do aluno: ");
        setbuf(stdin, NULL);
        fgets(alunos[i].sobrenome, 20, stdin);
        printf("Digite a nota do aluno: ");
        setbuf(stdin, NULL);
        scanf("%d", &alunos[i].nota);
    }
    
    alunoMaiorNota(alunos, numAlunos);

    return 0;
}