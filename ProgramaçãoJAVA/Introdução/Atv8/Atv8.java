package Atv8;

public class Atv8 {
    
    public static void main(String[] args) {
        
        Carro carro1 = new Carro();
        Carro carro2 = new Carro("Sla", "Tanto faz", 1999);

        System.out.println(carro2.velocidade+"km");

        for(int i = 0; i < 120; i++){
            carro1.acelerar();
            carro2.acelerar();
        }

        carro1.frear();
        carro2.acelerar();

        for(int i = 0; i < 120; i++){
            carro1.frear();
            carro2.acelerar();
        }
    }
    
}
