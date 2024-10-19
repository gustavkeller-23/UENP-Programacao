#include "urna.h"

int main(){
    int novoCadastro = 1;
    int codigoValido = 0; // variável de verificação de codigo
    int verificaCodigo = 0;
    int qtdChapas = 0;
    int votoInserido = 0;
    unsigned short int option = 0;
    Lista *lst = criarLista();

    imprimirIniciacaoUrna();

    while (option != 4){
        imprimirOpcoesCadastroUrna();
        scanf("%d", &option);

        switch (option) {
            case 1:
                novoCadastro = 1;
                while(qtdChapas < 99 && novoCadastro == 1){

                    if (qtdChapas == 99){
                        printf("Voce cadastrou o numero maximo de chapas!");
                        break;
                    }
                    
                    int codigo;
                    char nome[NAME_SIZE];
                    char nomeVice[NAME_SIZE];
                    int data[3];

                    codigoValido = 0;
                    while(!codigoValido){
                        printf("Digite o codigo da chapa: ");
                        scanf("%d", &codigo);

                        if(codigo > 0 && codigo < 100){
                            if(verificarCodigo(codigo, lst)){
                                codigoValido = 1;
                                qtdChapas++;
                            }else
                                printf("Codigo Indisponivel!\n");
                        } else {
                            printf("Codigo Indisponivel!\n");
                        }
                    }

                    setbuf(stdin, NULL);
                    printf("Digite o nome do Candidato: ");
                    fgets(nome, NAME_SIZE, stdin);

                    setbuf(stdin, NULL);
                    printf("Digite o nome do Vice Candidato: ");
                    fgets(nomeVice, NAME_SIZE, stdin);

                    printf("Digite a data de nascimento do candidato: ");
                    scanf("%d %d %d", &data[0], &data[1], &data[2]);

                    lst = cadastrarChapa(lst, nome, codigo, data, nomeVice);

                    novoCadastro = perguntaCadastrarNovamente();
                }
                break;

            case 2:
                printf("Digite o codigo da chapa que deseja remover: ");
                scanf("%d", &verificaCodigo);

                if(!verificarCodigo(verificaCodigo, lst)){
                    removerCadastro(lst, verificaCodigo);
                }else
                    printf("Codigo inexistente!\n");
                break;

            case 3:
                imprimirChapas(lst);
                break;

            case 4:
                printf("\n\n\n\n-----------------------\nIniciando a votacao . . .\n-----------------------\n\n");
                break;

            default:
                printf("\n\n -- OPERAÇÃO INVALIDA -- \n\n");
                option = 0;
                break;
        }
    }
    
    avisoVotacao();

    imprimirChapas(lst);
    system("pause");
    system("cls");

    int votosValidos = 0;
    int votosNulos = 0;
    int votosBrancos = 0;

    while (votoInserido != -1){
        printf(" ------------------------- \n");
        printf("      Insira seu voto      \n");
        printf(" ------------------------- \n");
        scanf("%d", &votoInserido);
    
        if (votoInserido >= 0 && votoInserido <= 99){   
            if (votoInserido == 0){
                votosBrancos++;
                printf("Voce votou em Branco.");
                Sleep(2000);
                system("cls");
            }else if(!verificarCodigo(votoInserido, lst)){
                salvarVoto(votoInserido, lst);
                votosValidos++;
            }else{
                votosNulos++;
                printf("Seu voto foi Nulo.");
                Sleep(2000);
                system("cls");
            }
        } else if(votoInserido != -1){
            printf("\n\nVoto inválido, tente outro código!\n");
            Sleep(2000);
            system("cls");
        }
    }

    escreverBoletimUrnaPrimeiroTurno(lst, votosBrancos, votosNulos, votosValidos);

    if (votosValidos+votosBrancos+votosNulos >= QTD_VOTOS_SEG_TURNO && ahSegundoTurno(lst, votosBrancos, votosNulos, votosValidos)){
        printf("--------------------------------\n");
        printf("     INICIANDO SEGUNDO TURNO    \n");
        printf("--------------------------------\n");

        lst = liberarChapasSegundoTurno(lst);
        votosBrancos = 0; votosNulos = 0; votosValidos = 0;

        while (votoInserido != -1){
            printf(" ------------------------- \n");
            printf("      Insira seu voto      \n");
            printf(" ------------------------- \n");
            scanf("%d", &votoInserido);
        
            if (votoInserido >= 0 && votoInserido <= 99){   
                if (votoInserido == 0){
                    votosBrancos++;
                    printf("Voce votou em Branco.");
                    Sleep(2000);
                    system("cls");
                }else if(!verificarCodigo(votoInserido, lst)){
                    salvarVoto(votoInserido, lst);
                    votosValidos++;
                }else{
                    votosNulos++;
                    printf("Seu voto foi Nulo.");
                    Sleep(2000);
                    system("cls");
                }
            } else if(votoInserido != -1){
                printf("\n\nVoto inválido, tente outro código!\n");
                Sleep(2000);
                system("cls");
            }
        }

        escreverBoletimUrnaSegundoTurno(lst, votosBrancos, votosNulos, votosValidos);

    } 

    system("cls");
    imprimirMensagemFIM();

    return 0;
}