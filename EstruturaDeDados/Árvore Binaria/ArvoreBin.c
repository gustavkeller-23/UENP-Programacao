#include <stdio.h>
#include <stdlib.h>

typedef struct ArvBin{
    char letra;
    struct ArvBin *dir;
    struct ArvBin *esq;
} ArvBin;



ArvBin *cria_arvorevazia(){
    return NULL;
}

ArvBin *cria_arvore(char val, ArvBin *esquerda, ArvBin *direita){
    ArvBin *p = (ArvBin *) malloc (sizeof(ArvBin));
    if(p == NULL)
        exit(1);

    p->letra = val;
    p->dir = direita;
    p->esq = esquerda;

    return p;
}

int arvore_vazia(ArvBin *arv){
    return (arv==NULL);
}

void imprime_Arvore(ArvBin *p){
    if (!arvore_vazia(p)){
        imprime_Arvore(p->esq);
        imprime_Arvore(p->dir);
        printf(" %c \n", p->letra);
    }
}

int busca_arvore(ArvBin *p, char letraBusca){
    if (!arvore_vazia(p)){
        if (p->letra == letraBusca || busca_arvore(p->esq, letraBusca) || busca_arvore(p->dir, letraBusca))
            return 1;
    } else {
        return 0;
    }
}

ArvBin *esvazia_arvore(ArvBin *p){
    if (!arvore_vazia(p)){
        esvazia_arvore(p->esq);
        esvazia_arvore(p->dir);
        free(p);
    }
    return NULL;
}



int main(){

    ArvBin *Arbol1 = cria_arvore('g', cria_arvorevazia(), cria_arvorevazia());
    ArvBin *Arbol2 = cria_arvore('k', cria_arvorevazia(), Arbol1);
    ArvBin *Arbol3 = cria_arvore('j', cria_arvorevazia(), cria_arvorevazia());
    ArvBin *Arbol4 = cria_arvore('h', Arbol2, Arbol3);

    imprime_Arvore(Arbol4);

    printf("O caracter \"c\" existe na arvore?  %d\n", busca_arvore(Arbol4, 'c'));
    printf("O caracter \"g\" existe na arvore?  %d\n", busca_arvore(Arbol4, 'g'));

    esvazia_arvore(Arbol4);

    printf("%d\n", arvore_vazia(Arbol1));
    printf("%d\n", arvore_vazia(Arbol2));
    printf("%d\n", arvore_vazia(Arbol3));
    printf("%d\n", arvore_vazia(Arbol4));

    imprime_Arvore(Arbol4);


    return 0;
}