#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int FuncaoBusca(int *v, int sizeVetor, int val){
    int iteracoes = 0;
    for(int i = 0; i < sizeVetor; i++){
        iteracoes += 1;
        if(v[i] == val){
            return i;
        }
    }

    return i;
}

int geraPosRandomBusca(){
    return (rand() * 100);
}

int main(){

    FILE *p = fopen("arquivoSequencial.txt", "a");

    int *vetor, sizeVetor, *iteracoes;
    iteracoes = (int *) malloc (30 * sizeof(int));

    for(int j = 0; j < 3; j++){

        int val;

        if(j == 0){
            val = 0;
            fprintf(p, "Melhor Caso:\n");
        }
        else if(j == 1){
            val = geraPosRandomBusca();
            srand(time(0));
            fprintf(p, "Caso Médio:\n");
        }
        else{
            val = 5000;
            fprintf(p, "Pior Caso:\n");
        }

        for(int sizeVetor = 5000; sizeVetor <= 50000; sizeVetor += 5000){
            
            if(j == 2){
                val = sizeVetor;
            }

            vetor = (int *) malloc (sizeVetor * sizeof(int));
            for(int i = 0; i < sizeVetor; i++){
                vetor[i] = i;
            }

            fprintf(p, "    Tam. do vetor: %d", k);

            for(int i = 0; i < 30; i++){
                fprintf(p, "     Iteração: %d  --  ", i);
                iteracoes[i] = FuncaoBusca(vetor, sizeVetor, val);
                fprintf(p, "%d \n", iteracoes[i]);
            }

            free(vetor);

            fprintf(p, "\n");
        }
        fprintf(p, "\n\n");
    }

    free(iteracoes);

    fclose(p);

    return 0;
}