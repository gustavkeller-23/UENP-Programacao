
/*Fa ̧ca um programa para gerenciar a ficha de registro de passageiros de ˆonibus de uma
empresa. Os ˆonibus possuem 44 lugares numerados de 1 a 44. O programa deve ler
uma lista de registro de passageiros, com o n ́umero da passagem, data, de (origem), para
(destino), hor ́ario, poltrona, idade e nome do passageiro. A entrada termina quando o valor
do n ́umero da passagem for −1.
Ao final, o programa deve exibir o nome de todos os passageiros que estiverem acima da
m ́edia das idades e que estiverem sentados nas poltronas pares.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Horario{
    int horHora;
    int hoMinuto;
}Horario;

typedef struct Data{
    int dataDia;
    int dataMes;
    int dataAno;
}Data;

typedef struct Registro{
    int numPassagem;
    Data data;
    char origem[20];
    char destino[20];
    Horario hora;
    int poltrona;
    int idade;
    char nome[20];
}Registro;

void mostrarPassageiros(Registro *pessoas, int tam){
    int totalIdades = 0;
    for (int i = 0; i < tam; i++){
        printf("%d %d", totalIdades, pessoas[i].idade);
        totalIdades = totalIdades + pessoas[i].idade;        
    }
    int mediaIdades;
    mediaIdades = totalIdades / tam;
    
    for (int i = 0; i < tam; i++){
        if (pessoas[i].idade > mediaIdades){
            printf("A idade e maior\n");
            if (pessoas[i].poltrona%2 == 0){
                printf("Qual o numero da passagem: %d \n", pessoas[i].numPassagem);
                printf("Qual a data da viagem: %d/%d/%d \n", pessoas[i].data.dataDia, pessoas[i].data.dataMes, pessoas[i].data.dataAno);
                printf("Origem: %s", pessoas[i].origem);
                printf("Destino: %s", pessoas[i].destino);
                printf("Horario da viagem: %d:%d \n", pessoas[i].hora.horHora, pessoas[i].hora.hoMinuto);
                printf("Numero da poltrona: %d \n", pessoas[i].poltrona);
                printf("Idade do passageiro: %d \n", pessoas[i].idade);
                printf("Nome do passageiro: %s", pessoas[i].nome);
            }
        }
    }
}

int main(){

    Registro pessoas[44];

    int i = 0, cadastrar=0;
    while (cadastrar != -1 && i != 44){
        printf("Qual o numero da passagem: ");
        scanf("%d", &pessoas[i].numPassagem);
        printf("Qual a data da viagem: ");
        scanf("%d %d %d", &pessoas[i].data.dataDia, &pessoas[i].data.dataMes, &pessoas[i].data.dataAno);
        printf("Qual o lugar de origem: ");
        setbuf(stdin, NULL);
        fgets(pessoas[i].origem, 20, stdin);
        printf("Qual o destino do passageiro: ");
        setbuf(stdin, NULL);
        fgets(pessoas[i].destino, 20, stdin);
        printf("Qual o horario da viagem: ");
        scanf("%d %d", &pessoas[i].hora.horHora, &pessoas[i].hora.hoMinuto);
        printf("Qual o numero da poltrona: ");
        scanf("%d", &pessoas[i].poltrona);
        printf("Qual a idade do passageiro: ");
        scanf("%d", &pessoas[i].idade);
        printf("Qual o nome do passageiro: ");
        setbuf(stdin, NULL);
        fgets(pessoas[i].nome, 20, stdin);

        printf("Existe mais alguém a cadastrar?");
        scanf("%d", &cadastrar);
        i++;
    }

    mostrarPassageiros(pessoas, i);

    return 0;
}