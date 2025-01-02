
/*Implemente uma função que receba um vetor de inteiros, o tamanho do vetor e um inteiro
pós passado por referência. A função retorna o maior elemento do vetor e, na variável pós,
a posição do maior elemento do vetor.*/

#include <stdio.h>

int vetor(int vetorCompleto[], int numeroDeItens, int posPassado){
    int maiorNumero=0;
    for (int i = 0; i < numeroDeItens; i++){
        if (vetorCompleto[i] > maiorNumero){
            maiorNumero = vetorCompleto[i];
            posPassado = i;
        }   
    }
    return posPassado;
}

int main(){
    int quant, pos;

    printf("Quantos numeros voce quer no vetor?");
    scanf("%d", &quant);

    int vet[quant];

    printf("Digite esses numeros: ");
    for (int i = 0; i < quant; i++)
        scanf("%d", &vet[i]);
    
    pos = vetor(vet, quant, pos);
    printf("O maior valor e %d e esta na posicao %d", vet[pos], pos+1);

    return 0;
}