#include <stdio.h>
#include <stdlib.h>

typedef struct ArvBinBusca{
    int val;
    struct ArvBinBusca *dir;
    struct ArvBinBusca *esq;
}ArvBinBusca;


ArvBinBusca *criaArv_vazia(){
    return NULL;
}

ArvBinBusca *addArv(ArvBinBusca *a, int info){

    if(a == NULL){
        ArvBinBusca *p = (ArvBinBusca *) malloc (sizeof(ArvBinBusca));
        p->val = info;
        p->dir = NULL;
        p->esq = NULL;
    } else if (a->val > info){
        a->esq = addArv(a->esq, info);
    } else{
        a->dir = buscaArv(a->dir, info);
    } 

    return a;
}

ArvBinBusca *removeArv(){

}

int buscaArv(ArvBinBusca *arv, int valor){
    if(arv == NULL){
        return 0;
    } else if (arv->val == valor){
        return 1;
    } else if(arv->val < valor){
        return buscaArv(arv->esq, valor);
    } else {
        return buscaArv(arv->dir, valor);
    }
}

ArvBinBusca *liberaArv(){

}


int main(){


    return 0;
}