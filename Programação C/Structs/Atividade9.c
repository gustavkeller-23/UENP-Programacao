
/*Fa ̧ca um programa para gerenciar o cadastro de um n ́umero indeterminado de games/jogos
digitais. Para isso:
a. Defina uma estrutura adequada para representar cada jogo, incluindo os campos: nome
do jogo, gˆenero (por ex., RPG, a ̧c ̃ao, simula ̧c ̃ao,etc.), modo de jogo (single player,
multiplayer), plataforma suportada e posi ̧c ̃ao no ranking. Outros campos podem ser
inclu ́ıdos, caso julgue pertinente.
b. Crie uma fun ̧c ̃ao para ler as informa ̧c ̃oes dos jogos e armazenar em um vetor de
estrutura (array de struct).
c. Crie uma fun ̧c ̃ao para exibir todos os jogos cadastrados.
d. Crie uma fun ̧c ̃ao que receba o gˆenero do jogo e mostre as informa ̧c ̃oes de todos os
jogos que se encaixam nessa classifica ̧c ̃ao.
e. Crie uma fun ̧c ̃ao que leia do usu ́ario um n ́umero entre 1 e 5 (quanto maior o ranking,
maior a classifica ̧c ̃ao). Em seguida, exiba as informa ̧c ̃oes do jogo correspondendo
`a posi ̧c ̃ao do ranking dos jogos de que vocˆe mais gostou, de acordo com o que foi
informado pelo usu ́ario.
f. Crie uma fun ̧c ̃ao que receba o nome do jogo e indique se ele est ́a entre os seus favoritos
ou n ̃ao.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct Jogos{
    char nome[20];
    char genero[20];
    char modoDeJogo; //(s-single player m-multiplayer)
    char plataformas[30];
    int ranking;
}Jogos;

int lerJogos(Jogos *jogos){
    int cadastro = 0, i = 0;
    while (cadastro != -1){
        printf("Digite o nome do jogo: ");
        setbuf(stdin, NULL);
        fgets(jogos[i].nome, 20, stdin);
        printf("Digite o genero do jogo: ");
        setbuf(stdin, NULL);
        fgets(jogos[i].genero, 20, stdin);
        printf("Digite o modo do jogo: ");
        scanf(" %c", &jogos[i].modoDeJogo);
        printf("Digite as plataformas do jogo: ");
        setbuf(stdin, NULL);
        fgets(jogos[i].plataformas, 30, stdin);
        printf("Digite a posicao no ranking do jogo: ");
        scanf("%d", &jogos[i].ranking);

        printf("Existe mais alguém a cadastrar?");
        scanf("%d", &cadastro);
        i++;
    }
    
    return i;
}

void mostrarJogos(Jogos *jogos, int numJogos){
    for (int i = 0; i < numJogos; i++){
        printf("Nome do jogo: %s", jogos[i].nome);
        printf("Genero do jogo: %s", jogos[i].genero);
        if (jogos[i].modoDeJogo == 'm')
            printf("Modo do jogo: Singleplayer\n");
        else
            printf("Modo do jogo: Multiplayer\n");
        printf("Plataformas do jogo: %s", jogos[i].plataformas);
        printf("Ranking do jogo: %d", jogos[i].ranking);
    }
}

void jogosPorGenero(Jogos *jogos, int numJogos){
    
    int count = 0;
    char genero[20];
    printf("Digite o genero do jogo: ");
    setbuf(stdin, NULL);
    fgets(genero, 20, stdin);

    for (int i = 0; i < numJogos; i++){
        for (int j = 0; j < strlen(genero); j++){
            if (genero[j] == jogos[i].genero[j]){
                count++;
            }
        }

        if (strlen(genero) == count){
            printf("Nome do jogo: %s", jogos[i].nome);
            if (jogos[i].modoDeJogo == 'm')
                printf("Modo do jogo: Singleplayer\n");
            else
                printf("Modo do jogo: Multiplayer\n");
            printf("Plataformas do jogo: %s", jogos[i].plataformas);
            printf("Ranking do jogo: %d", jogos[i].ranking);
            printf("\n");
        }
        count = 0;
    }
}

void mostrarRanking(Jogos *jogos, int numJogos){

    int num;
    printf("Digite um numero para ver o ranking: ");
    scanf("%d", &num);

    for (int i = 0; i < numJogos; i++){
        if (num == jogos[i].ranking){
            printf("Nome do jogo: %s", jogos[i].nome);
            if (jogos[i].modoDeJogo == 'm')
                printf("Modo do jogo: Singleplayer\n");
            else
                printf("Modo do jogo: Multiplayer\n");
            printf("Plataformas do jogo: %s", jogos[i].plataformas);
            printf("Ranking do jogo: %d", jogos[i].ranking);
            printf("\n");
        }
    }
} 

void Favoritos(Jogos *jogos, int numJogos){

    int count = 0;
    char nomeDeJogo[20];
    printf("Digite o nome do jogo: ");
    setbuf(stdin, NULL);
    fgets(nomeDeJogo, 20, stdin);

    for (int i = 0; i < numJogos; i++){
        for (int j = 0; j < strlen(nomeDeJogo); j++){
            if (nomeDeJogo[j] == jogos[i].nome[j]){
                count++;
            }
        }
        
        if (strlen(nomeDeJogo) == count){
            if (jogos[i].ranking == 5 || jogos[i].ranking == 4 || jogos[i].ranking == 3 || jogos[i].ranking == 2 || jogos[i].ranking == 1){
                printf("Nome do jogo: %s", jogos[i].nome);
                if (jogos[i].modoDeJogo == 'm')
                    printf("Modo do jogo: Singleplayer\n");
                else
                    printf("Modo do jogo: Multiplayer\n");
                printf("Plataformas do jogo: %s", jogos[i].plataformas);
                printf("Ranking do jogo: %d", jogos[i].ranking);
                printf("\n");
            } else {
                printf("Esse jogo nao está na sua lista de favoritos");
            }
        }
        count = 0;
    }
}

int main(){

    Jogos jogos[10];
    int quantJogosCadastrados;
    
    quantJogosCadastrados = lerJogos(jogos);

    mostrarJogos(jogos, quantJogosCadastrados);

    jogosPorGenero(jogos, quantJogosCadastrados);

    mostrarRanking(jogos, quantJogosCadastrados);

    Favoritos(jogos, quantJogosCadastrados);

    return 0;
}