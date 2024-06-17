#include "estoque.h"

Medicamento* CriaMedicamento(char* nome, int codigo, float valor, int *data_de_validade){
    Medicamento *m = (Medicamento *) malloc (sizeof(Medicamento));
    strcpy(m->nome, nome);
    m->codigo = codigo;
    m->valor = valor;
    m->data[0] = data_de_validade[0];
    m->data[1] = data_de_validade[1];
    m->data[2] = data_de_validade[2];

    printf("nome: %s\ncodigo: %d\nvalor: %.2f\nvalidade: %d/%d/%d", m->nome, m->codigo, m->valor, m->data[0], m->data[1], m->data[2]);
}

Lista* CriaLista(){
    return NULL;
}

Lista* InsereListaMedicamento(FILE *fp, Lista *l, Medicamento *m){

}

Lista* RetiraListaMedicamento(FILE *fp, Lista *l, int id_medicamento){

}

int VerificaListaMedicamento(FILE *fp, Lista *p, int id_medicamento){

}

int VerificaListaValidade(FILE *fp, Lista *p, int *data){

}

void ImprimeListaMedicamentos(FILE *fp, Lista *p){

}

Lista* OrdenaListaValor(Lista *p){

}

Lista* OrdenaListaVencimento(Lista *p){

}
