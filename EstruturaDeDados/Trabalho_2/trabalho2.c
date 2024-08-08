#include "estoque.h"

int dataSelect(char *c, char *l, int p);

int dataSelect(char *c, char *l, int position){

    while(l[position] != ' ' && l[position] != '\n'){
        *c = l[position];
        ++c;
        position++;
    }

    return position+1;
}


int main(){

    Arvore *a = CriaArvore();

    FILE *entrada = fopen("entrada.txt", "r");
    FILE *saida = fopen("saida.txt", "w+");
    
    if (entrada == NULL){
        printf("Problemas na CRIACAO do arquivo\n");
        return 0;
    }
    
    char texto[50]; // VARIAVEIS PARA LER E GUARDAR O TEXTO DE ENTRADA
    char *command = (char *) malloc (sizeof(char)); // VARIAVEL QUE É RESPONSÁVEL POR DEFINIR O COMANDO
    
    char comandos[30];

    int position;
    
    do {
        // ESSE CÓDIGO LIMPA A STRING DE COMANDO
        char *linha = malloc(100 * sizeof(char));
        position = 0;
        //command = realloc (command, sizeof(char));
        
        // ESSE CODIGO LE O COMANDO DE ENTRADA
        linha = fgets(texto, 60, entrada);
        while(linha[position] != ' '){
            position++;
        }
        
        command = realloc (command, (position+1) * sizeof(char));
        command[position] = '\0';
        strncpy(command, linha, position);
        position++;


        if(strcmp("MEDICAMENTO", command) == 0){
            
            char nome_remedio[20];
            int codigo;
            float val;
            int validade[3] = {0, 0, 0};
            
            // RECEBE OS DADOS DO NOME DO MEDICAMENTO
            for (int i = 0; i < 30; i++){
                comandos[i] = ' ';
            }
            position = dataSelect(comandos, linha, position);

            for (int i = 0; i < 20; i++){
                if (comandos[i] == ' ')
                    nome_remedio[i] = '\0';
                else
                    nome_remedio[i] = comandos[i];
            }
                            
            // RECEBE OS DADOS DO CODIGO DO MEDICAMENTO
            for (int i = 0; i < 30; i++){
                comandos[i] = ' ';
            }
            position = dataSelect(comandos, linha, position);

            codigo = atoi(comandos);

            // RECEBE OS DADOS DO PRECO
            for (int i = 0; i < 30; i++){
                comandos[i] = ' ';
            }
            position = dataSelect(comandos, linha, position);

            val = atof(comandos);                

            // RECEBE OS DADOS DA DATA DE VALIDADE
            for(int i = 0; i < 3; i++){
                for (int j = 0; j < 30; j++){
                    comandos[j] = ' ';
                }
                position = dataSelect(comandos, linha, position);

                validade[i] = atoi(comandos);
            }

            a = InsereArvoreMedicamento(saida, a, CriaMedicamento(nome_remedio, codigo, val, validade));
            
        }else if((strcmp("RETIRA", command)) == 0){
            
            int codigo;
            
            for (int i = 0; i < 30; i++){
                comandos[i] = ' ';
            }
            position = dataSelect(comandos, linha, position);

            codigo = atoi(comandos);
            
            a = RetiraArvoreMedicamento(saida, a, codigo);

        }else if((strcmp("IMPRIME_ARVORE", command)) == 0){
            
            ImprimeArvoreMedicamentos(saida, a);
            
        }else if((strcmp("ATUALIZA_PRECO", command)) == 0){
            
            int codigo;
            float novo_val;
            
            int separador = 0;
            
            for (int i = 0; i < 30; i++){
                comandos[i] = ' ';
            }
            position = dataSelect(comandos, linha, position);

            codigo = atoi(comandos);


            for (int i = 0; i < 30; i++){
                comandos[i] = ' ';
            }
            position = dataSelect(comandos, linha, position);

            novo_val = atof(comandos);
            
            AtualizaArvorePreco(saida, a, codigo, novo_val);
            
        }else if((strcmp("VERIFICA_VALIDADE", command)) == 0){
            
            int validade[3];

            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 30; j++){
                    comandos[j] = ' ';
                }
                position = dataSelect(comandos, linha, position);

                validade[i] = atoi(comandos);
            }
           
            int ahVencido = 0;
            ahVencido = VerificaArvoreValidade(saida, a, validade, ahVencido);
            if (ahVencido == 0){
                fprintf(saida, "NAO HA MEDICAMENTO VENCIDO\n");
            }

        }else if((strcmp("VERIFICA_ARVORE", command)) == 0){
                        
            for (int i = 0; i < 30; i++){
                comandos[i] = ' ';
            }
            position = dataSelect(comandos, linha, position);

            int codigo = atoi(comandos);
             
            if(VerificaArvoreMedicamento(a, codigo)){
                fprintf(saida, "MEDICAMENTO ENCONTRADO\n");
            } else {
                fprintf(saida, "MEDICAMENTO NAO ENCONTRADO\n");
            }
            
        }

        free(linha);
    } while(strcmp(command, "FIM"));

    ArvoreLibera(a);

    fclose(entrada);
    fclose(saida);

    return 0;
}