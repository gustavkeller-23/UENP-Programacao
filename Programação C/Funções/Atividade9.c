#include <stdio.h>

int segundos(int hora, int min, int sec){
    return (hora * 3600) + (min * 60) + sec;
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