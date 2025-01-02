
/*Faça um programa que leia uma string de no máximo 100 caracteres. Em seguida, implemente uma função para calcular e
 mostrar o total de palavras da string lida. Para isso, utilize o protótipo de função a seguir.
 int totalPalavras ( char ∗str ) {

 }*/

 #include <stdio.h>

int totalPalavras (char *str, char text[], int tam) {
    int palavras = 1;
    for (int i = 0; i < tam; i++){
        str = &text[i];
        if (*str == ' ')
            palavras++;
    }
    return palavras;
}

int main(){
    char texto[100], *strs;
    int totalDePalavras;

    printf("Digite um texto: ");
    fgets(texto, 100, stdin);

    totalDePalavras = totalPalavras(strs, texto, 100);

    printf("O texto tem um total de %d palavras", totalDePalavras);

    return 0;
}