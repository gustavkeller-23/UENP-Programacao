#include <stdio.h>
#include <stdlib.h>

typedef struct numeros{
    int num1;
    int num2;
    double num3;

    struct numeros *prox;
} Num;

// Criar lista
Num* criar_lista(){
    return NULL;
}

// Adicionar valor (2 modos)
Num* adicionar_valor(Num *num, int val1, int val2, double val3){

    Num *novo = (Num *) malloc (sizeof(Num));
    novo->num1 = val1;
    novo->num2 = val2;
    novo->num3 = val3;

    novo->prox = num;

    return novo;
}

Num* adicionar_valor_posicao(Num *num, int val1, int val2, double val3){

    Num *p;
    Num *ant;

    for(p = num, ant = NULL; p!=NULL && p->num1 < val1;){
        ant = p;
        p = p->prox;
    }

    Num *novo = (Num *) malloc (sizeof(Num));
    novo->num1 = val1;
    novo->num2 = val2;
    novo->num3 = val3;

    if(ant == NULL){
        novo->prox = num;
        return novo;
    } else {
        ant->prox = novo;
        novo->prox = p;
        return num;
    }
}

// remover valor


// printar lista
void imprimir_lista(Num *num){
    
    Num *p;
    
    for(p = num; p != NULL; p = p->prox){
        printf("Val 1: %d\nVal 2: %d\nVal 3: %lf\n----------------\n", p->num1, p->num2, p->num3);
    }
}

// lista vazia?
int lista_vazia(Num *num){
    return (num == NULL);
}

// igualdade de listas?
int ehIgual(Num *num1, Num *num2){
    
    Num *p1, *p2;

    for (p1 = num1, p2 = num2; p1 != NULL || p2 != NULL;){
        if (p1->num1 != p2->num1){
            return 0;
        }
        if (p1->num2 != p2->num2){
            return 0;
        }
        if (p1->num3 != p2->num3){
            return 0;
        }
    }
    
    return 1;
}

// esvaziar lista


// inverter lista


// buscar valor na lista


int main(){

    Num *numero1;
    //Num *numero2;

    numero1 = criar_lista();
    //numero2 = criar_lista();

    numero1 = adicionar_valor(numero1, 5, 6, 123.492184);
    numero1 = adicionar_valor(numero1, 1, 2, 1.3);

    //numero2 = adicionar_valor(numero2, 5, 6, 123.492184);
    //numero2 = adicionar_valor(numero2, 1, 2, 1.3);

    imprimir_lista(numero1);
    //imprimir_lista(numero2);

    //printf("%d", ehIgual(numero1, numero2));

    return 0;
}