#include <stdio.h>

int main ()
{
    float nota1, nota2, nota3, nota4, mediap;
    printf ("Digite as notas do aluno\n");
    printf ("Digite a nota da prova 1\n");
    scanf ("%f", &nota1);
    printf ("Digite a nota da prova 2\n");
    scanf ("%f", &nota2);
    printf ("Digite a nota da prova 3\n");
    scanf ("%f", &nota3);
    printf ("Digite a nota da prova 4\n");
    scanf ("%f", &nota4);    
    mediap = ((nota1 * 1.5) + (nota2 * 2) + (nota3 * 3) + (nota4 * 3.5)) / 10;
    printf("a media foi %.2f\n", mediap);
    return 0;
}