
/*Uma pesquisa feita com alunos do ensino fundamental coletou alguns dados para an ́alise,
como nome, idade, altura e peso. Fa ̧ca um programa que leia os dados de 20 crian ̧cas e
armazene em um vetor de estrutura. Depois, implemente uma fun ̧c ̃ao que mostre o nome
do aluno mais novo e o nome do aluno com o maior peso.*/

#include <stdio.h>

#define NUMERO_DE_ALUNOS 2

struct DadosAlunos{
    char nome[20];
    int idade;
    float altura;
    float peso;
};

void lerDados(struct DadosAlunos alunos[NUMERO_DE_ALUNOS]){
    printf("Cadastre os alunos!\n");
    for (int i = 0; i < NUMERO_DE_ALUNOS; i++){
        printf("Insira o nome do aluno: ");
        fgets(alunos[i].nome, 20, stdin);
        setbuf(stdin, NULL);

        printf("Insira a idade do aluno: ");
        scanf("%d", &alunos[i].idade);
        setbuf(stdin, NULL);

        printf("Insira a altura do aluno: ");
        scanf("%f", &alunos[i].altura);
        setbuf(stdin, NULL);

        printf("Insira o peso do aluno: ");
        scanf("%f", &alunos[i].peso);
        setbuf(stdin, NULL);
    }
    printf("\n");
}

void imprimirAlunos(struct DadosAlunos alunos[NUMERO_DE_ALUNOS]) {
    int alunoMaisNovo, alunoMaisPesado;
    int menor = 100;
    float maior = 0;

    for (int i = 0; i < NUMERO_DE_ALUNOS; i++){
        if (alunos[i].idade < menor){
            menor = alunos[i].idade;
            alunoMaisNovo = i;
        }
    }
    printf("O alunos mais novo tem %d anos e se chama: %s", alunos[alunoMaisNovo].idade, alunos[alunoMaisNovo].nome);

    for (int i = 0; i < NUMERO_DE_ALUNOS; i++){
        if (alunos[i].peso > maior){
            menor = alunos[i].peso;
            alunoMaisPesado = i;
        }
    }
    printf("O alunos mais pesado pesa %.2f kg e se chama: %s", alunos[alunoMaisPesado].peso, alunos[alunoMaisPesado].nome);
}

int main(){
    struct DadosAlunos alunos[NUMERO_DE_ALUNOS];

    lerDados(alunos);

    imprimirAlunos(alunos);

    return 0;
}