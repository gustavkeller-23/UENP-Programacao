
/*Fa ̧ca um programa para cadastrar um conjunto de at ́e 100 lojas contendo os seguintes
campos: nome da loja, endere ̧co, telefone e pre ̧co de um determinado produto eletrˆonico.
Em seguida, o programa deve exibir a m ́edia dos pre ̧cos dos produtos cadastrados e uma
rela ̧c ̃ao contendo o nome, endere ̧co e telefone das lojas cujo pre ̧co es ̃ao abaixo da m ́edia
calculada.*/

#include <stdio.h>

#define NUMERO_DE_LOJAS 100
int numLoja = 0;

struct Produtos{
    char nomeProdutos[20];
    float precoProdutos;
};

struct Loja {
    char nomeLoja[25];
    char endereco[25];
    int telefone;
    struct Produtos produto;
};

// Definindo as funções
void cadastrarLoja(struct Loja lojas[NUMERO_DE_LOJAS]);
void cadastrarProdutosDaLoja(struct Loja lojas[NUMERO_DE_LOJAS], int numero_da_loja);
void calcularMediaProdutos(struct Loja lojas[NUMERO_DE_LOJAS]);
void imprimirLojas(struct Loja lojas[NUMERO_DE_LOJAS], float mediaDosPrecos);


void cadastrarLoja(struct Loja lojas[NUMERO_DE_LOJAS]) {
    int pararLoja = 1;

    while(pararLoja != 0 && numLoja != NUMERO_DE_LOJAS){
        printf("Cadastre o nome da loja: ");
        fgets(lojas[numLoja].nomeLoja, 25, stdin);
        setbuf(stdin, NULL);

        printf("Cadastre o endereco da loja: ");
        fgets(lojas[numLoja].endereco, 25, stdin);
        setbuf(stdin, NULL);

        printf("Cadastre o telefone da loja: ");
        scanf("%d", &lojas[numLoja].telefone);
        setbuf(stdin, NULL);
        
        cadastrarProdutosDaLoja(lojas, numLoja);

        printf("Deseja Cadastrar mais alguma loja?\n     0 - nao     1 - sim\n");
        scanf("%d", &pararLoja);
        setbuf(stdin, NULL);
        numLoja++;
    }
}

void cadastrarProdutosDaLoja(struct Loja lojas[NUMERO_DE_LOJAS], int numero_da_loja){
    printf("Cadastre um produto: ");
    fgets(lojas[numero_da_loja].produto.nomeProdutos, 20, stdin);
    setbuf(stdin, NULL);

    printf("Cadastre o seu preco: ");
    scanf("%f", &lojas[numero_da_loja].produto.precoProdutos);
    setbuf(stdin, NULL);
}

void calcularMediaProdutos(struct Loja lojas[NUMERO_DE_LOJAS]) {
    
    float media = 0;
    for (int i = 0; i < numLoja; i++)
        media = media + lojas[i].produto.precoProdutos;
    media = media /numLoja;
    printf("\nA media dos precos dos produtos e: \n -- -- %f -- --\n", media);
    
    imprimirLojas(lojas, media);
}

void imprimirLojas(struct Loja lojas[NUMERO_DE_LOJAS], float mediaDosPrecos) {
    printf("As lojas cujos produtos sao menores que a media sao: \n\n");
    for (int i = 0; i < numLoja; i++){
        if (lojas[i].produto.precoProdutos < mediaDosPrecos){
            printf("Nome da loja: %s", lojas[i].nomeLoja);
            printf("Endereco da loja: %s", lojas[i].endereco);
            printf("Telefone da loja: %d \n\n", lojas[i].telefone);
        }
    }
}

int main() {
    struct Loja lojas[NUMERO_DE_LOJAS];
    
    cadastrarLoja(lojas);

    calcularMediaProdutos(lojas);

    return 0;
}