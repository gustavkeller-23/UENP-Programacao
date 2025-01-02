
/*Uma empresa precisa de um banco de dados para armazenar os dados dos usu ́arios de sua
rede social. Inicialmente o programa deve receber a quantidade de usu ́arios que deseja
cadastrar. Em seguida, as seguintes informa ̧c ̃oes devem ser guardadas para cada usu ́ario:
• Idade;
• Nome;
• Sexo (m - masculino, f - feminino);
• Estado civil (s - solteiro, c - casado, n - namorando, d - divorciado);
• Quantidade de amigos;
• Quantidade de fotos que est ̃ao no perfil.
Ao final, o programa deve exibir as informa ̧c ̃oes de todos os usu ́arios, na sequˆencia em que
eles foram adicionados.*/

#include <stdio.h>

struct Usuario{
    int idade;
    char nome[20];
    char sexo;//m-masc f-fem
    char estadoCivil; // (s - solteiro, c - casado, n - namorando, d - divorciado);
    int quantAmigos;
    int quantFotos;
};

void cadastrarUsuarios(int numUsuarios, struct Usuario usuariosRedeSocial[numUsuarios]){
    for (int i = 0; i < numUsuarios; i++) {
        printf("\n  -- USUARIO %d -- \n", i+1);
        printf("Qual a idade do Usuario: \n");
        scanf("%d", &usuariosRedeSocial[i].idade);
        setbuf(stdin, NULL);

        printf("Qual o nome do Usuario (abrevie tudo menos o Primeiro e Ultimo nome): \n");
        fgets(usuariosRedeSocial[i].nome, 20, stdin);
        setbuf(stdin, NULL);

        printf("Qual o sexo do Usuario ( digite: m - MASCULINO ou f-FEMININO): \n");
        scanf(" %c", &usuariosRedeSocial[i].sexo);
        setbuf(stdin, NULL);

        printf("Qual o Estado Civil do Usuario (digite: s - SOLTEIRO, c - CASADO, n - NAMORANDO, d - DIVORCIADO): \n");
        scanf(" %c", &usuariosRedeSocial[i].estadoCivil);
        setbuf(stdin, NULL);

        printf("Quantos amigos o Usuario tem: \n");
        scanf("%d", &usuariosRedeSocial[i].quantAmigos);
        setbuf(stdin, NULL);

        printf("Quantas fotos o Usuario tem: \n");
        scanf("%d", &usuariosRedeSocial[i].quantFotos);
        setbuf(stdin, NULL);
    }
}

int main() {
    int quantUsuarios;

    printf("Qual a quantidade de usuarios que voce quer cadastrar?\n");
    scanf("%d", &quantUsuarios);

    //Criando Structs pra cada 1
    struct Usuario usuariosRedeSocial[quantUsuarios];

    cadastrarUsuarios(quantUsuarios, usuariosRedeSocial);

    for (int i = 0; i < quantUsuarios; i++){
        printf("\n  -- USUARIO %d -- \n", i);
        printf("Idade: %d\n", usuariosRedeSocial[i].idade);
        printf("Nome: %s", usuariosRedeSocial[i].nome);
        (usuariosRedeSocial[i].sexo == 'm') ? printf("Sexo:  MASCULINO\n") : printf("Sexo:  FEMININO\n");
        switch (usuariosRedeSocial[i].estadoCivil){
            case 's':
                printf("Estado Civil: SOLTEIRO\n"); break;
            case 'c':
                printf("Estado Civil: CASADO\n"); break;
            case 'n':
                printf("Estado Civil: NAMORANDO\n"); break;
            default:
                printf("Estado Civil: DIVORCIADO\n"); break;
        }
        printf("Quantidade de amigos: %d\n", usuariosRedeSocial[i].quantAmigos);
        printf("Quantidade de Fotos: %d\n", usuariosRedeSocial[i].quantFotos);
        printf("\n");
    }
    
    return 0;
}
