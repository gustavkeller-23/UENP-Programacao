#include "estoque.h"

int main(){

    Lista *lst = CriaLista();

    int data[3] = {03, 14, 2005};
    Medicamento *aux = CriaMedicamento("Paracetamol", 123, 8.70, data);

    return 0;
}
