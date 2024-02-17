
/*Fa ̧ca um programa para montar um banco de dados relacionado a um jogo, o qual deve
conter informa ̧c ̃oes de in ́umeros monstros e personagens. Inicialmente, o programa deve
receber a quantidade de personagens/monstros a ser cadastrada. Os dados a serem colocados
no banco s ̃ao:
• Uma sequencia de caracteres, que poder ́a ter no m ́aximo 20 caracteres, representando
um nome.
• 5 inteiros, representando ID, Level, Vida, Ataque e Defesa.
Ao final, o programa deve exibir o banco de dados cadastrado.*/

#include <stdio.h>

struct Personagens {
    char nome[20];
    int ID;
    int level;
    int vida;
    int ataque;
    int defesa;
};

void criarPersonagens(int quantPersonagens, struct Personagens personas[quantPersonagens]) {
    for (int i = 0; i < quantPersonagens; i++){
        printf("Qual o nome do personagem?");
        fgets(personas[i].nome, 20, stdin);
        setbuf(stdin, NULL);

        printf("Qual o ID do personagem?\n");
        scanf("%d", &personas[i].ID);
        setbuf(stdin, NULL);

        printf("Qual o level do personagem?\n");
        scanf("%d", &personas[i].level);
        setbuf(stdin, NULL);

        printf("Qual a vida do personagem?\n");
        scanf("%d", &personas[i].vida);
        setbuf(stdin, NULL);

        printf("Qual o ataque do personagem?\n");
        scanf("%d", &personas[i].ataque);
        setbuf(stdin, NULL);

        printf("Qual a defesa do personagem?\n");
        scanf("%d", &personas[i].defesa);
        setbuf(stdin, NULL);
    }
}

void imprimirPersonagens(int quantPersonagens, struct Personagens personas[quantPersonagens]){
    for (int i = 0; i < quantPersonagens; i++){
        printf("FICHA DE %s", personas[i].nome);
        printf(" -- ID : %d --\n", personas[i].ID);
        printf(" -- Level : %d --\n", personas[i].level);
        printf(" -- Vida : %d --\n", personas[i].vida);
        printf(" -- Ataque : %d --\n", personas[i].ataque);
        printf(" -- Defesa : %d --\n", personas[i].defesa);
    }
}

int main() {

    int quantPersonagens;

    printf("Quantos personagens e monstros existem no seu jogo?\n");
    scanf("%d", &quantPersonagens);
    setbuf(stdin, NULL);

    struct Personagens personas[quantPersonagens];

    criarPersonagens(quantPersonagens, personas);
    
    imprimirPersonagens(quantPersonagens, personas);

    return 0;
}