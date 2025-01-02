#ifndef HEADER_H_
#define HEADER_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h> 

typedef struct Conjunto Conjunto;
typedef struct Elemento Elemento;

Conjunto *cria_conjunto();

// Deve-se ter um algoritmo de ordenação em adicionar e ordenação caso for criado um conjunto do zero
bool isEmpty(Conjunto *set);
int len(Conjunto *set);
bool isIn(Conjunto *set, int elem);
bool isNotIn(Conjunto *set, int elem);
bool isdisjoint(Conjunto *set1, Conjunto *set2); 
bool isSubSet(Conjunto *set1, Conjunto *set2);
bool isSuperSet(Conjunto *set1, Conjunto *set2);
void add(Conjunto *set, int elem);
void remover(Conjunto *set, int elem);
int pop(Conjunto *set);
void clear(Conjunto *set);
Conjunto *uniao(Conjunto *set1, Conjunto *set2);
Conjunto *intersection(Conjunto *set1, Conjunto *set2);
Conjunto *difference(Conjunto *set1, Conjunto *set2);
Conjunto *symmetricDifference(Conjunto *set1, Conjunto *set2);
void copy(Conjunto *set1, Conjunto *set2);
void print(Conjunto *set);

#endif 