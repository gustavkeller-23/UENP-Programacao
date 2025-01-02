
// 5. Fa ̧ca uma fun ̧c ̃ao que receba como parˆametros um vetor e seu tamanho grave-o em um
// arquivo texto. Cada valor do vetor deve ser salvo em uma linha do arquivo.

#include <stdio.h>
#include <stdlib.h>

void verVetor(int tam, int vet[tam]){
    FILE *fp = fopen("vetor.txt", "w");

    if(!fp){
        printf("SE FODEU!");
        exit(1);
    }

    for (int i = 0; i < tam; i++)
        fprintf(fp, "%d\n", vet[i]);
    fclose(fp);
}

int main(){
    int tamanho = 20;
    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
        vetor[i] = i;

    verVetor(tamanho, vetor);

    return 0;
}