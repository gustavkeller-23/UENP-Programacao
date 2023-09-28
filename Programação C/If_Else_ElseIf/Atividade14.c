#include <stdio.h>
#include <ctype.h>

int main () 
{
    float trajetoPercorrido, consumoEstimado;
    char tipoVeiculo;
    printf ("Qual o seu tipo de carro, e quantos kilometros ele andou?\n");
    scanf ("%c %f", &tipoVeiculo, &trajetoPercorrido);
    tipoVeiculo = toupper (tipoVeiculo);
    switch (tipoVeiculo) {
        case ('A'):
            consumoEstimado = trajetoPercorrido / 15;
            printf ("O consumo estimado desse veiculo foi de %.2f", consumoEstimado);
            break;
        case ('B'):
            consumoEstimado = trajetoPercorrido / 12;
            printf ("O consumo estimado desse veiculo foi de %.2f", consumoEstimado);
            break;
        case ('C'):
            consumoEstimado = trajetoPercorrido / 10;
            printf ("O consumo estimado desse veiculo foi de %.2f", consumoEstimado);
            break;
        default:
            printf ("Esse tipo de carro nao existe");
            break;
    }
    return 0;
}