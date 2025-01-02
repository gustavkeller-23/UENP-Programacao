#include "header.h"

struct Conjunto{
    struct Elemento *conjunto;
};

struct Elemento{
    int number;
    Elemento *next;
};


Conjunto *cria_conjunto(){
    Conjunto *newConjunto = (Conjunto *) malloc (sizeof(Conjunto));
    newConjunto->conjunto = NULL;
    return newConjunto;
}




bool isEmpty(Conjunto *set){
    return set->conjunto == NULL;
}


int len(Conjunto *set){
    if(!isEmpty(set)){
        int tamSet = 0;
        for(Elemento *p = set->conjunto; p != NULL; p = p->next)
            tamSet++;
        return tamSet;
    }
    return 0;    
}


bool isIn(Conjunto *set, int elem){
    if(!isEmpty(set)){
        for(Elemento *p = set->conjunto; p != NULL; p = p->next){
            if (p->number == elem)
                return true;
        }
    }
    return false;
}


bool isNotIn(Conjunto *set, int elem){
    if(!isEmpty(set)){
        for(Elemento *p = set->conjunto; p != NULL; p = p->next){
            if (p->number == elem)
                return false;
        }
    }
    return true;
}


bool isdisjoint(Conjunto *set1, Conjunto *set2){
    Elemento  *p1, *p2;
    for (p1 = set1->conjunto, p2 = set2->conjunto; p1 != NULL && p2 != NULL;){
        if(p1->number == p2->number)
            return false;
        else if(p1->number > p2->number)
            p2 = p2->next;
        else
            p1 = p1->next;
    }
    return true; 
}


bool isSubSet(Conjunto *set1, Conjunto *set2){
    Elemento *p1 = set1->conjunto;
    Elemento *p2 = set2->conjunto;
    while(p1 != NULL){
        while (p1->number != p2->number){
            p2 = p2->next;
            if (p2 == NULL){
                return false;
            }
        }
        p1 = p1->next;
        p2 = set2->conjunto;
    }
    return true;
}


bool isSuperSet(Conjunto *set1, Conjunto *set2){
    Elemento *p1 = set1->conjunto; 
    Elemento *p2 = set2->conjunto;
    while(p2 != NULL){
        while (p1->number != p2->number){
            p1 = p1->next;
            if (p1 == NULL){
                return false;
            }
        }
        p2 = p2->next;
    }
    return true;
}


void add(Conjunto *set, int elem){
    if(isIn(set, elem)){return;}
    Elemento *new = (Elemento *) malloc (sizeof(Elemento));
    new->number = elem;

    Elemento *p, *ant = NULL;
    for (p = set->conjunto; p != NULL && elem > p->number;){
        ant = p;
        p = p->next;
    }

    if (ant == NULL){
        new->next = p;
        set->conjunto = new;
    } else {
        ant->next = new;
        new->next = p;
    }
}

void remover(Conjunto *set, int elem){
    if(isNotIn(set, elem)){
        printf("O elemento nao esta no conjunto.\n");
        return;
    }
    
    Elemento *p = set->conjunto;
    Elemento *ant = NULL;
    while (p->number != elem){
        ant = p; p = p->next;
    }

    ant->next = p->next;
    free(p);
}


int pop(Conjunto *set){
    srand(time(NULL));

    if(isEmpty(set))
        return 0;

    int elem; 
    do { 
        elem = rand() % 10; 
    } while (isNotIn(set, elem));

    remover(set, elem);
    return elem;
}


void clear(Conjunto *set){
    Elemento *p = set->conjunto->next;
    Elemento *ant = set->conjunto;
    while(ant != NULL){
        free(ant);
        ant = p;
        if(p != NULL)
            p = p->next;
    }
    set->conjunto = NULL;
}


Conjunto *uniao(Conjunto *set1, Conjunto *set2){
    Conjunto *conjuntoUniao = (Conjunto *) malloc (sizeof(Conjunto));
    conjuntoUniao->conjunto = NULL;
    copy(set1, conjuntoUniao);

    for(Elemento *p = set2->conjunto; p != NULL; p = p->next){
        if(isNotIn(conjuntoUniao, p->number))
            add(conjuntoUniao, p->number);
    }
    
    return conjuntoUniao;
}

Conjunto *intersection(Conjunto *set1, Conjunto *set2){
    if (isdisjoint(set1, set2)){return NULL;}
    
    Conjunto *conjuntoIntersection = (Conjunto *) malloc (sizeof(Conjunto));
    conjuntoIntersection->conjunto = NULL;
    for(Elemento *p = set1->conjunto; p != NULL; p = p->next){
        if(isIn(set2, p->number))
            add(conjuntoIntersection, p->number);
    }
    return conjuntoIntersection;
}

Conjunto *difference(Conjunto *set1, Conjunto *set2){
    Conjunto *conjuntoDifference = (Conjunto *) malloc (sizeof(Conjunto));
    conjuntoDifference->conjunto = NULL;

    for(Elemento *p = set1->conjunto; p != NULL; p = p->next){
        if(isNotIn(set2, p->number))
            add(conjuntoDifference, p->number);
    }
    
    return conjuntoDifference;
}

Conjunto *symmetricDifference(Conjunto *set1, Conjunto *set2){
    Conjunto *conjuntoDifference = (Conjunto *) malloc (sizeof(Conjunto));
    conjuntoDifference->conjunto = NULL;

    for(Elemento *p = set1->conjunto; p != NULL; p = p->next){
        if(isNotIn(set2, p->number))
            add(conjuntoDifference, p->number);
    }

    for(Elemento *p = set2->conjunto; p != NULL; p = p->next){
        if(isNotIn(set1, p->number))
            add(conjuntoDifference, p->number);
    }
    
    return conjuntoDifference;
}

void copy(Conjunto *set1, Conjunto *set2){
    if (!isEmpty(set2))
        clear(set2);

    for(Elemento *p = set1->conjunto; p != NULL; p = p->next){
        add(set2, p->number);
    }
}


void print(Conjunto *set){
    printf("O conjunto e composto por: \n");
    Elemento *p = set->conjunto;
    while(p != NULL){
        printf("%d, ", p->number);
        p = p->next;
    }
    printf("\n-----------------------------------------\n");
}