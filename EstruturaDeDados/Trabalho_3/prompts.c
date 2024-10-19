#include "urna.h"

void imprimirIniciacaoUrna(){
    printf("-------------------------\n");
    printf("Esta e uma urna eleitoral\n");
    printf("-------------------------\n");   
    Sleep(1000);
    system("cls");
    printf("-------------------------\n");
    printf("     INICIANDO A URNA    \n");
    printf("-------------------------\n");
    Sleep(1500);
    system("cls");
}

void imprimirOpcoesCadastroUrna(){
    printf(" ------------------------- \n");
    printf(" Defina qual sua atividade \n");
    printf(" ------------------------- \n");
    printf(" 1 - Cadastrar chapas. \n");
    printf(" 2 - Remover uma chapa. \n");
    printf(" 3 - Verificar Chapas. \n");
    printf(" 4 - Iniciar Votacao. \n\n");
}

int perguntaCadastrarNovamente(){
    int resposta = 2;
    while(resposta != 0 && resposta != 1){
        printf("----------------------------------\n");
        printf(" Deseja cadastrar mais uma chapa? \n");
        printf("     N = 0           S = 1        \n");
        printf("----------------------------------\n");
        scanf("%d", &resposta);
    }
    return resposta;
}

void imprimirIniciacaoVotacao(){
    system("cls");
    printf(" ------------------------- \n");
    printf("     Votacao Disponivel    \n");
    printf(" ------------------------- \n");  
    Sleep(1000);
    system("cls");
    printf("-------------------------\n");
    printf("     INICIANDO VOTACAO    \n");
    printf("-------------------------\n");
    Sleep(1500);
    system("cls");
}

void avisoVotacao(){
    system("cls");
    printf("           ATENCAO      \n");
    printf(" Para se encerrar a votacao\n");
    printf("  insira o valor -1 na urna \n\n\n");
    system("pause");
    system("cls");
}

void escreverBoletimUrnaPrimeiroTurno(Lista *lst, int votosBrancos, int votosNulos, int votosValidos){
    system("cls");
    printf("--------------------------\n");
    printf("     Urna Processando     \n");
    printf("--------------------------\n");

    salvarBoletimPrimeiroTurno(lst, votosBrancos, votosNulos, votosValidos);
    Sleep(3000);
    system("cls");
    
    printf("----------------------------------------------\n");
    printf("     Processamento realizado com sucesso!     \n");
    printf("----------------------------------------------\n");
    Sleep(2000);
    system("cls");
}

void escreverBoletimUrnaSegundoTurno(Lista *lst, int votosBrancos, int votosNulos, int votosValidos){
    system("cls");
    printf("--------------------------\n");
    printf("     Urna Processando     \n");
    printf("--------------------------\n");

    salvarBoletimSegundoTurno(lst, votosBrancos, votosNulos, votosValidos);
    Sleep(3000);
    system("cls");
    
    printf("----------------------------------------------\n");
    printf("     Processamento realizado com sucesso!     \n");
    printf("----------------------------------------------\n");
    Sleep(2000);
    system("cls");
}

void imprimirMensagemFIM(){
    printf("-------------------------------\n");
    printf("  Temos uma chapa Vencedora!   \n");
    printf("-------------------------------\n");

    Sleep(2000);
    system("cls");

    printf("-----------------------\n");
    printf("   FIM DAS ELEIÇÕES    \n");
    printf("-----------------------\n");

    system("pause");
    system("cls");
}