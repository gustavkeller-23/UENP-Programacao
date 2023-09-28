#include <stdio.h>

int segundos(int x, int y, int z){
    int tempo;
    tempo = x * 3600;
    tempo = tempo + (y * 60);
    tempo = tempo + z;
    return tempo;
}

int main () {

    int horario_hr, horario_min, horario_sec;
    
    printf("Digite que horas sao: \n");
    printf("HORAS: ");
    scanf("%d \n", &horario_hr);
    printf("MINUTOS: ");
    scanf("%d \n", &horario_min);
    printf("SEGUNDOS: ");
    scanf("%d \n", &horario_sec);
    
    printf("Esse horario equivale a %d segundos.\n", segundos(horario_hr, horario_min, horario_sec));
    
	return 0;
}