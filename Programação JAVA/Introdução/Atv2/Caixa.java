package Atv2;

public class Caixa {
    double altura, largura, profundidade;
    
    //Construtor
    Caixa(){
        altura = 10.5;
        largura = 12.23;
        profundidade = 14.44;
    }

    //Método
    void calculaVolume(){
        double volume = altura*largura*profundidade;
        
        System.out.print("O volume e de: " + volume);
    }

    void calculaVolume(double alturaNova, double larguraNova, double profundidadeNova){
        double volume = alturaNova*larguraNova*profundidadeNova;
        
        System.out.print("O volume e de: " + volume);
    }
}
