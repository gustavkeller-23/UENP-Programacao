#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int chave;
    struct No* esq;
    struct No* dir;
    int altura;
} No;

int countOutPut=0;
No* arvore = NULL;

void printNodes(FILE* f, No* no) {
    if (no != NULL) {
        if (no->esq != NULL)
            fprintf(f, "%d -> %d;\n", no->chave, no->esq->chave);
        if (no->dir != NULL)
            fprintf(f, "%d -> %d;\n", no->chave, no->dir->chave);
        printNodes(f, no->esq);
        printNodes(f, no->dir);
    }
}

void printGraphviz(No* raiz) {
    if(raiz==NULL || raiz->esq==NULL && raiz->dir==NULL) return;
    char filename[50];
    sprintf(filename, "orvere_%d.dot", countOutPut);
    FILE* f = fopen(filename, "w");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo de saída\n");
        exit(1);
    }
    countOutPut++;
    fprintf(f, "digraph AVL {\n");
    printNodes(f, raiz);
    fprintf(f, "}\n");
    fclose(f);
}

int altura(No* n) {
    if (n == NULL)
        return 0;
    return n->altura;
}

int maior(int a, int b) {
    return (a >= b) ? a : b;
}

int obterBalanceamento(No* no) {
    if (no == NULL)
        return 0;
    return altura(no->esq) - altura(no->dir);
}

No* criarNo(int chave) {
    No* no = malloc(sizeof(No));
    no->chave = chave;
    no->esq = NULL;
    no->dir = NULL;
    no->altura = 1;
    return no;
}

No* rotacionarDireita(No* no) {
    No* novoPai = no->esq;
    No* temp = novoPai->dir;
    novoPai->dir = no;
    no->esq = temp;
    no->altura = 1 + maior(altura(no->esq), altura(no->esq));
    novoPai->altura = 1 + maior(altura(novoPai->dir), altura(novoPai->dir));
    return novoPai;
}

No* rotacionarEsquerda(No* no) {
    No* novoPai = no->dir;
    No* temp = novoPai->esq;
    novoPai->esq = no;
    no->dir = temp;
    no->altura = 1 + maior(altura(no->esq), altura(no->dir));
    novoPai->altura = 1 + maior(altura(novoPai->esq), altura(novoPai->dir));
    return novoPai;
}


No* inserirNo(No* no, int chave) {
    if (no == NULL)
        return criarNo(chave);
    if (chave < no->chave)
        no->esq = inserirNo(no->esq, chave);
    else if (chave > no->chave)
        no->dir = inserirNo(no->dir, chave);
    else
        return no;
    
    printGraphviz(arvore);

    no->altura = 1 + maior(altura(no->esq), altura(no->dir));
    int balanceamento = obterBalanceamento(no);

    if (balanceamento < -1){
        if (chave < no->dir->chave) {
            no->dir = rotacionarDireita(no->dir);
            printGraphviz(arvore);
        }
        no = rotacionarEsquerda(no);
    }


    if (balanceamento > 1){
        if(chave > no->esq->chave){
            no->esq = rotacionarEsquerda(no->esq);
            printGraphviz(arvore);
        }
        no = rotacionarDireita(no);
    }

    return no;
}

int main() {

    // 10 rotaciona a esquerda
    // arvore = inserirNo(arvore, 10);
    // printGraphviz(arvore);
    // arvore = inserirNo(arvore, 20);
    // printGraphviz(arvore);
    // arvore = inserirNo(arvore, 30);
    // printGraphviz(arvore);

    // 30 rotaciona a direita
    // arvore = inserirNo(arvore, 30);
    // printGraphviz(arvore);
    // arvore = inserirNo(arvore, 20);
    // printGraphviz(arvore);
    // arvore = inserirNo(arvore, 10);
    // printGraphviz(arvore);
    
    // rotação dupla a direita:
        // rotaciona a esquerda, depois direita
    // arvore = inserirNo(arvore, 10);
    // printGraphviz(arvore);
    // arvore = inserirNo(arvore, 30);
    // printGraphviz(arvore);
    // arvore = inserirNo(arvore, 20);
    // printGraphviz(arvore);

    // rotação dupla a esquerda
        // rotaciona a direita, depois a esquerda
    // arvore = inserirNo(arvore, 30);
    // arvore = inserirNo(arvore, 10);
    // arvore = inserirNo(arvore, 20);

    // exemplo maior
    arvore = inserirNo(arvore, 50);
    printGraphviz(arvore);
    arvore = inserirNo(arvore, 30);
    printGraphviz(arvore);
    arvore = inserirNo(arvore, 70);
    printGraphviz(arvore);
    arvore = inserirNo(arvore, 40);
    printGraphviz(arvore);
    arvore = inserirNo(arvore, 10);
    printGraphviz(arvore);
    arvore = inserirNo(arvore, 60);
    printGraphviz(arvore);
    arvore = inserirNo(arvore, 80);
    printGraphviz(arvore);
    arvore = inserirNo(arvore, 5);
    printGraphviz(arvore);
    arvore = inserirNo(arvore, 4);
    printGraphviz(arvore);
    arvore = inserirNo(arvore, 3);
    printGraphviz(arvore);
    arvore = inserirNo(arvore, 2);
    printGraphviz(arvore);
    arvore = inserirNo(arvore, 1);
    printGraphviz(arvore);

    // faça a remoção:
        // parecido com ABB, maaaas 
        // com balancemamento
    return 0;
}