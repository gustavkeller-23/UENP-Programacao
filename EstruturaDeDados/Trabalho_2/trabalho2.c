#include "estoque.h"

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
        
        //command = (char *) malloc ((position+1) * sizeof(char));
        command = realloc (command, (position+1) * sizeof(char));
        command[position] = '\0';
        strncpy(command, linha, position);
        
        // EXECUTA O COMANDO
        
        if(strcmp("MEDICAMENTO", command) == 0){
            
            char *nome_remedio = (char *) malloc (20 * sizeof(char));
            int codigo;
            float val;
            int validade[3];
            
            int separador = 0;
            
            while(separador < 6){
                
                if(linha[position] == ' '){
                    separador++; // Conta os espaços
                    position++;
                }
                
                if(separador == 1){
                    // DEFINE O NOME DO REMEDIO
                    int old_position = position;
                    while(linha[position] != ' '){
                        position++;
                    }
                    
                    command = realloc (command, ((position-old_position+1) * sizeof(char)));
                    nome_remedio = (char *) malloc ((position-old_position+1) * sizeof(char));
                    
                    command[position-old_position+1] = '\0';                    

                    int count = 0;
                    while(linha[old_position] != ' '){
                        command[count] = linha[old_position];
                        old_position++;
                        count++;
                    }
                    
                    strcpy(nome_remedio, command);
                }    
                
                
                if(separador == 2){
                    // DEFINE O CODIGO DO REMEDIO
                    int old_position = position;
                    while(linha[position] != ' '){
                        position++;
                    }
                    
                    command = realloc (command, (1 * sizeof(char)));
                    command = (char *) malloc (position-old_position * sizeof(char));
                    
                    int count = 0;
                    while(linha[old_position] != ' '){
                        command[count] = linha[old_position];
                        old_position++;
                        count++;
                    }
                    
                    codigo = atoi(command);
                }
                
                
                if(separador == 3){
                    // DEFINE O PRECO DO REMEDIO
                    int old_position = position;
                    while(linha[position] != ' '){
                        position++;
                    }
                    
                    command = realloc (command, (1 * sizeof(char)));
                    command = (char *) malloc (position-old_position * sizeof(char));
                    
                    int count = 0;
                    while(linha[old_position] != ' '){
                        command[count] = linha[old_position];
                        old_position++;
                        count++;
                    }
                    
                    val = atof(command);
                }
                
                
                if(separador == 4){
                    // DEFINE O DIA DE VALIDADE DO REMEDIO
                    int old_position = position;
                    while(linha[position] != ' '){
                        position++;
                    }
                    
                    command = realloc (command, (1 * sizeof(char)));
                    command = (char *) malloc (position-old_position * sizeof(char));
                    
                    int count = 0;
                    while(linha[old_position] != ' '){
                        command[count] = linha[old_position];
                        old_position++;
                        count++;
                    }
                    
                    validade[0] = atoi(command);
                }
                
                
                if(separador == 5){
                    // DEFINE O MES DE VALIDADE DO REMEDIO
                    int old_position = position;
                    while(linha[position] != ' '){
                        position++;
                    }
                    
                    command = realloc (command, (1 * sizeof(char)));
                    command = (char *) malloc (position-old_position * sizeof(char));
                    
                    int count = 0;
                    while(linha[old_position] != ' '){
                        command[count] = linha[old_position];
                        old_position++;
                        count++;
                    }
                    
                    validade[1] = atoi(command);
                }
                
                
                if(separador == 6){
                    // DEFINE O ANO DE VALIDADE DO REMEDIO
                    int old_position = position;
                    while(linha[position] != ' '){
                        position++;
                    }
                    
                    command = realloc (command, (1 * sizeof(char)));
                    command = (char *) malloc (position-old_position * sizeof(char));
                    
                    int count = 0;
                    while(linha[old_position] != ' '){
                        command[count] = linha[old_position];
                        old_position++;
                        count++;
                    }
                    
                    validade[2] = atoi(command);
                }
            }

            a = InsereArvoreMedicamento(saida, a, CriaMedicamento(nome_remedio, codigo, val, validade));
            
            free(nome_remedio);

        }else if((strcmp("RETIRA", command)) == 0){
            
            int codigo;
            
            if(linha[position] == ' '){
                position++;
            }
                
            int old_position = position;
            
            while(linha[position] != ' '){
                position++;
            }
                    
            command = realloc (command, (1 * sizeof(char)));
            command = (char *) malloc (position-old_position * sizeof(char));
                    
            int count = 0;
            while(linha[old_position] != ' '){
                command[count] = linha[old_position];
                old_position++;
                count++;
            }
                
            codigo = atoi(command);
            
            a = RetiraArvoreMedicamento(saida, a, codigo);

        }else if((strcmp("IMPRIME_ARVORE", command)) == 0){
            
            ImprimeArvoreMedicamentos(saida, a);
            
        }else if((strcmp("ATUALIZA_PRECO", command)) == 0){
            
            int codigo;
            float novo_val;
            
            int separador = 0;
            
            while(separador < 3){
                
                if(linha[position] == ' '){
                    separador++; // Conta os espaços
                    position++;
                }
                
                if(separador == 1){
                    // DEFINE O CODIGO DO REMEDIO
                    int old_position = position;
                    while(linha[position] != ' '){
                        position++;
                    }
                    
                    command = realloc (command, (1 * sizeof(char)));
                    command = (char *) malloc (position-old_position * sizeof(char));
                    
                    int count = 0;
                    while(linha[old_position] != ' '){
                        command[count] = linha[old_position];
                        old_position++;
                        count++;
                    }
                    
                    codigo = atoi(command);
                }
                
                
                if(separador == 2){
                    // DEFINE O NOVO PRECO DO REMEDIO
                    int old_position = position;
                    while(linha[position] != ' '){
                        position++;
                    }
                    
                    command = realloc (command, (1 * sizeof(char)));
                    command = (char *) malloc (position-old_position * sizeof(char));
                    
                    int count = 0;
                    while(linha[old_position] != ' '){
                        command[count] = linha[old_position];
                        old_position++;
                        count++;
                    }
                    
                    novo_val = atof(command);
                }
            }
            
            AtualizaArvorePreco(saida, a, codigo, novo_val);
            
        }else if((strcmp("VERIFICA_VALIDADE", command)) == 0){
            
            int validade[3];
            
            int separador = 0;
            
            while(separador < 4){
                
                if(linha[position] == ' '){
                    separador++; // Conta os espaços
                    position++;
                }
                
                if(separador == 1){
                    // DEFINE O DIA DE VALIDADE DO REMEDIO
                    int old_position = position;
                    while(linha[position] != ' '){
                        position++;
                    }
                    
                    command = realloc (command, (1 * sizeof(char)));
                    command = (char *) malloc (position-old_position * sizeof(char));
                    
                    int count = 0;
                    while(linha[old_position] != ' '){
                        command[count] = linha[old_position];
                        old_position++;
                        count++;
                    }
                    
                    validade[0] = atoi(command);
                }
                
                
                if(separador == 2){
                    // DEFINE O MES DE VALIDADE DO REMEDIO
                    int old_position = position;
                    while(linha[position] != ' '){
                        position++;
                    }
                    
                    command = realloc (command, (1 * sizeof(char)));
                    command = (char *) malloc (position-old_position * sizeof(char));
                    
                    int count = 0;
                    while(linha[old_position] != ' '){
                        command[count] = linha[old_position];
                        old_position++;
                        count++;
                    }
                    
                    validade[1] = atoi(command);
                }
                
                
                if(separador == 3){
                    // DEFINE O ANO DE VALIDADE DO REMEDIO
                    int old_position = position;
                    while(linha[position] != ' '){
                        position++;
                    }
                    
                    command = realloc (command, (1 * sizeof(char)));
                    command = (char *) malloc (position-old_position * sizeof(char));
                    
                    int count = 0;
                    while(linha[old_position] != ' '){
                        command[count] = linha[old_position];
                        old_position++;
                        count++;
                    }
                    
                    validade[2] = atoi(command);
                }
            }
            
            int ahVencido = 0;
            ahVencido = VerificaArvoreValidade(saida, a, validade, ahVencido);
            if (ahVencido == 0){
                fprintf(saida, "NAO HA MEDICAMENTO VENCIDO\n");
            }

        }else if((strcmp("VERIFICA_ARVORE", command)) == 0){

            int codigo;
            
            // DEFINE O CODIGO DO REMEDIO
            int old_position = position;
            while(linha[position] != ' '){
                position++;
            }
                    
            command = realloc (command, (1 * sizeof(char)));
            command = (char *) malloc (position-old_position * sizeof(char));
                    
            int count = 0;
            while(linha[old_position] != ' '){
                command[count] = linha[old_position];
                old_position++;
                count++;
            }
                    
            codigo = atoi(command);
             
            if(VerificaArvoreMedicamento(a, codigo)){
                fprintf(saida, "MEDICAMENTO ENCONTRADO\n");
            } else {
                fprintf(saida, "MEDICAMENTO NAO ENCONTRADO\n");
            }
            
        }

        free(linha);
    } while(strcmp(command, "FIM"));


    //Limpeza da arvore
    arv_libera(a);

    fclose(entrada);
    fclose(saida);

    return 0;
}