#ifndef ESTOQUE_H_
#define ESTOQUE_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
    
typedef struct medicamento Medicamento;  // Define o tipo Medicamento
typedef struct arvore Arvore;            // Define o tipo Arvore
    
Medicamento* CriaMedicamento(char *nome, int codigo, float valor, int *data_de_validade); /* Cria um novo medicamento */
Arvore* CriaArvore() ; /* Cria uma arvore vazia */
Arvore* InsereArvoreMedicamento(FILE *fp, Arvore *a, Medicamento *m); /* Insere um medicamento pelo codigo na arvore */
Arvore* RetiraArvoreMedicamento(FILE *fp, Arvore *a, int id_medicamento);  /* Retira um medicamento de uma determinada arvore */
Arvore* AtualizaArvorePreco(FILE *fp, Arvore* a, int id_medicamento, float preco); /* Atualiza o preco de um medicamento da arvore */
int VerificaArvoreMedicamento(Arvore *a, int id_medicamento);  /* Verifica se um medicamento e s t presente em uma determinada arvore */
int VerificaArvoreValidade(FILE *fp, Arvore *a, int *data, int verificador);  /* Verifica se existe um medicamento vencido em uma determinada arvore */
void ImprimeArvoreMedicamentos(FILE *fp, Arvore *a);  /* Imprime em ordem pelo codigo todos os medicamentos de uma arvore (em ordem) */
Arvore *ArvoreLibera(Arvore* a);

#endif 