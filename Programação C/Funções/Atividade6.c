#include <stdio.h>

float IMC (int peso, float altura){
    return peso/(altura*altura);
}
int class(float tabela){
    if (tabela < 18.5) {
        return 1;
    } else if (tabela <= 24.9) {
        return 2;
    } else if (tabela <= 29.9) {
        return 3;
    } else {
        return 4;
    }
}

int main () {

    int kilos;
    float metros, valor;
    
    printf("Quantos kilos voce pesa?\n");
    scanf("%d", &kilos);
    printf("Quantos metros voce tem?\n");
    scanf("%f", &metros);
    
    valor = IMC(kilos, metros);

    switch (class(valor)){
        case 1:
            printf("Seu IMC e de %.2f, e esta na classificacao Abaixo do peso", valor);
            break;
        case 2:
            printf("Seu IMC e de %.2f, e esta na classificacao Peso normal", valor);
            break;
        case 3:
            printf("Seu IMC e de %.2f, e esta na classificacao Sobrepeso", valor);
            break;
        case 4:
            printf("Seu IMC e de %.2f, e esta na classificacao Obeso", valor);
            break;
        default:
            break;
    }
	return 0;
}