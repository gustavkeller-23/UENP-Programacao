package Atv10;

public class Atv10 {
    
    public static void main(String[] args) {
        
        TrabalhadorProgramador programador1 = new TrabalhadorProgramador();
        TrabalhadorProgramador programador2 = new TrabalhadorProgramador("Celso Careca", 1200, 14, 15.4);


        System.out.println("Trabalhador 1: "+programador1.calcularSalario()+" reais");
        System.out.println("Trabalhador 2: "+programador2.calcularSalario()+" reais");
    }
}
