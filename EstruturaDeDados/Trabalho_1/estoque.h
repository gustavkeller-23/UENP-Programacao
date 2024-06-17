#ifndef ESTOQUE_H_
#define ESTOQUE_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


struct medicamento{
    char nome[20];
    int codigo;
    float valor;
    int data[3];
};

struct lista{
    struct medicamento *m;
    struct lista *prox;
};

typedef struct medicamento Medicamento;
typedef struct lista Lista;


Medicamento* CriaMedicamento(char* nome, int codigo, float valor, int *data_de_validade);
Lista* CriaLista();
Lista* InsereListaMedicamento(FILE *fp, Lista *l, Medicamento *m);
Lista* RetiraListaMedicamento(FILE *fp, Lista *l, int id_medicamento);
int VerificaListaMedicamento(FILE *fp, Lista *p, int id_medicamento);
int VerificaListaValidade(FILE *fp, Lista *p, int *data);
void ImprimeListaMedicamentos(FILE *fp, Lista *p);
Lista* OrdenaListaValor(Lista *p);
Lista* OrdenaListaVencimento(Lista *p);
#endif // ESTOQUE_H_
