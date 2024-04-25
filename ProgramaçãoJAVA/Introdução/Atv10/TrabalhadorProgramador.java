package Atv10;

public class TrabalhadorProgramador {
    
    String nome;
    int salarioMensal;
    int horasExtras;
    double valorHoraExtra;

    TrabalhadorProgramador(){
        nome = "";
        salarioMensal = 0;
        horasExtras = 0;
        valorHoraExtra = 0.0;
    }

    TrabalhadorProgramador(String nome, int salarioMensal, int horasExtras, double valorHoraExtra){
        this.nome = nome;
        this.salarioMensal = salarioMensal;
        this.horasExtras = horasExtras;
        this.valorHoraExtra = valorHoraExtra;
    }

    double calcularSalario(){
        return salarioMensal + (horasExtras * valorHoraExtra);
    }
}
