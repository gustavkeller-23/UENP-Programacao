#include "urna.h"

struct Lista{
    char nomeCandidato[NAME_SIZE];
    int numeroCandidato;
    int dataNascimentoCandidato[3];
    char nomeViceCandidato[NAME_SIZE];
    int qtdVotos;

    Lista *prox;
};

Lista *criarLista(){
    return NULL;
}

Lista *cadastrarChapa(Lista *lst, char nomeCand[NAME_SIZE], int codigo, int data[3], char nomeVice[NAME_SIZE]){
    // Cadastra a chapa de maneira ordenada por código
    Lista *p;
    Lista *ant;

    for(p = lst, ant = NULL; p!=NULL && p->numeroCandidato < codigo;){
        ant = p;
        p = p->prox;
    }

    Lista *novo = (Lista *) malloc (sizeof(Lista));
    strcpy(novo->nomeCandidato, nomeCand);
    strcpy(novo->nomeViceCandidato, nomeVice);
    novo->numeroCandidato = codigo;
    novo->dataNascimentoCandidato[0] = data[0];
    novo->dataNascimentoCandidato[1] = data[1];
    novo->dataNascimentoCandidato[2] = data[2];
    novo->qtdVotos = 0;

    if(ant == NULL){
        novo->prox = lst;
        return novo;
    } else {
        ant->prox = novo;
        novo->prox = p;
        return lst;
    }
}

Lista *removerCadastro(Lista *lst, int codigo){
    
    if (lst == NULL){
        printf("Lista Vazia!\n");
        return NULL;
    }
    
    Lista *p;
    Lista *ant;

    for(p = lst, ant = NULL; p!=NULL && p->numeroCandidato < codigo;){
        ant = p;
        p = p->prox;
    }

    if(ant == NULL){
        if(p->numeroCandidato == codigo){
            lst = p->prox;
            printf("CHAPA %d: %s e %s. REMOVIDA", p->numeroCandidato, p->nomeCandidato, p->nomeViceCandidato);
            free(p);
            return lst;
        } else {
            printf("Codigo de chapa nao cadastrada! \n");
            return lst;
        }
    }else if(p->numeroCandidato == codigo){
        ant->prox = p->prox;
        printf("CHAPA %d: %s e %s. REMOVIDA", p->numeroCandidato, p->nomeCandidato, p->nomeViceCandidato);
        free(p);
        return lst;
    } else {
        printf("Codigo de chapa nao cadastrada! \n");
        return lst;
    }
}

void imprimirChapas(Lista *lst){
    Lista *p;
    
    if (lst == NULL){
        printf("Lista Vazia!\n\n");
        return;
    }
    for(p = lst; p!=NULL;){
        printf(" --------------- CHAPA %d -------------- \n", p->numeroCandidato);
        printf("Nome do Candidato: %s ", p->nomeCandidato);
        printf("Nome do Vice do Candidato: %s ", p->nomeViceCandidato);
        printf("Data de Nascimento do Candidato: %d / %d / %d \n\n", p->dataNascimentoCandidato[0], p->dataNascimentoCandidato[1], p->dataNascimentoCandidato[2]);
        p = p->prox;
    }
}

int verificarCodigo(int codigo, Lista *lst){
    Lista *p;

    if (lst == NULL)
        return 1;
    
    for(p = lst; p!=NULL && p->numeroCandidato <= codigo; p = p->prox){
        if (codigo == p->numeroCandidato)
            return 0;
    }
    return 1;
}

void salvarVoto(int votoInserido, Lista *lst){
    Lista *p;
    
    for(p = lst; p->numeroCandidato != votoInserido;){
        p = p->prox;
    }

    p->qtdVotos++;
    printf("Seu voto em %sCom Vice %sfoi confirmado!", p->nomeCandidato, p->nomeViceCandidato);

    Sleep(2000);
    system("cls");
}

void salvarBoletimPrimeiroTurno(Lista *lst, int votosBrancos, int votosNulos, int votosValidos){
    FILE *fp = fopen("BoletimPrimeiroTurno.txt", "w+");
    fprintf(fp, "Resultados do Primeiro Turno\n\n");

    for (Lista *p = lst; p != NULL; p = p->prox){
        fprintf(fp, "Chapa %d. Prefeito: %s Vice Prefeito: %s Votos: %d (%d%%).\n", p->numeroCandidato, p->nomeCandidato, p->nomeViceCandidato, p->qtdVotos, p->qtdVotos*100/votosValidos);
    }

    fprintf(fp, "\n\nVotos Nulos : %d.\nVotos Brancos : %d.\nVotos Válidos : %d.\nVotos Totais : %d.", votosNulos, votosBrancos, votosValidos, (votosNulos+votosBrancos+votosValidos));
    fclose(fp);
}

void salvarBoletimSegundoTurno(Lista *lst, int votosBrancos, int votosNulos, int votosValidos){
    FILE *fp = fopen("BoletimSegundoTurno.txt", "w+");
    fprintf(fp, "Resultados do Segundo Turno\n\n");

    for (Lista *p = lst; p != NULL; p = p->prox){
        fprintf(fp, "Chapa %d. Prefeito: %sVice Prefeito: %sVotos: %d (%d%%).\n\n", p->numeroCandidato, p->nomeCandidato, p->nomeViceCandidato, p->qtdVotos, p->qtdVotos*100/votosValidos);
    }

    fprintf(fp, "\n\nVotos Nulos : %d.\nVotos Brancos : %d.\nVotos Válidos : %d.\nVotos Totais : %d.", votosNulos, votosBrancos, votosValidos, (votosNulos+votosBrancos+votosValidos));
    fclose(fp);
}

int ahSegundoTurno(Lista *lst, int votosBrancos, int votosNulos, int votosValidos){
    Lista *p;

    for(p = lst; p != NULL; p = p->prox){
        if(p->qtdVotos >= ((votosValidos+votosBrancos+votosNulos)/2)+1){
            FILE *fp = fopen("BoletimPrimeiroTurno.txt", "w");
            fprintf(fp, "o vencedor foi:\nChapa %d. Prefeito: %sVice Prefeito: %s\n", p->numeroCandidato, p->nomeCandidato, p->nomeViceCandidato, p->qtdVotos, p->qtdVotos*100/votosValidos);
            fclose(fp);
            return 0;
        }
    }
    return 1;
}

Lista *liberarChapasSegundoTurno(Lista *lst){
    int Maior = 0, segundoMaior = 0;



    return lst;
}