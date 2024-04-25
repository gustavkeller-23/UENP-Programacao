package Atv7;

public class Atv7 {
 
    public static void main(String[] args) {
        
        TrabalhadorHorista trabalhador1 = new TrabalhadorHorista();
        TrabalhadorHorista trabalhador2 = new TrabalhadorHorista(10.53, 43);

        System.out.println("O salario e: "+trabalhador1.calcularSalario());
        System.out.println("O salario e: "+trabalhador2.calcularSalario());
    }

}
