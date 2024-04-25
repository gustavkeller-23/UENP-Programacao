package Atv8;

public class Carro {
    
    String marca;
    String modelo;
    int anoFabricacao;
    int velocidade;

    Carro(){
        this.marca = "";
        this.modelo = "";
        this.anoFabricacao = 0;
        this.velocidade = 0;
    }

    Carro(String marca, String modelo, int anoFabricacao){
        this.marca = marca;
        this.modelo = modelo;
        this.anoFabricacao = anoFabricacao;
        this.velocidade = 0;
    }

    void acelerar(){
        if(this.velocidade < 200){
            this.velocidade += 1;
        }
        System.out.println(velocidade+"km");
    }
    void frear(){
        if(this.velocidade > 0){
            this.velocidade -= 1;
        }
        System.out.println(velocidade+"km");
    }
}
