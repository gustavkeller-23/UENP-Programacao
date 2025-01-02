#include "header.h"


int main(){

    Conjunto *conjunto1 = cria_conjunto();
    Conjunto *conjunto2 = cria_conjunto();
    Conjunto *conjunto3 = cria_conjunto();

    printf("%d \n", isEmpty(conjunto1));
    printf("%d \n\n", isEmpty(conjunto2));

    add(conjunto1, 1);
    add(conjunto1, 2);
    add(conjunto1, 3);
    add(conjunto1, 4);

    add(conjunto2, 2);
    add(conjunto2, 4);
    add(conjunto2, 6);
    add(conjunto2, 8);
    add(conjunto2, 10);

    add(conjunto3, 5);
    add(conjunto3, 10);
    add(conjunto3, 15);
    add(conjunto3, 20);

    printf("%d \n", isIn(conjunto1, 1));
    printf("%d \n\n", isIn(conjunto1, 6));
    printf("%d \n", isNotIn(conjunto1, 1));
    printf("%d \n\n", isNotIn(conjunto1, 6));

    printf("%d \n", isdisjoint(conjunto1, conjunto2));
    printf("%d \n\n", isdisjoint(conjunto1, conjunto3));

    printf("%d \n", len(conjunto1));
    printf("%d \n\n", len(conjunto2));

    print(conjunto1);
    print(conjunto2);
    print(conjunto3);

    remover(conjunto1, 5);
    remover(conjunto1, 3);
    remover(conjunto2, 10);

    int val = pop(conjunto2);
    printf("\n elemento removido com pop : %d \n", val);

    print(conjunto1);
    print(conjunto2);

    // Conjunto 3 Não será mais utilizado para testes!
    clear(conjunto3);
    printf("\nConjunto 3 vazio: %d\n\n", isEmpty(conjunto3));
    free(conjunto3);


    /* ------------------------------------------------------------------------------------------ */

    Conjunto *conjuntoSuperSet = cria_conjunto();
    Conjunto *conjuntoSubSet = cria_conjunto();

    add(conjuntoSubSet, 1);
    add(conjuntoSuperSet, 1);
    add(conjuntoSubSet, 2);
    add(conjuntoSuperSet, 2);
    add(conjuntoSubSet, 3);
    add(conjuntoSuperSet, 3);
    add(conjuntoSubSet, 4);
    add(conjuntoSuperSet, 4);
    add(conjuntoSuperSet, 5);

    printf("%d \n", isSubSet(conjuntoSubSet, conjuntoSuperSet));
    printf("%d \n\n", isSubSet(conjuntoSuperSet, conjuntoSubSet));

    printf("%d \n", isSuperSet(conjuntoSubSet, conjuntoSuperSet));
    printf("%d \n\n", isSuperSet(conjuntoSuperSet, conjuntoSubSet));
    
    clear(conjuntoSubSet);
    clear(conjuntoSuperSet);

    free(conjuntoSubSet);
    free(conjuntoSuperSet);

    /* ------------------------------------------------------------------------------------------ */

    Conjunto *conjunto4 = cria_conjunto();
    
    conjunto4 = uniao(conjunto1, conjunto2);
    
    print(conjunto4);
    clear(conjunto4);

    conjunto4 = intersection(conjunto1, conjunto2);

    print(conjunto4);
    clear(conjunto4);

    conjunto4 = difference(conjunto1, conjunto2);
    
    print(conjunto4);
    clear(conjunto4);

    conjunto4 = symmetricDifference(conjunto1, conjunto2);
    
    print(conjunto4);
    clear(conjunto4);

    copy(conjunto1, conjunto4);
    
    print(conjunto1);
    print(conjunto4);

    clear(conjunto1);
    clear(conjunto2);
    clear(conjunto4);

    free(conjunto1);
    free(conjunto2);
    free(conjunto4);
    
    return 0;
}