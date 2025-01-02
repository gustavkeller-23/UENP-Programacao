#include <stdio.h>

int main() {
    int n=0, vet[n], count=0;
    int continuar = 0;

    printf("Digite quantos numeros quiser, para encerrar digite -1\n");
    while(continuar != -1){
        printf("Digite um numero: ");
        scanf("%d", &vet[n]);
        n++;
        
        printf("Deseja inserir mais numeros?");
        scanf("%d", &continuar);
    }

    for (int i = 0; i < n; i++){
        if (vet[i] >= 10 && vet[i] <=50)
            count++;
    }
    
    printf("Existem %d numeros entre 10 e 50", count);

    return 0;
}