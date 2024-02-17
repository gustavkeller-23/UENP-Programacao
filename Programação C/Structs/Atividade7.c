
/*Fa ̧ca um programa para cadastrar o card ́apio de um restaurante. O programa deve ler um
inteiro n, representando o n ́umero de produtos a serem cadastrados, seguido pelo cadastro
dos n produtos, em que ser ̃ao lidos para cada produto, o c ́odigo de identifica ̧c ̃ao, a descri ̧c ̃ao
do produto e o pre ̧co. Em seguida, s ̃ao lidos os pedidos. O pedido consiste do c ́odigo do
produto e da quantidade de itens daquele produto que ser ́a pedido. O pedido se encerra
quando o c ́odigo lido  ́e igual a 0. Se o cliente pede um produto n ̃ao cadastrado ou uma
quantidade negativa o pedido  ́e considerado inv ́alido.
Ao final, o programa deve calcular quantos itens o cliente escolheu de cada c ́odigo e exibir
o valor que o cliente deve pagar. Pedidos inv ́alidos s ̃ao ignorados.*/

#include <stdio.h>

struct Cardapio{
    int codigoID;
    char descricao[70];
    float preco;
};

struct Pedido {
    int codigo;
    int quantidade;
};


int main(){

    int quantCadastros;

    printf("Quantos produtos voce deseja cadastrar?\n");
    scanf("%d", &quantCadastros);

    struct Cardapio produtos[quantCadastros];

    for (int i = 0; i < quantCadastros; i++){
        printf("Qual o codigo ID desse produto: ");
        scanf("%d", &produtos[i].codigoID);
        setbuf(stdin, NULL);
        
        printf("De uma descricao ao produto: ");
        fgets(produtos[i].descricao, 70, stdin);
        setbuf(stdin, NULL);

        printf("Qual o preco desse produto: ");
        scanf("%f", &produtos[i].preco);
        setbuf(stdin, NULL);
    }
    
    int codigo = 1;
    int num = 0;
    struct Pedido quantidade[30];
    while (codigo != 0){        
        printf("Insira o codigo do produto: ");
        scanf("%d", &codigo);
        if (codigo == 0)
            break;
        if (codigo < 0){
            printf("Nao existe um codigo com esse valor");
            continue;
        }
        
        quantidade[num].codigo = codigo;
        printf("Insira a quantidade desse produto: ");
        scanf("%d", &quantidade[num].quantidade);
    
        num++;
    }
    
    float valorTotal = 0;
    for (int i = 0; i < num-1; i++){
        for (int j = 0; j < quantCadastros; j++){
            if (quantidade[i].codigo == produtos[j].codigoID){
                valorTotal = valorTotal + (produtos[j].preco * quantidade[i].quantidade);
            }
        }
    }
    
    printf("O valor da conta ficou: %.2f", valorTotal);
    
    

    return 0;
}