#include <stdio.h>

int main (){
    float salarioAtual, salarioFinal;
    int cargo;
    printf ("Escreva seu salario atual: \n");
    scanf ("%f", &salarioAtual);
    printf ("Defina agora sua função digitando:\n 1. Vendedor(a)\n 2. Auxiliar de Escritorio\n 3. Auxiliar de Enfermagem\n 4. Biblotecario(a)\n");
    scanf ("%d", &cargo);
    switch (cargo){
        case (1):
            salarioFinal = salarioAtual + ((salarioAtual/100) * 10); break;
        case (2):
            salarioFinal = salarioAtual + ((salarioAtual/100) * 7); break;
        case (3):
            salarioFinal = salarioAtual + ((salarioAtual/100) * 12); break;
        case (4):
            salarioFinal = salarioAtual + ((salarioAtual/100) * 11); break;
        default:
            printf ("Esse trabalho nao esta listado."); return 0;
        }
    printf ("O novo salario sera de %.2f", salarioFinal);
    return 0;
}