#include "estoque.h"

Medicamento* CriaMedicamento(char* nome, int codigo, float valor, int *data_de_validade){
    Medicamento *m = (Medicamento *) malloc (sizeof(Medicamento));
    strcpy(m->nome, nome);
    m->codigo = codigo;
    m->valor = valor;
    m->data[0] = data_de_validade[0];
    m->data[1] = data_de_validade[1];
    m->data[2] = data_de_validade[2];

    return m;
}

Lista* CriaLista(){
    return NULL;
}

Lista* InsereListaMedicamento(FILE *fp, Lista *l, Medicamento *med){
    Lista *novo = (Lista *) malloc (sizeof(Lista));
    
    novo->m = med;
    novo->prox = l;

    fprintf(fp, "MEDICAMENTO %s %d ADICIONADO\n", novo->m->nome, novo->m->codigo);

    return novo;
}

Lista* RetiraListaMedicamento(FILE *fp, Lista *l, int id_medicamento){
    Lista *p, *ant = NULL;

    for (p = l; p != NULL && p->m->codigo != id_medicamento;){
        ant = p;
        p = p->prox;
    }
    
    if(ant == NULL){
        l = p->prox;
        fprintf(fp, "MEDICAMENTO %s %d RETIRADO\n", p->m->nome, p->m->codigo);
        free(p);
        return l;
    }

    if(p == NULL){
        fprintf(fp, "MEDICAMENTO NAO EXISTE\n");
        return l;
    } else {
        ant->prox = p->prox;
        fprintf(fp, "MEDICAMENTO %s %d RETIRADO\n", p->m->nome, p->m->codigo);
        free(p);
        return l;
    }
}

void VerificaListaMedicamento(FILE *fp, Lista *l, int id_medicamento){
    Lista *p;
    
    for (p = l; p != NULL && p->m->codigo != id_medicamento;){
        p = p->prox;
    }
    
    if(p == NULL){
        fprintf(fp, "MEDICAMENTO NAO ENCONTRADO\n");
    } else {
        fprintf(fp, "MEDICAMENTO ENCONTRADO\n");
    }
}

void VerificaListaValidade(FILE *fp, Lista *l, int *data){
    Lista *p;
    
    int count = 0; // verifica se tem remedios vencidos
    
    for (p = l; p != NULL; p = p->prox){
        if(data[2] > p->m->data[2]){
            count++;
            fprintf(fp, "MEDICAMENTO %s %d VENCIDO\n",  p->m->nome, p->m->codigo);
        } else if(data[2] == p->m->data[2] && data[1] > p->m->data[1]){
            count++;
            fprintf(fp, "MEDICAMENTO %s %d VENCIDO\n",  p->m->nome, p->m->codigo);
        } else if(data[2] == p->m->data[2] && data[1] == p->m->data[1] && data[0] > p->m->data[0]){
            count++;
            fprintf(fp, "MEDICAMENTO %s %d VENCIDO\n",  p->m->nome, p->m->codigo);
        }
    }
    
    if(count == 0)
        fprintf(fp, "MEDICAMENTO VENCIDO NAO ENCONTRADO NA LISTA\n");
}

void ImprimeListaMedicamentos(FILE *fp, Lista *l){
    Lista *p;
    
    for (p = l; p != NULL; p = p->prox){
        fprintf(fp, "%s %d %.1f %d %d %d\n", p->m->nome, p->m->codigo, p->m->valor, p->m->data[0], p->m->data[1], p->m->data[2]);
    }
}

Lista* OrdenaListaValor(Lista *l){
    
    // Selection Sort
    Lista *i, *j;
    for(i = l; i != NULL; i = i->prox){
        for(j = l; j != NULL; j = j->prox){
            if(i->m->valor < j->m->valor){
                Medicamento *aux = i->m;
                i->m = j->m;
                j->m = aux;
            }
        }
    }
    
    return l;
}

Lista* OrdenaListaVencimento(Lista *l){
    
    // Selection Sort
    Lista *i, *j;
    for(i = l; i != NULL; i = i->prox){
        for(j = l; j != NULL; j = j->prox){
            if(i->m->data[2] < j->m->data[2]){
                Medicamento *aux = i->m;
                i->m = j->m;
                j->m = aux;
            } else if(i->m->data[2] == j->m->data[2] && i->m->data[1] < j->m->data[1]){
                Medicamento *aux = i->m;
                i->m = j->m;
                j->m = aux;
            } else if(i->m->data[2] == j->m->data[2] && i->m->data[1] == j->m->data[1] && i->m->data[0] < j->m->data[0]){
                Medicamento *aux = i->m;
                i->m = j->m;
                j->m = aux;
            }
        }
    }
    
    return l;
}

Lista* AtualizaPreco(FILE *fp, Lista* l, int id, float preco){
    Lista *p;
    
    for (p = l; p != NULL && p->m->codigo != id;){
        p = p->prox;
    }
    
    if(p == NULL){
        fprintf(fp, "MEDICAMENTO NAO ENCONTRADO\n");
        return l;
    } else {
        p->m->valor = preco;
        fprintf(fp, "PRECO ATUALIZADO %s %d %.1f\n",  p->m->nome, p->m->codigo, p->m->valor);
        return l;
    }
}