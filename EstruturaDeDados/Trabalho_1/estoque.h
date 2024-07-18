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
    
typedef struct medicamento Medicamento;  // Define o tipo Medicamento
typedef struct lista Lista;              // Define o tipo Lista
    
    
Medicamento* CriaMedicamento(char* nome, int codigo, float valor, int *data_de_validade);   // Cria um medicamento
Lista* CriaLista();                                                           // Cria a lista
Lista* InsereListaMedicamento(FILE *fp, Lista *l, Medicamento *m);       // Insere um medicamento na lista
Lista* RetiraListaMedicamento(FILE *fp, Lista *l, int id_medicamento);   // Retira um medicamento da lista
void VerificaListaMedicamento(FILE *fp, Lista *p, int id_medicamento);    // Verifica se o medicamento esta na lista
void VerificaListaValidade(FILE *fp, Lista *p, int *data);      // Verifica se um medicamento passou da validade
void ImprimeListaMedicamentos(FILE *fp, Lista *p);      // Printa a lista de medicamentos
Lista* OrdenaListaValor(Lista *p);        // Ordena a lista pelo valor
Lista* OrdenaListaVencimento(Lista *p);   // Ordena a lista pela validade
Lista* AtualizaPreco(FILE *fp, Lista* p, int id, float preco); // Atualiza um preco

#endif 