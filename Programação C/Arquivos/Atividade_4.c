
// 4. Implemente um programa que leia os nomes de dois arquivos texto. Depois, crie um terceiro
// arquivo texto contendo o conte ́udo do primeiro seguido do conte ́udo do segundo.

#include <stdio.h>
#include <stdlib.h>

int main(){

char nomeArqu1[50], nomeArqu2[50], nomeArqu3[50];

    FILE *fp1 = fopen(nomeArqu1, "r");
    FILE *fp2 = fopen(nomeArqu2, "r");
    FILE *fp3 = fopen(nomeArqu3, "w");

    char conteudo;

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", nomeArqu1);
    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", nomeArqu2);
    printf("Digite o nome do terceiro arquivo: ");
    scanf("%s", nomeArqu3);

    if (!fp1 || !fp2 || !fp3) {
        printf("Erro ao abrir os arquivos.\n");
        exit(1);
    }

    while ((conteudo = fgetc(fp1)) != EOF) {
        fputc(conteudo, fp3);
    }
    while ((conteudo = fgetc(fp2)) != EOF) {
        fputc(conteudo, fp3);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}