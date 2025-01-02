#include <stdio.h>

int main (){
    int CID;
    float valorHora, salario, horasTrabalho;
    printf ("Escreva o numeo do seu funcionario, quantas horas trabalhou e quanto e o valor ganho por horas: ");
    scanf ("%d%f%f", &CID, &horasTrabalho, &valorHora);
    
    salario = horasTrabalho * valorHora;
    
    printf ("O funcionario de numero %d obteve um salario de %.2f", CID, salario);
    return 0;
}