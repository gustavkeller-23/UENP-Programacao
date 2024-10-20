#ifndef URNA_H_
#define URNA_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define NAME_SIZE 50
#define QTD_VOTOS_SEG_TURNO 10

typedef struct Lista Lista;

/* URNA.C */
Lista *criarLista();
Lista *cadastrarChapa(Lista *lst, char nomeCand[NAME_SIZE], int numero, int data[3], char nomeVice[NAME_SIZE]);
Lista *removerCadastro(Lista *lst, int codigo);
void imprimirChapas(Lista *lst);
int verificarCodigo(int codigo, Lista *lst);
void salvarVoto(int votoInserido, Lista *lst);
void salvarBoletim(Lista *lst, int votosBrancos, int votosNulos, int votosValidos, int turno);
int ahSegundoTurno(Lista *lst, int votosBrancos, int votosNulos, int votosValidos);
Lista *liberarChapasSegundoTurno(Lista *lst);

/* PROMPTS.C */
void imprimirIniciacaoUrna();
void imprimirOpcoesCadastroUrna();
int perguntaCadastrarNovamente();
void imprimirIniciacaoVotacao();
void avisoVotacao();
void escreverBoletimUrna(Lista *lst, int votosBrancos, int votosNulos, int votosValidos, int turno);
void imprimirMensagemFIM();

#endif 