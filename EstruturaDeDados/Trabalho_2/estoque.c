#include "estoque.h"

struct medicamento{
    char nome[20];
    int codigo;
    float valor;
    int data[3];
};
    
struct arvore{
    Medicamento *m;
    Arvore *esq;
    Arvore *dir;
};

Arvore* CriaArvore(){
    return NULL;
}

Medicamento* CriaMedicamento(char *nome, int codigo, float valor, int *data_de_validade){
    Medicamento *m = (Medicamento *) malloc (sizeof(Medicamento));
    strcpy(m->nome, nome);
    m->codigo = codigo;
    m->valor = valor;
    m->data[0] = data_de_validade[0];
    m->data[1] = data_de_validade[1];
    m->data[2] = data_de_validade[2];

    return m;
}

Arvore* InsereArvoreMedicamento(FILE *fp, Arvore *a, Medicamento *med){
    
    if(a == NULL){
        a = (Arvore *) malloc (sizeof(Arvore));
        a->m = med;
        a->dir = NULL;
        a->esq = NULL;
        fprintf(fp, "MEDICAMENTO %s %d ADICIONADO\n", a->m->nome, a->m->codigo);
    } else if (a->m->codigo > med->codigo){
        a->esq = InsereArvoreMedicamento(fp, a->esq, med);
    } else{
        a->dir = InsereArvoreMedicamento(fp, a->dir, med);
    } 

    return a;
}

Arvore* RetiraArvoreMedicamento(FILE *fp, Arvore *a, int id_medicamento){
    if(a == NULL){
        return NULL;
    }else if (a->m->codigo > id_medicamento){
        a->esq = RetiraArvoreMedicamento(fp, a->esq, id_medicamento);
    }else if (a->m->codigo < id_medicamento){
        a->dir = RetiraArvoreMedicamento(fp, a->dir, id_medicamento);
    } else {
        
        /* nó sem filhos */
        if (a->esq == NULL && a->dir == NULL) {
            fprintf(fp, "MEDICAMENTO %s %d RETIRADO\n", a->m->nome, a->m->codigo);
            free(a->m);
            free(a);
            a = NULL;
        }
        
        /* nó só tem filho à direita */
        else if (a->esq == NULL) {
            Arvore *t = a;
            a = a->dir;
            fprintf(fp, "MEDICAMENTO %s %d RETIRADO\n", t->m->nome, t->m->codigo);

            free(t->m);
            free(t);
        }

        /* só tem filho à esquerda */
        else if (a->dir == NULL) {
            Arvore *t = a;
            a = a->esq;
            fprintf(fp, "MEDICAMENTO %s %d RETIRADO\n", t->m->nome, t->m->codigo);
            free(t->m);
            free(t);
        }

        /* nó tem os dois filhos */
        else {
            Arvore *f = a->esq;
            while (f->dir != NULL) {
                f = f->dir;
            }
            Medicamento *t = a->m;
            strcpy(t->nome, a->m->nome);

            a->m = f->m; /* troca as informações */
            strcpy(a->m->nome, f->m->nome);

            f->m = t;
            strcpy(f->m->nome, t->nome);
            
            a->esq = RetiraArvoreMedicamento(fp, a->esq, id_medicamento);
        }
        
        return a;
    }
}

int VerificaArvoreMedicamento(Arvore *a, int id_medicamento){
    if(a == NULL){
        return 0;
    } else if(id_medicamento < a->m->codigo){
        return VerificaArvoreMedicamento(a->esq, id_medicamento);
    } else if(id_medicamento > a->m->codigo){
        return VerificaArvoreMedicamento(a->dir, id_medicamento);
    } else {
        return 1;
    }
}

int VerificaArvoreValidade(FILE *fp, Arvore *a, int *data, int verificador){
    if (a != NULL){
        VerificaArvoreValidade(fp, a->esq, data, verificador);

        if(data[2] > a->m->data[2]){
            verificador = 1;
            fprintf(fp, "MEDICAMENTO %s %d VENCIDO\n",  a->m->nome, a->m->codigo);
        }else if(data[2] == a->m->data[2] && data[1] > a->m->data[1]){
            verificador = 1;
            fprintf(fp, "MEDICAMENTO %s %d VENCIDO\n",  a->m->nome, a->m->codigo);
        }else if(data[2] == a->m->data[2] && data[1] == a->m->data[1] && data[0] > a->m->data[0]){
            verificador = 1;
            fprintf(fp, "MEDICAMENTO %s %d VENCIDO\n", a->m->nome, a->m->codigo);
        }

        VerificaArvoreValidade(fp, a->dir, data, verificador);
    }

    return verificador;
}

void ImprimeArvoreMedicamentos(FILE *fp, Arvore *a){
    if (a != NULL){
        ImprimeArvoreMedicamentos(fp, a->esq);
        fprintf(fp, "%s %d %.1f %d %d %d\n", a->m->nome, a->m->codigo, a->m->valor, a->m->data[0], a->m->data[1], a->m->data[2]);
        ImprimeArvoreMedicamentos(fp, a->dir);
    }
}

Arvore* AtualizaArvorePreco(FILE *fp, Arvore *a, int id_medicamento, float preco){
    if(a == NULL){
        return 0;
    } else if(id_medicamento < a->m->codigo){
        AtualizaArvorePreco(fp, a->esq, id_medicamento, preco);
    } else if(id_medicamento > a->m->codigo){
        AtualizaArvorePreco(fp, a->dir, id_medicamento, preco);
    } else {
        a->m->valor = preco;
        fprintf(fp, "PRECO ATUALIZADO %s %d %.1f\n",  a->m->nome, a->m->codigo, a->m->valor);
    }
}

Arvore* arv_libera(Arvore* a){
    if(a != NULL){
        arv_libera(a->esq); /* libera sae */
        arv_libera(a->dir); /* libera sad */
        free(a); /* libera raiz */
    }
    return NULL;
}