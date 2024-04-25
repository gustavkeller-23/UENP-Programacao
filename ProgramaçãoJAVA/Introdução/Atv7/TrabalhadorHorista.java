package Atv7;

public class TrabalhadorHorista {

    double valorHora;
    int horasTrabalhadas;

    TrabalhadorHorista(){
        valorHora = 0.0;
        horasTrabalhadas = 0;
    }

    TrabalhadorHorista(double valorHora, int horasTrabalhadas){
        this.valorHora = valorHora;
        this.horasTrabalhadas = horasTrabalhadas;
    }

    double calcularSalario(){
        return valorHora*horasTrabalhadas;
    }

}